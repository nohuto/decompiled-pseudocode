/*
 * XREFs of ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18077509C
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B9DA4 (--B-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800D5C18 (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800D5C6C (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA@XZ @ 0x1800D6234 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskbarLayout@Shell@UI@WindowsUdk@2@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x18019F4DC (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B718 (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18028B78C (--C-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1802E8D84 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall VirtualDesktopSwitcherHost::PositionVirtualDesktopSwitcher(
        VirtualDesktopSwitcherHost *this,
        struct IImmersiveMonitor *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void (__fastcall ***v19)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rtt
  int v23; // esi
  int v24; // ebx
  int v25; // edi
  __m128 v26; // xmm6
  int v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // kr00_8
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // r8d
  __int64 v36; // [rsp+28h] [rbp-49h] BYREF
  __int128 v37; // [rsp+30h] [rbp-41h] BYREF
  __int64 v38[2]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v39; // [rsp+50h] [rbp-21h] BYREF
  __int128 v40; // [rsp+60h] [rbp-11h] BYREF
  __int128 v41; // [rsp+70h] [rbp-1h] BYREF
  __int128 v42; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v44; // [rsp+E0h] [rbp+6Fh] BYREF
  const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *(__fastcall *v45)(const struct winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics *, __int64 *); // [rsp+E8h] [rbp+77h] BYREF
  __int64 v46; // [rsp+F0h] [rbp+7Fh] BYREF

  v38[0] = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, v38);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28A,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
      (const char *)(unsigned int)v3,
      v36);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), &v44);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28D,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
      (const char *)(unsigned int)v4,
      v36);
  if ( v44 )
  {
    switch ( v44 )
    {
      case 1:
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 168LL))(
               *((_QWORD *)this + 22),
               1LL);
        if ( v9 < 0 )
        {
          __abi_WinRTraiseException(v9);
          __debugbreak();
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 184LL))(
                *((_QWORD *)this + 22),
                0LL);
        if ( v10 < 0 )
        {
          __abi_WinRTraiseException(v10);
          __debugbreak();
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 200LL))(
                *((_QWORD *)this + 22),
                0LL);
        if ( v11 < 0 )
        {
          __abi_WinRTraiseException(v11);
          __debugbreak();
        }
        break;
      case 2:
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(
                *((_QWORD *)this + 22),
                0LL);
        if ( v12 < 0 )
        {
          __abi_WinRTraiseException(v12);
          __debugbreak();
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 184LL))(
                *((_QWORD *)this + 22),
                0LL);
        if ( v13 < 0 )
        {
          __abi_WinRTraiseException(v13);
          __debugbreak();
        }
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 200LL))(
                *((_QWORD *)this + 22),
                2LL);
        if ( v14 < 0 )
        {
          __abi_WinRTraiseException(v14);
          __debugbreak();
        }
        break;
      case 3:
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 168LL))(
                *((_QWORD *)this + 22),
                1LL);
        if ( v15 < 0 )
        {
          __abi_WinRTraiseException(v15);
          __debugbreak();
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 184LL))(
                *((_QWORD *)this + 22),
                2LL);
        if ( v16 < 0 )
        {
          __abi_WinRTraiseException(v16);
          __debugbreak();
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 200LL))(
                *((_QWORD *)this + 22),
                0LL);
        if ( v17 < 0 )
        {
          __abi_WinRTraiseException(v17);
          __debugbreak();
        }
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A9,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
          (const char *)0x8000FFFFLL,
          v36);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(*((_QWORD *)this + 22), 0LL);
    if ( v5 < 0 )
    {
      __abi_WinRTraiseException(v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 184LL))(*((_QWORD *)this + 22), 0LL);
    if ( v6 < 0 )
    {
      __abi_WinRTraiseException(v6);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 200LL))(*((_QWORD *)this + 22), 0LL);
    if ( v7 < 0 )
    {
      __abi_WinRTraiseException(v7);
      __debugbreak();
    }
  }
  LOBYTE(v8) = 1;
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 128LL))(*((_QWORD *)this + 22), v8);
  if ( v18 < 0 )
  {
    __abi_WinRTraiseException(v18);
    __debugbreak();
  }
  v38[1] = (__int64)&qword_18098E3D8;
  _InterlockedIncrement64(&qword_18098E3D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
      &v36);
    _InterlockedDecrement64(&qword_18098E3D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E3D8);
    v45 = _lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
      v19,
      (__int64)&v36,
      (void (__fastcall **)(__int64, __int64 *))&v45);
  }
  LODWORD(v45) = 3;
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
    &v36,
    &v46,
    v38[0],
    (unsigned int *)&v45);
  if ( v46 )
  {
    v22 = (int)*((float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                            &v46,
                            &v39)
               + 2);
    v23 = (int)*(float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                           &v46,
                           &v40)
        + v22 / 2;
    v24 = (int)*((float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                            &v46,
                            &v41)
               + 3)
        / 2;
    v25 = v24
        + (int)*((float *)winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
                            &v46,
                            &v42)
               + 1);
    v26 = (__m128)COERCE_UNSIGNED_INT((float)MulDiv(v23 - *((_DWORD *)this + 120), 96, *((_DWORD *)this + 115)));
    v27 = MulDiv(v25, 96, *((_DWORD *)this + 116));
    v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 21) + 160LL))(
            *((_QWORD *)this + 21),
            _mm_unpacklo_ps(v26, (__m128)COERCE_UNSIGNED_INT((float)v27)).m128_u64[0]);
    if ( v28 < 0 )
    {
      __abi_WinRTraiseException(v28);
      __debugbreak();
    }
    v29 = *((_QWORD *)this + 21);
    v30 = *((_DWORD *)this + 122) - *((_DWORD *)this + 120);
    MulDiv((HIDWORD(v30) ^ v30) - HIDWORD(v30), 96, *((_DWORD *)this + 115));
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 176LL))(v29);
    if ( v31 < 0 )
    {
      __abi_WinRTraiseException(v31);
      __debugbreak();
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 144LL))(*((_QWORD *)this + 21));
    if ( v32 < 0 )
    {
      __abi_WinRTraiseException(v32);
      __debugbreak();
    }
    MulDiv(12, *((_DWORD *)this + 115), 96);
    v33 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 192LL))(*((_QWORD *)this + 21));
    if ( v33 < 0 )
    {
      __abi_WinRTraiseException(v33);
      __debugbreak();
    }
    v34 = *((_DWORD *)this + 120);
    *(float *)&v37 = (float)v34;
    v35 = *((_DWORD *)this + 121);
    *((float *)&v37 + 1) = (float)v35;
    *((float *)&v37 + 2) = (float)(*((_DWORD *)this + 122) - v34);
    *((float *)&v37 + 3) = (float)(*((_DWORD *)this + 123) - v35);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      (__int64 **)this + 28,
      &v37);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v46);
  }
  else
  {
    v20 = (__int64 *)((char *)this + 184);
    if ( tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator bool(v20) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator->(
                    (__int64)v20,
                    (__int64 *)&v37)
               + 264) = 0;
      tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>(
        (void **)&v37,
        v21);
      tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete(v20);
    }
  }
  if ( v36 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
}
