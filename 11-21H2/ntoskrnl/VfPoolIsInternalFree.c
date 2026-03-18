/*
 * XREFs of VfPoolIsInternalFree @ 0x140601948
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140A7F132 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140A9EFF8 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CE1DE8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CE1E68 )
      return 0LL;
  }
  return 1LL;
}
