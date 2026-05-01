/*
 * XREFs of ?unsubscribe_from_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800AA940
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 128));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 256));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 424));
  if ( *((_QWORD *)this + 49) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 120LL))(*((_QWORD *)this + 48));
}
