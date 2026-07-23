/*
 * XREFs of VfPoolIsInternalFree @ 0x1405D210C
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140AC01B2 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140AE2198 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x140AE43AC (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CF80A8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CF8128 )
      return 0LL;
  }
  return 1LL;
}
