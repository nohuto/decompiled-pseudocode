/*
 * XREFs of ??$get_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@winrt@@YA?AUIMenuItemStatics@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1805D7AE8
 * Callers:
 *     ??$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1805D7608 (--$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ??$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@Z @ 0x1805D7764 (--$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ??$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@Z @ 0x1805D78C0 (--$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805D7B2C (--$get_runtime_activation_factory@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@YA-AUhresu.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::IMenuItemStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::IMenuItemStatics>(&v5, a2, &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
