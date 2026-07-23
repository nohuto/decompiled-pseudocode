/*
 * XREFs of HvpCopyModifiedData @ 0x1407FE950
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1407FE89C (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     HvpMapEntryGetBlockAddress @ 0x1406E0264 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1407E89E0 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     HvpGetCellMap @ 0x140AF5280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int v10; // r9d
  _QWORD *CellMap; // rax
  unsigned int v12; // r8d
  __int64 v13; // rsi
  void *BlockAddress; // rax
  __int16 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  result = HvpGetBinContextInitialize(&v15);
  v9 = 0;
  if ( v10 )
  {
    do
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v9 + a2);
      v13 = (__int64)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0xC40uLL);
      BlockAddress = (void *)HvpMapEntryGetBlockAddress(BugCheckParameter2, CellMap, (__int64)&v15);
      memmove(BlockAddress, (const void *)(a3 + v9), 0x1000uLL);
      result = HvpMapEntryReleaseBlockAddress(BugCheckParameter2, v13, (__int64)&v15);
      v9 += 4096;
    }
    while ( v9 < a4 );
  }
  return result;
}
