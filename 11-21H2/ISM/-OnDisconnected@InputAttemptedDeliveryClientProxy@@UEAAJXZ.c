/*
 * XREFs of ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x1801534A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180049100 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x180154D50 (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputAttemptedDeliveryClientProxy::OnDisconnected(InputAttemptedDeliveryClientProxy *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  v4 = (__int64 (__fastcall ***)(_QWORD))this;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v4);
  InputAttemptedTargetManager::Unregister(v2 + 64, &v4);
  (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)this + 8LL))(this);
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease((__int64 *)this + 7);
  return 0LL;
}
