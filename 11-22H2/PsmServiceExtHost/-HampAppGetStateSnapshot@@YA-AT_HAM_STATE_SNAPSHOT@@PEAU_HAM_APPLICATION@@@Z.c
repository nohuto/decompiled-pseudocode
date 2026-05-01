/*
 * XREFs of ?HampAppGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z @ 0x180037CCC
 * Callers:
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180037D5C (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18003603C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 */

char __fastcall HampAppGetStateSnapshot(struct _HAM_APPLICATION *a1)
{
  char v1; // di
  struct _RM_HAM_ACTIVITY_HOST *v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  __int64 v4; // rdx

  v1 = 0;
  v2 = HampAppTryReferenceMixedHost(a1);
  v3 = v2;
  if ( v2 )
  {
    HampHostAcquireLockSharedEx(v2);
    v1 = ((*((_QWORD *)v3 + 84) & 8) != 0) | (2 * ((*((_QWORD *)v3 + 84) & 0x10) != 0));
    CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1u);
    RtlReleaseSRWLockShared(v3);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v3 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v3 - 64));
    RmpReleaseGlobalLock();
  }
  return v1;
}
