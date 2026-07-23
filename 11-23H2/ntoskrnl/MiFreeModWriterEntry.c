/*
 * XREFs of MiFreeModWriterEntry @ 0x1402F4B2C
 * Callers:
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140391790 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140629798 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x140A32AB0 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1402F4B68 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
