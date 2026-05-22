/*
 * XREFs of ?InternalRelease@?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180090C30
 * Callers:
 *     ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180090828 (--1-$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x1800F4368 (--1AnimationDataProvider@@UEAA@XZ.c)
 *     ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x1800F8BC0 (-OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::InternalRelease(__int64 *a1)
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
