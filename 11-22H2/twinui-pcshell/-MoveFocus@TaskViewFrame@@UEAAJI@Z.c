/*
 * XREFs of ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1807873C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800722B4 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007CF70 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@Z @ 0x180786024 (--$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x18078615C (--$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1807864DC (--R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windo.c)
 *     ??R_lambda_ff98fc05277ac080bf005904487943da_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x180786504 (--R_lambda_ff98fc05277ac080bf005904487943da_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskViewFrame::MoveFocus(TaskViewFrame *this, int a2)
{
  _QWORD *v4; // rcx
  const char *v5; // r9
  __int64 (__fastcall ***v6)(_QWORD, void *, _QWORD *); // rdx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  winrt::Windows::Foundation::IUnknown *v8; // rcx
  void (__fastcall ***v9)(_QWORD, void *, _QWORD *); // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  signed int v12; // eax
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-58h] BYREF
  void (__fastcall ***v17)(_QWORD, __int64 *, __int64 *); // [rsp+38h] [rbp-50h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (_QWORD *)((char *)this + 72);
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate(v4);
    v6 = (__int64 (__fastcall ***)(_QWORD, void *, _QWORD *))*((_QWORD *)this + 18);
    if ( !v6 )
      return 0LL;
    from_cx<winrt::Windows::UI::Xaml::UIElement>(&v17, v6);
    v16 = 0LL;
    v7 = v17;
    if ( a2 == 6 )
    {
      if ( v17 )
      {
        v23 = 0LL;
        (**v17)(v17, (__int64 *)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::IDependencyObject>, &v23);
        v25 = v23;
      }
      else
      {
        v25 = 0LL;
      }
      v18 = &v25;
      v21[1] = &qword_180991EB8;
      _InterlockedIncrement64(&qword_180991EB8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> )
      {
        _lambda_ff98fc05277ac080bf005904487943da_::operator()(
          &v18,
          (__int64)&v24,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
        _InterlockedDecrement64(&qword_180991EB8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991EB8);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_ff98fc05277ac080bf005904487943da_ &>(
          v7,
          (__int64)&v24,
          &v18);
      }
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&v16,
        (winrt::Windows::Foundation::IUnknown *)&v24);
      if ( v24 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
      if ( !v25 )
        goto LABEL_25;
      v8 = (winrt::Windows::Foundation::IUnknown *)&v25;
    }
    else
    {
      if ( v17 )
      {
        v23 = 0LL;
        (**v17)(v17, (__int64 *)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::IDependencyObject>, &v23);
        v15 = v23;
      }
      else
      {
        v15 = 0LL;
      }
      v19 = &v15;
      v21[2] = &qword_180991EB8;
      _InterlockedIncrement64(&qword_180991EB8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> )
      {
        _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(
          &v19,
          (__int64)&v14,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
        _InterlockedDecrement64(&qword_180991EB8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180991EB8);
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_ &>(
          v7,
          (__int64)&v14,
          &v19);
      }
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&v16,
        (winrt::Windows::Foundation::IUnknown *)&v14);
      if ( v14 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
      if ( !v15 )
        goto LABEL_25;
      v8 = (winrt::Windows::Foundation::IUnknown *)&v15;
    }
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v8);
LABEL_25:
    v9 = v16;
    if ( v16 )
    {
      v20 = 0LL;
      (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IControl>, &v20);
      v10 = v20;
      v11 = v20;
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    v21[0] = v10;
    if ( v11 )
    {
      LOBYTE(v23) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 368LL))(v10, 2LL, &v23);
      if ( v12 < 0 )
        winrt::throw_hresult(v12);
    }
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v21);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    if ( v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    return 0LL;
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x125,
                     (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                     v5);
    return (unsigned int)v23;
  }
  return result;
}
