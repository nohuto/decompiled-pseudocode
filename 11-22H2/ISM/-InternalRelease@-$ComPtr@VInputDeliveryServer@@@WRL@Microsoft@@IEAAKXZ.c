/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800559A4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??1?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180180768 (--1-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z @ 0x180180780 (--_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z.c)
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1801807C8 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180180AC0 (-OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801C56F4 (--1DWMInputRouter@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
