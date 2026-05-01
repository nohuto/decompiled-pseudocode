/*
 * XREFs of ?NonDelegatingQueryInterface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHAEBUguid@3@PEAPEAX@Z @ 0x180684BA0
 * Callers:
 *     ?QueryInterface@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180684DC0 (-QueryInterface@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NonDelegatingAddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x180684974 (-NonDelegatingAddRef@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Sh.c)
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180686384 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingQueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD *, __int64 *); // rcx

  if ( winrt::operator==(a2, &winrt::impl::guid_v<IInspectable>)
    || winrt::operator==(v6, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
  {
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingAddRef(a1);
    *a3 = (a1 + 16) & -(__int64)(a1 != 0);
    return 0LL;
  }
  else
  {
    result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(
               a1,
               a2);
    if ( (_DWORD)result == -2147467262 )
    {
      v8 = *(__int64 (__fastcall ****)(_QWORD, _QWORD *, __int64 *))(a1 + 8);
      if ( v8 )
        return (**v8)(v8, a2, a3);
    }
  }
  return result;
}
