/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180021964
 * Callers:
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18002188C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180308490 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1803085A8 (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x18035BC78 (-StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z.c)
 *     ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z @ 0x180386974 (-AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z.c)
 *     ?StartActivity@MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1803A366C (-StartActivity@MiniSearchAppExperienceManager_ActivateAppAsync@MiniSearchAppExperienceManagerTel.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1803D9280 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18046541C (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180465628 (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18047A10C (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1804EC00C (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6A34 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F6E5C (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18050724C (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z @ 0x1805DA294 (-StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1805EEB04 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7)
{
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  const WCHAR *v18; // [rsp+70h] [rbp-28h]
  int v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+7Ch] [rbp-1Ch]

  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &LocaleName;
    v11 = 2;
  }
  v16 = a6;
  v14 = a5;
  v18 = v9;
  v19 = v11;
  v20 = 0;
  v17 = 4LL;
  v15 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 5u, &v13);
}
