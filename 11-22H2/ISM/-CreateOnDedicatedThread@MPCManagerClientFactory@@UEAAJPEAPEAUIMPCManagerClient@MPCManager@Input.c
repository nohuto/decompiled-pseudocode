/*
 * XREFs of ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1801866A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAA@W4EventOptions@1@@Z @ 0x180033340 (--0-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180033434 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180184890 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e___ @ 0x180185048 (wil--MakeAgileCallback_Windows--System--IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MPCManagerClientFactory::CreateOnDedicatedThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, char *); // rdi
  _QWORD *v12; // rax
  int v13; // eax
  const char *v14; // r9
  __int64 v15; // rcx
  DWORD v16; // eax
  void *v17; // rdx
  const char *v18; // r9
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v19; // rax
  __int64 v21[2]; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v22; // [rsp+30h] [rbp-20h] BYREF
  HANDLE hHandle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v27 = 0LL;
  wil::GetActivationFactory<Windows::System::IDispatcherQueueControllerStatics>((const WCHAR *)v24, (__int64)a2, a3);
  v21[0] = 0LL;
  v4 = *(_QWORD *)v24[0];
  v21[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 48))(v24[0], v21);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v5,
      v21[0]);
  v6 = v21[0];
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21[0] + 48LL);
  v8 = v27;
  v27 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = v7(v6, &v27);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v9,
      v21[0]);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v21);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v24);
  v22 = 0LL;
  __0__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAA_W4EventOptions_1__Z(
    (wil::details **)&hHandle,
    0);
  v10 = v27;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v27 + 56LL);
  v21[0] = (__int64)&v22;
  v21[1] = (__int64)&hHandle;
  v12 = wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e___(
          v24,
          (__int64)v21);
  v13 = v11(v10, *v12, &v26);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v13,
      v21[0]);
  v15 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( !v26 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v14);
  v16 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v16 != 258 && v16 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA2A,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v18);
  v19 = v22;
  v22 = 0LL;
  *a2 = v19;
  if ( hHandle )
    wil::details::CloseHandle((wil::details *)hHandle, v17);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v27);
  return 0LL;
}
