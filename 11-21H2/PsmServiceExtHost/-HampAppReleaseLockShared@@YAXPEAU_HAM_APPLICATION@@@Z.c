/*
 * XREFs of ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180010270
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045ED8 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180070694 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampAppReleaseLockShared(struct _HAM_APPLICATION *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[6]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
}
