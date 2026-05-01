/*
 * XREFs of ?IsUnplated@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1806A3CD8
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsUnplated(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 136LL))(*a1, a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
