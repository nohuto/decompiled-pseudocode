/*
 * XREFs of CmpIsKeyDeleted @ 0x14071A6D4
 * Callers:
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406A52D4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x1409176B0 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  char IsKeyStackDeleted; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  WORD1(v5) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpStartKcbStackForTopLayerKcb(&v5, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted(&v5, a2);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return IsKeyStackDeleted;
}
