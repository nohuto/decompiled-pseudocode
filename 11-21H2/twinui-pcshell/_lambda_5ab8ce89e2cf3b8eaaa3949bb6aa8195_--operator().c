/*
 * XREFs of _lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_::operator() @ 0x1801965A8
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6424 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6B84 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_1a81e411267c0707f46b786e7fc60095___ @ 0x180195EEC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_180195EEC.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_69bbf18e8e0f03bc10764316da6b6053___ @ 0x180195F58 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_180195F58.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ecba7abb6e149a1daef5bae68efd6426___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ecba7abb6e149a1daef5bae68efd6426___ @ 0x1801960F0 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1801960F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall lambda_5ab8ce89e2cf3b8eaaa3949bb6aa8195_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64, __int64 *); // rbx
  __int64 *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 *v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, __int64); // rbx
  volatile signed __int32 **v12; // rax
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rcx
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  int v21; // eax
  __int64 *v22; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  v4 = a1[1];
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v5 = v3(v2, v27, v4);
  if ( v5 < 0 )
  {
    v6 = 640LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = a1[2];
  v9 = v8 + 89;
  v10 = *v4;
  v11 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64))*v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8 + 89);
  v5 = v11(v10, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, (__int64)(v8 + 89));
  if ( v5 < 0 )
  {
    v6 = 642LL;
    goto LABEL_3;
  }
  v22 = v8;
  v12 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::___Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ecba7abb6e149a1daef5bae68efd6426___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ecba7abb6e149a1daef5bae68efd6426___(
          &v23,
          &v22);
  v13 = (__int64)*v12;
  v25[1] = (__int64)*v12;
  *v12 = 0LL;
  v14 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
  }
  v24 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v8 + 89,
          &v24);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v24 + 64LL))(v24, v13, v8 + 92);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v22 = v8;
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_69bbf18e8e0f03bc10764316da6b6053___(
        (__int64 *)&v23,
        (__int64)&v22);
      v18 = v23;
      v19 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, __int64 *))(*(_QWORD *)*v9 + 80LL))(
              *v9,
              v23,
              v8 + 93);
      v16 = v19;
      if ( v19 >= 0 )
      {
        v22 = v8;
        Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_1a81e411267c0707f46b786e7fc60095___(
          v25,
          (__int64)&v22);
        v20 = v25[0];
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v9 + 96LL))(*v9, v25[0], v8 + 94);
        v16 = v21;
        if ( v21 >= 0 )
          v16 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A8,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v21);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      }
      if ( v18 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_22;
    }
    v17 = 657LL;
  }
  else
  {
    v17 = 655LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v15);
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
