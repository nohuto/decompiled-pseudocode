/*
 * XREFs of ?InternalAddRef@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801533FC
 * Callers:
 *     ??0InputAttemptedDeliveryClientProxy@@QEAA@AEBV?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z @ 0x180153064 (--0InputAttemptedDeliveryClientProxy@@QEAA@AEBV-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z.c)
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180153198 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalAddRef(__int64 (__fastcall ****a1)(_QWORD))
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1);
  return result;
}
