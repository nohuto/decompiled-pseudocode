/*
 * XREFs of ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A9D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z @ 0x1802D5C74 (--$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::UnsubscribeFromServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 30) = 2;
  v3 = (__int64 *)((char *)this + 224);
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, *((unsigned int *)this + 58));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x126,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v3);
    *((_DWORD *)this + 58) = 0;
  }
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12E,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v14);
    v15 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v7 = *((_QWORD *)this + 17);
  if ( v7 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v7 + 56LL))(v7, a2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 17);
  }
  v8 = *((_QWORD *)this + 20);
  if ( v8 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v8 + 56LL))(v8, a2);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13A,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
  }
  v9 = *((_QWORD *)this + 19);
  if ( v9 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v9 + 56LL))(v9, a2);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x140,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 19);
  }
  v10 = *((_QWORD *)this + 18);
  if ( v10 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v10 + 56LL))(v10, a2);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 18);
  }
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v11 + 56LL))(v11, a2);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14C,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 21);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 23);
  }
  v12 = *((_QWORD *)this + 22);
  if ( v12 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v12 + 56LL))(v12, a2);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x153,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v21);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
  }
  if ( *((_QWORD *)this + 16) )
  {
    if ( ListenerTelemetryReport::m_knownFailureCounter || ListenerTelemetryReport::m_unknownFailureCounter )
      TaskFlowDataEngineTelemetry::SignalProcessingListenerCountersReport<unsigned int &,unsigned int &>(v12, a2);
    v22 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 16) + 96LL))(
            *((_QWORD *)this + 16),
            a2);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15A,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 16);
  }
  return 0LL;
}
