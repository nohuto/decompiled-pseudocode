/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x140A48090
 * Callers:
 *     MiFreePlaceholderStorage @ 0x1406834D8 (MiFreePlaceholderStorage.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB7EC (MiReleaseVadEventBlocks.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePlaceholderVadEvent(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rbx

  v1 = *(void **)(a1 + 8);
  v2 = 72LL;
  if ( v1 )
  {
    v2 = 136LL;
    ExFreePoolWithTag(v1, 0);
  }
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2);
}
