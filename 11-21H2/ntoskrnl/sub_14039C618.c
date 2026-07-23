/*
 * XREFs of sub_14039C618 @ 0x14039C618
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     sub_14039BA38 @ 0x14039BA38 (sub_14039BA38.c)
 *     sub_14063CD9C @ 0x14063CD9C (sub_14063CD9C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_BYTE *sub_14039C618()
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *result; // rax

  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x454F5246u);
    v1 = PoolWithTag;
  }
  while ( !PoolWithTag );
  memset(PoolWithTag, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  result = v1;
  v1[17] |= 2u;
  *((_QWORD *)v1 + 4) = CurrentThread;
  return result;
}
