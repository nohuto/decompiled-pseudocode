/*
 * XREFs of ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800376A8
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368C4 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800375DC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18005556C (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampAppAcquireLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 5u, 0);
  RtlAcquireSRWLockShared((char *)a1 + 584);
}
