/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBUWindowId@UI@Windows@2@AEAI@Z @ 0x180729C30
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEA_N@Z @ 0x180729B50 (-IndexOf@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 *     ?IndexOf@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEA_N@Z @ 0x180729BC0 (-IndexOf@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@U_ea_180729BC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v5 = *(_QWORD **)v3;
  v6 = a1 + 16;
  if ( !a1 )
    v6 = 56LL;
  for ( ; v5 != *(_QWORD **)v6; ++v5 )
  {
    if ( *a2 == *v5 )
      break;
  }
  v7 = a1 + 8;
  v8 = a1 + 16;
  if ( !a1 )
    v7 = 48LL;
  v9 = (__int64)v5 - *(_QWORD *)v7;
  v10 = a1 + 8;
  v11 = v9 >> 3;
  *a3 = v11;
  if ( !a1 )
  {
    v8 = 56LL;
    v10 = 48LL;
  }
  return (unsigned int)v11 < (unsigned int)((__int64)(*(_QWORD *)v8 - *(_QWORD *)v10) >> 3);
}
