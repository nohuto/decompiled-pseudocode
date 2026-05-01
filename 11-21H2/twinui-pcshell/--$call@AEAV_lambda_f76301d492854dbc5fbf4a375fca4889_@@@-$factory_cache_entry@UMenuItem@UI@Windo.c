/*
 * XREFs of ??$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@Z @ 0x1805D78C0
 * Callers:
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1805D8C74 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@winrt@@YA?AUIMenuItemStatics@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1805D7AE8 (--$get_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@winrt@@YA-AUIMenuItemStatics@U.c)
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1805D8C1C (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_f76301d492854dbc5fbf4a375fca4889_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // si
  bool v8; // zf
  __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, L"WindowsUdk.UI.MenuItem", 22LL);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::IMenuItemStatics>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( !v12 )
  {
    v6 = 0LL;
    v10[0] = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v13 = 0LL;
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  v10[0] = v13;
  if ( !v13 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = (__int64)&qword_1807B5F18;
    _InterlockedIncrement64(&qword_1807B5F18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B5F20);
    }
    winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1807B5F18);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
      &v12,
      a2,
      *a3);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
