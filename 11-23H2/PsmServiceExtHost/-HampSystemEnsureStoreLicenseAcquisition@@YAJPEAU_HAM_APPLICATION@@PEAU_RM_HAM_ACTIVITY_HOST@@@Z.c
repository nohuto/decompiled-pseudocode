/*
 * XREFs of ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035F64
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18003600C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180049D9C (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemEnsureStoreLicenseAcquisition(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  __int64 v5; // r9
  int v6; // edi

  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    v3 = HampAppTryReferenceMixedHost(a1);
    v4 = v3;
    v5 = 0LL;
    if ( v3 )
      v5 = *((_QWORD *)v3 + 72);
    v6 = EnsureStoreLicenseForPackageActivation2(
           (char *)a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
           *((_QWORD *)a1 + 11) + 228LL,
           v5);
    if ( v6 >= 0 )
      v6 = 0;
    if ( v4 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v4 + 75))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
