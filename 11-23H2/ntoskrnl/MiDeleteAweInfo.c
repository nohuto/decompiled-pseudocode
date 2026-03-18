/*
 * XREFs of MiDeleteAweInfo @ 0x140A41A48
 * Callers:
 *     MiDeleteSectionAwe @ 0x14064993C (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140A4002C (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41690 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD3A0 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x140A419F8 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
