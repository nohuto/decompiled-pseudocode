/*
 * XREFs of ??0InputAttemptedDeliveryClientProxy@@QEAA@AEBV?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@@Z @ 0x180180694
 * Callers:
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1801807C8 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ @ 0x1800557FC (-InternalAddRef@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall InputAttemptedDeliveryClientProxy::InputAttemptedDeliveryClientProxy(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::`vftable';
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 44) = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD))(a1 + 56);
  *(_QWORD *)a1 = &InputAttemptedDeliveryClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *(_QWORD *)(a1 + 8) = &InputAttemptedDeliveryClientProxy::`vftable'{for `IInputAttemptedDeliveryClientProxy'};
  *v3 = (__int64 (__fastcall ***)(_QWORD))*a2;
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalAddRef(v3);
  return a1;
}
