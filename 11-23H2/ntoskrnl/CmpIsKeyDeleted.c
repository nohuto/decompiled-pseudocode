/*
 * XREFs of CmpIsKeyDeleted @ 0x1407CB1FC
 * Callers:
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D52B8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DAFD0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140A1A1B0 (CmpSyncKcbCacheForHive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A1A208 (CmpVEExecuteRealStoreParseLogic.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EAC (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B6C (CmpStartKcbStackForTopLayerKcb.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1)
{
  bool IsKeyStackDeleted; // bl
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v3 = 0LL;
  WORD1(v3) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpStartKcbStackForTopLayerKcb((__int64)&v3, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted((__int64)&v3);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
