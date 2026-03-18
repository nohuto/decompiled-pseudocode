/*
 * XREFs of MiFreeModWriterEntry @ 0x1402F489C
 * Callers:
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1406292B8 (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x140A32870 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1402F48D8 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
