/*
 * XREFs of ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1803B51E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_a9c653fc44e1c20c3345bef2bbef663f___1_long___lambda_a9c653fc44e1c20c3345bef2bbef663f___ @ 0x1803AB17C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1803AB17C.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1803AC740 (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1803B2634 (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B5374 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1803B72E4 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::WindowProvided(CAppViewManager *this, const struct _GUID *a2, HWND a3, int a4)
{
  CAppViewManager *v8; // rbx
  unsigned int v9; // edi
  __int64 *v10; // rax
  volatile int *v11; // rdx
  struct IAsyncCallback *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  CAppViewManager *v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-C0h]
  HWND v21; // [rsp+50h] [rbp-B0h]
  _QWORD v22[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v22,
    (__int64)"WindowProvided");
  v22[0] = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  CAppViewManagerTelemetry::WindowProvided::StartActivity((CAppViewManagerTelemetry::WindowProvided *)v22, a2, a3);
  v8 = (CAppViewManager *)((char *)this - 56);
  if ( a4 )
  {
    CAppViewManager::_ObliterateOperation(v8, a2);
    v9 = -2147467260;
  }
  else
  {
    *(_QWORD *)v16 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v16);
    v19 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v20 = *a2;
    v21 = a3;
    v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_a9c653fc44e1c20c3345bef2bbef663f___1_long___lambda_a9c653fc44e1c20c3345bef2bbef663f___(
            &v17,
            (char *)&v19);
    v12 = (struct IAsyncCallback *)*v10;
    v18 = *v10;
    *v10 = 0LL;
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
        v13,
        v11);
    }
    v14 = CAppViewManager::_AddDelayedOperation(v8, v12);
    v9 = v14;
    if ( v14 >= 0 )
    {
      wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v22, 0);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F9,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      CAppViewManager::_ObliterateOperation(v8, a2);
    }
  }
  CAppViewManagerTelemetry::WindowProvided::~WindowProvided((CAppViewManagerTelemetry::WindowProvided *)v22);
  return v9;
}
