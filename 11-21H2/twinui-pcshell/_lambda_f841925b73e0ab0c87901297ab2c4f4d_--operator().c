/*
 * XREFs of _lambda_f841925b73e0ab0c87901297ab2c4f4d_::operator() @ 0x18005A7E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___::Run @ 0x18005A7D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___--Run.c)
 * Callees:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEAK@Z @ 0x18005A908 (--$SessionIdleTaskCompletionAdded@IAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAX$$QEAI.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092C88 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f841925b73e0ab0c87901297ab2c4f4d_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int ppv; // [rsp+20h] [rbp-60h]
  _BYTE v6[32]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v7[24]; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  LPVOID v11; // [rsp+A8h] [rbp+28h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v6);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  v2 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v11);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xACD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      ppv);
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v11 + 24LL))(
         v11,
         *(unsigned int *)(a1 + 24),
         0x80000000LL);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xACD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      ppv);
  Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(*(_QWORD *)a1 + 240LL, &v11);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 288LL))(*(_QWORD *)a1 + 16LL);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int,HWND__ * const &,unsigned long &>(
    &v10,
    a1 + 16,
    a1 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v6);
  return 0LL;
}
