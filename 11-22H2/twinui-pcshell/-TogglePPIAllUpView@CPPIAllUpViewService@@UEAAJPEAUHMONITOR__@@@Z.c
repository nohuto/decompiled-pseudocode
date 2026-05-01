/*
 * XREFs of ?TogglePPIAllUpView@CPPIAllUpViewService@@UEAAJPEAUHMONITOR__@@@Z @ 0x18054ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___ @ 0x18054A978 (MakeMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPPIAllUpViewService::TogglePPIAllUpView(CPPIAllUpViewService *this, HMONITOR a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HMONITOR, GUID *, GUID *, __int64 *); // rbx
  int v6; // eax
  int MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v12[0] = *((_QWORD *)this + 3);
  v4 = v12[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
  v15 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v6 = v5(v4, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v15);
  MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2 = v6;
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    v16 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2 = MakeMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2_(
                                                                              &v14,
                                                                              &v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    if ( MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2) + 24LL))(
              *((_QWORD *)this + 2),
              v14,
              1LL);
      MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2 = v10;
      if ( v10 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
        goto LABEL_9;
      }
      v8 = (unsigned int)v10;
      v9 = 73LL;
    }
    else
    {
      v8 = (unsigned int)MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2;
      v9 = 70LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
      (const char *)v8);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
  return (unsigned int)MultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2;
}
