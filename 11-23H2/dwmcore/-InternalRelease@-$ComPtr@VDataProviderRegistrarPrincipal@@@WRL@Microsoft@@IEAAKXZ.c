/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderRegistrarPrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B77B8
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B4774 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x1801B7464 (--1DataProviderManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataProviderRegistrarPrincipal>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}
