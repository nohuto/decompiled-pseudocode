/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18010D4F4
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800DECE8 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180072F24 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9624 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D4C8 (--1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ?StartActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18010DC24 (-StartActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18010DDF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180174504 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wil::details::ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___::_ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x180285AA4 (wil--details--ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___--_ScopeExitFn__lambda_7aa1.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180747360 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(__int64 a1, int *a2)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15; // edi
  int v16; // r15d
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23[2]; // [rsp+20h] [rbp-E0h] BYREF
  char v24; // [rsp+28h] [rbp-D8h]
  __int64 v25[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v5 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v25,
    "OnViewCreatedBase");
  v25[0] = (__int64)&SingleViewExperienceTelemetry::OnViewCreatedBase::`vftable';
  SingleViewExperienceTelemetry::OnViewCreatedBase::StartActivity(
    (SingleViewExperienceTelemetry::OnViewCreatedBase *)v25,
    v5,
    StringRawBuffer);
  v6 = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v15 = *(_DWORD *)(a1 + 64);
    v16 = *(_DWORD *)(a1 + 68);
    *(_QWORD *)(a1 + 64) = 0LL;
    v17 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19D,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v17,
        v23[0]);
    *(_DWORD *)(a1 + 64) = v15;
    *(_DWORD *)(a1 + 68) = v16;
  }
  v7 = 0LL;
  if ( v23 != a2 )
  {
    v7 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)v23 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
  *(_QWORD *)v23 = a1;
  v24 = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80));
  v9 = v8;
  if ( v8 < 0 )
  {
    v18 = (unsigned int)v8;
    v19 = 424LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v18,
      v23[0]);
    v6 = v9;
    goto LABEL_12;
  }
  v24 = 0;
  if ( *(_DWORD *)(a1 + 64) == 2 )
  {
    v9 = -2147023673;
LABEL_22:
    v22 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)a1);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D3,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v22,
        v23[0]);
    *(_QWORD *)(a1 + 64) = 0LL;
    CSingleViewShellExperience::ResetViews((CSingleViewShellExperience *)a1);
    v19 = 470LL;
    goto LABEL_26;
  }
  v10 = *(unsigned int *)(a1 + 60);
  if ( (_DWORD)v10 )
  {
    v11 = CSingleViewShellExperience::SetWindowBand(a1, v10);
    v9 = v11;
    if ( v11 < 0 )
    {
      v18 = (unsigned int)v11;
      v19 = 439LL;
      goto LABEL_27;
    }
  }
  if ( *(_BYTE *)(a1 + 53) )
  {
    ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((_DWORD *)(a1 + 72), *(_QWORD *)(a1 + 24));
    LOBYTE(v20) = *(_BYTE *)(a1 + 53);
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 88) + 96LL))(
            *(_QWORD *)(a1 + 88),
            a1,
            v20);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C2,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v21,
        v23[0]);
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v9 = -2147023673;
    v19 = 461LL;
LABEL_26:
    v18 = v9;
    goto LABEL_27;
  }
  v12 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 88))(*(_QWORD *)(a1 + 88), a1);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C9,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12,
      v23[0]);
    goto LABEL_22;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v25,
    v13);
LABEL_12:
  wil::details::ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___::_ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___(v23);
  SingleViewExperienceTelemetry::OnViewCreatedBase::~OnViewCreatedBase((SingleViewExperienceTelemetry::OnViewCreatedBase *)v25);
  return v6;
}
