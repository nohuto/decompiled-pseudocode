/*
 * XREFs of ??$call@P6A?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z@?$factory_cache_entry@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@2@$$QEAP6A?AU3456782@AEBUIActivationFactory@Foundation@82@@Z@Z @ 0x180050EF0
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800684C0 (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v5; // rax
  char v6; // di
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
    0x42uLL);
  winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v10, v9);
  if ( !v10 )
  {
    v5 = 0LL;
    v8[0] = 0LL;
    goto LABEL_3;
  }
  v11 = 0LL;
  (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11);
  v5 = v11;
  v8[0] = v11;
  if ( !v11 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
  if ( v6 )
  {
    v8[1] = &qword_1807B4488;
    _InterlockedIncrement64(&qword_1807B4488);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice,winrt::Windows::Foundation::IActivationFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B4490);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice,winrt::Windows::Foundation::IActivationFactory>);
    _InterlockedDecrement64(&qword_1807B4488);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
  }
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
