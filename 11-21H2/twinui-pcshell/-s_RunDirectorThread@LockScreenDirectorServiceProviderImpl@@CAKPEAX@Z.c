/*
 * XREFs of ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x18001E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x18001EAB8 (-s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LockScreenDirectorServiceProviderImpl::s_RunDirectorThread(CMarshaledInterface *Parameter)
{
  HRESULT v2; // edi
  void *v3; // rsi
  int ppv; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v7; // [rsp+50h] [rbp+20h] BYREF
  LPVOID v8; // [rsp+58h] [rbp+28h] BYREF
  CMarshaledInterface *v9; // [rsp+60h] [rbp+30h]

  v9 = Parameter;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  v2 = CoCreateInstance(
         &GUID_637118f4_0e4e_4c90_bc39_161165f55b6e,
         0LL,
         0x17u,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &v8);
  if ( v2 >= 0 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    v2 = CMarshaledInterface::_Unmarshal(Parameter, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d, &v7, 0);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(void *, LPVOID))(*(_QWORD *)v7 + 24LL))(v7, v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  v3 = (void *)*((_QWORD *)Parameter + 1);
  *((_QWORD *)Parameter + 1) = 0LL;
  v7 = v3;
  if ( Parameter )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)Parameter + 8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(Parameter);
    operator delete(Parameter, 0x10uLL);
  }
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v2,
      ppv);
  else
    LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(v3);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  return 0LL;
}
