/*
 * XREFs of MiAllocateModWriterEntry @ 0x14034A048
 * Callers:
 *     MiMappedPageWriter @ 0x140391790 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403AFB9C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x140833D94 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x14034A0B4 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID Pool; // rbx

  Pool = MiAllocatePool(64, 8 * a2 + 264, 0x65576D4Du);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
