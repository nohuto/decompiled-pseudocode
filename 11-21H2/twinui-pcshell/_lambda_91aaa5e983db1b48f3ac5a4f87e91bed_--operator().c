/*
 * XREFs of _lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator() @ 0x1803F8E14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed___::Run @ 0x1803F92F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_91aaa5e983db1b48f3ac5a4f87e91bed___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@0@@Z @ 0x18003DD98 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@Y.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800623F4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1800623F4.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092C88 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1803F8DE8 (--1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x1803F9300 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_91aaa5e983db1b48f3ac5a4f87e91bed_::operator()(__int64 *a1)
{
  __int64 v1; // rsi
  BOOL v2; // ebx
  __int64 *v3; // rdi
  __int64 *i; // rbx
  const char *v5; // r9
  LPVOID v6; // rbx
  int (__fastcall *v7)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-198h] BYREF
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-190h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-188h] BYREF
  __int64 v14; // [rsp+48h] [rbp-180h] BYREF
  __int128 v15; // [rsp+50h] [rbp-178h] BYREF
  __int64 v16; // [rsp+60h] [rbp-168h]
  __int64 v17; // [rsp+68h] [rbp-160h]
  _QWORD v18[40]; // [rsp+70h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v1 = *a1;
  v17 = v1;
  *(_BYTE *)(v1 + 32) = *((_DWORD *)a1 + 6) == 1;
  v2 = *(_BYTE *)(v1 + 32) != 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"PdcNotificationCallback");
  v18[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)v18,
    v2);
  try
  {
    v15 = 0LL;
    v16 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v1 + 24) + 48LL))(*(_QWORD *)(v1 + 24), &v15);
    v3 = (__int64 *)*((_QWORD *)&v15 + 1);
    for ( i = (__int64 *)v15; i != v3; ++i )
    {
      v14 = *i;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v1 + 24) + 56LL))(
        *(_QWORD *)(v1 + 24),
        v14,
        *(_BYTE *)(v1 + 32) != 0 ? 2 : 0);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, 0);
    if ( (_QWORD)v15 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>>(
        (__int64 *)v15,
        *((__int64 **)&v15 + 1));
      std::_Deallocate<16,0>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v5);
    v1 = v17;
  }
  ppv = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v6 = ppv;
    v7 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    if ( v7(
           v6,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v12) >= 0 )
    {
      v8 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
      v9 = **v12;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      if ( v9(v8, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v11) >= 0 )
      {
        LOBYTE(v10) = *(_BYTE *)(v1 + 32) == 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 72LL))(v11, v10);
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback((ViewManagerInteropTraceLogging::PdcNotificationCallback *)v18);
}
