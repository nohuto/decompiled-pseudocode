/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C34
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??1?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180172958 (--1-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z @ 0x180172970 (--_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z.c)
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1801729B8 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180172CB0 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801B7FD4 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(__int64 *a1)
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
