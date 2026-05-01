/*
 * XREFs of ?StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A7398
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A74D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf@@@details@wil@@Q.c)
 *     ??$GetActivationFactory@UIClipboardSignalListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIClipboardSignalListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800A76D8 (--$GetActivationFactory@UIClipboardSignalListenerFactory@DataEngine@TaskFlow@Shell@Internal@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskFlowImmersiveShellBroker::StartClipboardSignalListener(TaskFlowImmersiveShellBroker *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64, char *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 26);
  v13 = v2;
  if ( !v2 )
    goto LABEL_6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IClipboardSignalListenerFactory>(&v12);
  v3 = v12;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v12 + 48LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 32);
  v5 = v4(v3, v2, (char *)this + 256);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v5);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
    return v6;
  }
  else
  {
    v7 = *((_QWORD *)this + 32);
    v14 = v7;
    if ( !v7
      || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7),
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_ImproveTaskFlowLogonPerf>::GetImpl'::`2'::impl,
            0LL,
            0LL),
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7),
          v9 = v8,
          v8 >= 0) )
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
LABEL_6:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E2,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
    return v9;
  }
}
