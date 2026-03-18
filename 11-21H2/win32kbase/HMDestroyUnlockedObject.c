/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C00D0380
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0148170 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0166AC0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( !gbInDestroyHandleTableObjects && !UserIsUserCritSecInExclusive() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  HMDestroyUnlockedObjectWorker(a1, a2, a3);
}
