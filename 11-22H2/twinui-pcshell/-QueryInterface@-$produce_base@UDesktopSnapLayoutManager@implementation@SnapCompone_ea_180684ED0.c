/*
 * XREFs of ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180684ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180686384 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64, __int64); // rcx

  v5 = (a1 - 48) & ((unsigned __int128)-(__int128)a1 >> 64);
  v6 = *(__int64 (__fastcall ****)(_QWORD))(v5 + 0x18);
  if ( v6 )
    return (**v6)(v6);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::query_interface(
             v5,
             a2);
  if ( (_DWORD)result == -2147467262 )
  {
    v8 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(v5 + 8);
    if ( v8 )
      return (**v8)(v8, a2, a3);
  }
  return result;
}
