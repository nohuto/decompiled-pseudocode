/*
 * XREFs of ?ActivationId@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension@UIViewWrapperDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18040F400
 * Callers:
 *     ?IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18040FFDC (-IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension>::ActivationId(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
