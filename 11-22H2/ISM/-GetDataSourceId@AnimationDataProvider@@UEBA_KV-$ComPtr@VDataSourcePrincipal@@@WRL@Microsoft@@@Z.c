/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18011E760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
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
