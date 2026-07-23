/*
 * XREFs of MiDeleteAweInfo @ 0x140A41CF8
 * Callers:
 *     MiDeleteSectionAwe @ 0x140649E8C (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140A402DC (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41940 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD630 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x140A41CA8 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
