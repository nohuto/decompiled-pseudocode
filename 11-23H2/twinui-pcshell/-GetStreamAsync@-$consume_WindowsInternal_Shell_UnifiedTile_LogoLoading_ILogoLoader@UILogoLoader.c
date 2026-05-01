/*
 * XREFs of ?GetStreamAsync@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoLoader@UILogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUTileImageResource@UnifiedTile@Shell@WindowsInternal@3@AEBULogoOptions@LogoLoading@5673@@Z @ 0x1806A24DC
 * Callers:
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1806A8938 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoLoader<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoLoader>::GetStreamAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  _QWORD *result; // rax
  _QWORD *v8; // [rsp+38h] [rbp-30h] BYREF

  v8 = a2;
  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v4 + 48LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  result = a2;
  *a2 = v8;
  return result;
}
