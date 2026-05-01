/*
 * XREFs of ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1805D8C1C
 * Callers:
 *     ??$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@Z @ 0x1805D78C0 (--$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1805D8C74 (-CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
