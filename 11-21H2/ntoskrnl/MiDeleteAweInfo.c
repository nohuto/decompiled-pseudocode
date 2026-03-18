/*
 * XREFs of MiDeleteAweInfo @ 0x14097CFDC
 * Callers:
 *     MiDeleteSectionAwe @ 0x1405AA5E8 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x14097BBE0 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14097CC1C (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x14097CF84 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, __int64 a2)
{
  void *v4; // rcx

  if ( (*(_DWORD *)(a2 + 8) & 2) != 0 )
    ExCleanupAutoExpandPushLock(a2 + 64);
  MiDeleteAweBitMap(a1, (_QWORD *)(a2 + 24));
  v4 = *(void **)(a2 + 88);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag((PVOID)a2, 0);
}
