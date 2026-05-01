/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800BC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BC1B8 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800BC25C (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BC2A0 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x1800BC484 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BC60C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18019FA48 (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_18019FA48.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395CD0 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  int Monitor; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-D8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+58h] [rbp-A8h]
  _BYTE v13[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[192]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[24]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v16[8]; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 46) )
    return 2147943568LL;
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v9,
    "GetImmersiveMonitor");
  *(_QWORD *)v9 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  StartWindowTelemetry::GetImmersiveMonitor::StartActivity((StartWindowTelemetry::GetImmersiveMonitor *)v9);
  Monitor = ImmersiveMonitorHelper::GetMonitor(*((ImmersiveMonitorHelper **)this + 24), a2);
  v5 = Monitor;
  if ( Monitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Monitor,
      v9[0]);
  }
  else
  {
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v5 = 0;
  }
  *(_QWORD *)v9 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v16);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v15);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v14);
  if ( v12 == 1 )
  {
    v12 = 2;
    v8 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
           v6,
           _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_QWORD *)(v8 + 8), v13);
  }
  v12 = 3;
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  return v5;
}
