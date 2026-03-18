/*
 * XREFs of MiFreeModWriterEntry @ 0x14028C978
 * Callers:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x14058DC5C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
