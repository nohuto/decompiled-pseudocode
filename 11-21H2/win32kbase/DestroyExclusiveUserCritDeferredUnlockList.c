/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     LeaveCrit @ 0x1C0029B70 (LeaveCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DestroyExclusiveUserCritDeferredUnlockList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagKERNELHANDLETABLEENTRY *v5; // rdi
  __int64 v6; // rcx
  bool v7; // cc
  __int64 result; // rax

  v4 = 0;
  if ( gbInDestroyExclusiveUserCritDeferredUnlockList )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  gbInDestroyExclusiveUserCritDeferredUnlockList = 1;
  if ( gphePrimaryDestroyTarget )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = gpExclusiveUserCritDeferredUnlockListHead;
  if ( gpExclusiveUserCritDeferredUnlockListHead )
  {
    do
    {
      gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v5 + 2);
      v6 = *(_QWORD *)v5;
      *((_QWORD *)v5 + 2) = 0LL;
      v7 = *(_DWORD *)(v6 + 8) <= 1u;
      if ( !*(_DWORD *)(v6 + 8) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
        v6 = *(_QWORD *)v5;
        v7 = *(_DWORD *)(*(_QWORD *)v5 + 8LL) <= 1u;
      }
      if ( !v7 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
        v6 = *(_QWORD *)v5;
      }
      result = HMUnlockObject(v6, a2, a3, a4);
      v5 = gpExclusiveUserCritDeferredUnlockListHead;
      ++v4;
    }
    while ( gpExclusiveUserCritDeferredUnlockListHead );
    if ( v4 > gcSecondaryDestroyTargets )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  if ( v4 != gcDeferredDestroyTargets )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  gcSecondaryDestroyTargets = 0;
  gcDeferredDestroyTargets = 0;
  gbInDestroyExclusiveUserCritDeferredUnlockList = 0;
  return result;
}
