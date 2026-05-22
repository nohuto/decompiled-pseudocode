/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C58
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18004E4AC (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x18010E3D0 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x180114A40 (-OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(__int64 *a1)
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
