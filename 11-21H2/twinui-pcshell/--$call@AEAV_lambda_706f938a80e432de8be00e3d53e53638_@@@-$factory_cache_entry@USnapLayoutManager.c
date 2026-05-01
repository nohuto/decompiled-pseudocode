/*
 * XREFs of ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?AUSnapLayoutManager@Shell@UI@WindowsUdk@2@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x18006758C
 * Callers:
 *     ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x180066D10 (-InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ.c)
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x1805BB224 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?GetForDisplay@?$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUSnapLayoutManager@Shell@UI@WindowsUdk@3@AEBUDisplayRegion@WindowManagement@6Windows@3@@Z @ 0x1800676B4 (-GetForDisplay@-$consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics@UISnapLayoutManagerStatic.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??$get_activation_factory@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180067FBC (--$get_activation_factory@UISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AUISn.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::call<_lambda_706f938a80e432de8be00e3d53e53638_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // si
  bool v8; // zf
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"WindowsUdk.UI.Shell.SnapLayoutManager",
    0x25uLL);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v13 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
    v6 = v13;
    v10[0] = v13;
    if ( v13 )
    {
      v7 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = 0LL;
    v10[0] = 0LL;
  }
  v7 = 0;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = &qword_1807B3F38;
    _InterlockedIncrement64(&qword_1807B3F38);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B3F40);
    }
    winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::GetForDisplay(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1807B3F38);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutManagerStatics<winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics>::GetForDisplay(
      &v12,
      a2,
      *a3);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
