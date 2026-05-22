/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1801106F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8 (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::GetDataSourceId(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi

  v3 = 0LL;
  if ( *a2 )
    v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 96LL))(*a2 + 8);
  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(a2);
  return v3;
}
