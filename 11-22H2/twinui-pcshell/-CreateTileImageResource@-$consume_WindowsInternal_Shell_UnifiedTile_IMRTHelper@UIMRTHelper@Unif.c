/*
 * XREFs of ?CreateTileImageResource@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_KAEBUhstring@param@3@_N@Z @ 0x1806A0A1C
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelper>::CreateTileImageResource(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 *v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rax
  signed int v9; // eax
  _QWORD *result; // rax
  char v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp-18h] BYREF

  v13 = a2;
  v6 = *a1;
  v7 = *a3;
  v13 = 0LL;
  v8 = *v6;
  v12 = v7;
  v11 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, char, _QWORD **))(v8 + 80))(
         v6,
         &v12,
         0LL,
         *a5,
         v11,
         &v13);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  result = a2;
  *a2 = v13;
  return result;
}
