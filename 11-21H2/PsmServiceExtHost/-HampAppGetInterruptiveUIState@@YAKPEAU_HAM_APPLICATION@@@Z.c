/*
 * XREFs of ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800053F8
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18000718C (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x1800789E4 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000551C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18002A9D4 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampAppGetInterruptiveUIState(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rax
  unsigned int HasExternalResourceAccess; // edi
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  __int64 v4; // rdx

  v1 = HampAppTryReferenceMixedHost(a1);
  HasExternalResourceAccess = 0;
  v3 = v1;
  if ( v1 )
  {
    HampHostAcquireLockSharedEx(v1, 0);
    HasExternalResourceAccess = HampHostHasExternalResourceAccess(v3, 27LL);
    CempLockTrackerMarkReleased(HampLockTrackerId, v4, 1LL);
    RtlReleaseSRWLockShared(v3);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v3 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v3 - 64));
    RmpReleaseGlobalLock();
  }
  return HasExternalResourceAccess;
}
