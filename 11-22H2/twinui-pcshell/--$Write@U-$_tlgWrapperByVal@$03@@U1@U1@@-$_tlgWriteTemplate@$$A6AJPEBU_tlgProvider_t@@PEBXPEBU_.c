/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18009FA5C
 * Callers:
 *     ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18009F9B0 (-WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180160F10 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1801B6170 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1803DF5A0 (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180473220 (-OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ??$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z @ 0x180502B34 (--$StartDismissedByZBandChange@AEAKAEAKH@StartWindowTelemetry@@SAXAEAK0$$QEAH@Z.c)
 *     wil::details::ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___::_ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___ @ 0x180504AF4 (wil--details--ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___--_ScopeExitFn__lambda_5575.c)
 *     wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___ @ 0x180504DB4 (wil--details--ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___--_ScopeExitFn__lambda_be3b.c)
 *     wil::details::ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___::operator() @ 0x1805053C4 (wil--details--ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 4LL;
  v12 = 4LL;
  v10 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 5u, &v8);
}
