/*
 * XREFs of ??$call@P6A?AUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@$$QEAP6A?AU34562@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180054B04
 * Callers:
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1800F8128 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 *     ??0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ @ 0x1800FA0AC (--0UISettings@ViewManagement@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0VirtualDesktopSwitcherHost@@QEAA@XZ @ 0x180607820 (--0VirtualDesktopSwitcherHost@@QEAA@XZ.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068504 (--$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::UISettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        __int64 a1,
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // di
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+38h] BYREF

  v15 = a1;
  if ( aWindowsUiViewm[36] )
  {
    _o_terminate();
LABEL_14:
    v6 = 0LL;
    v11[0] = 0LL;
LABEL_5:
    v7 = 0;
    if ( !v6 )
      goto LABEL_6;
    goto LABEL_12;
  }
  v13[0] = 1;
  v13[1] = 36;
  v14 = L"Windows.UI.ViewManagement.UISettings";
  v12 = v13;
  v9 = 0LL;
  v5 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
                          &v15,
                          &v12,
                          &v9);
  if ( (int)v5 < 0 )
    winrt::throw_hresult(v5);
  v16 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  if ( !v9 )
    goto LABEL_14;
  v10 = 0LL;
  (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
  v6 = v10;
  v11[0] = v10;
  v7 = 1;
  if ( !v10 )
    goto LABEL_5;
LABEL_12:
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v11);
LABEL_6:
  if ( v7 )
  {
    v11[1] = &qword_1807B41B8;
    _InterlockedIncrement64(&qword_1807B41B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v16,
            0LL) )
    {
      v16 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B41C0);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_1807B41B8);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v16);
  }
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  return a2;
}
