/*
 * XREFs of ??B?$base_one@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@USnapLayoutManagerExtension@PlatformExtensions@3456@@impl@winrt@@QEBA?AUSnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@2@XZ @ 0x180682D80
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180683904 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::base_one<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::operator winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
