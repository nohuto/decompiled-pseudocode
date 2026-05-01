/*
 * XREFs of ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180684494
 * Callers:
 *     ?GetSnappableWindowSuggestions@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEAPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnappableWindowSuggestion@23@@Z @ 0x1806843F0 (-GetSnappableWindowSuggestions@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x180680C80 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@USnappableWindowSuggestion@Platfo.c)
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1806810C0 (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     ??$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x1806814E0 (--$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winr.c)
 *     ?GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AV?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@XZ @ 0x180684008 (-GetSnappableWindowList@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?_Reallocate_exactly@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180685D64 (-_Reallocate_exactly@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windo.c)
 *     ?_Tidy@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXXZ @ 0x180685DFC (-_Tidy@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationView@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowSuggestions(
        __int64 a1,
        HWND a2)
{
  __int64 v3; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v4; // r15
  __int64 (__fastcall ****v5)(ApplicationViewHelpers *, GUID *, __int64); // r13
  __int64 (__fastcall ****v6)(ApplicationViewHelpers *, GUID *, __int64); // r12
  unsigned __int64 v7; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v8; // r14
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64); // rsi
  __int64 (__fastcall *v10)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  void **v11; // rax
  HWND v12; // rdi
  volatile signed __int32 *v13; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v14; // rbx
  HWND v16; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v17; // [rsp+30h] [rbp-40h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v19; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall ****v20)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall ****v21)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+58h] [rbp-18h]
  LPVOID pv; // [rsp+C0h] [rbp+50h] BYREF
  HWND hWnd; // [rsp+C8h] [rbp+58h]

  v3 = a1;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList((__int64)&v20);
  *(_OWORD *)v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = v21;
  v6 = v20;
  v7 = v21 - v20;
  if ( v7 )
  {
    if ( v7 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Reallocate_exactly(v18);
    v5 = v21;
    v6 = v20;
    v4 = v19;
  }
  v8 = v18[1];
  if ( v6 != v5 )
  {
    do
    {
      hWnd = (HWND)ApplicationViewHelpers::GetWindowForView(*v6, (struct IApplicationView *)v7);
      if ( hWnd != a2 )
      {
        pv = 0LL;
        v9 = *v6;
        v10 = (**v6)[17];
        v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
        if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), void **))v10)(
               v9,
               v11) >= 0 )
        {
          v12 = hWnd;
          if ( !GetPropW(hWnd, (LPCWSTR)0xA920) )
          {
            v16 = v12;
            winrt::hstring::hstring((winrt::hstring *)&v17, (const unsigned __int16 *)pv);
            if ( v8 == v4 )
            {
              std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
                (__int64 *)v18,
                (__int64)v8,
                &v16);
              v4 = v19;
              v8 = v18[1];
            }
            else
            {
              *(_QWORD *)v8 = v16;
              v13 = v17;
              v17 = 0LL;
              *((_QWORD *)v8 + 1) = v13;
              v8 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)((char *)v8 + 16);
              v18[1] = v8;
            }
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
          }
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
      ++v6;
    }
    while ( v6 != v5 );
    v3 = a1;
  }
  v14 = v18[0];
  winrt::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::com_array<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>(
    v3,
    v18[0],
    v8);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
      v14,
      v8);
    std::_Deallocate<16,0>(v14, (v4 - v14) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  std::vector<winrt::com_ptr<IApplicationView>>::_Tidy(&v20);
  return v3;
}
