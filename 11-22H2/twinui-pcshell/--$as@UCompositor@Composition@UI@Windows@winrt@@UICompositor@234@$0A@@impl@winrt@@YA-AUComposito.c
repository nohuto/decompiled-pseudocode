/*
 * XREFs of ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x18054BAB0
 * Callers:
 *     ??$as@UCompositor@Composition@UI@Windows@winrt@@@?$com_ptr@UICompositor@Composition@UI@Windows@@@winrt@@QEBA?A_PXZ @ 0x18054BA8C (--$as@UCompositor@Composition@UI@Windows@winrt@@@-$com_ptr@UICompositor@Composition@UI@Windows@@.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositor>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
