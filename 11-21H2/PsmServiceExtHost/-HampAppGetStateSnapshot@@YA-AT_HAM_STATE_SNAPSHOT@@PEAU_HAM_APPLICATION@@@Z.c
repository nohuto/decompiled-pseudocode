/*
 * XREFs of ?HampAppGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_APPLICATION@@@Z @ 0x180001B1C
 * Callers:
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180001A44 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000551C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
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
    HampHostAcquireLockSharedEx(v2, 0);
    v1 = ((*((_QWORD *)v3 + 84) & 8) != 0) | (2 * ((*((_QWORD *)v3 + 84) & 0x10) != 0));
    CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1LL);
    RtlReleaseSRWLockShared(v3);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v3 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v3 - 64));
    RmpReleaseGlobalLock();
  }
  return v1;
}
