/*
 * XREFs of ?OnDisconnected@InputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180172CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C34 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x1801741CC (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
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
  if ( this )
    (*(void (__fastcall **)(InputAttemptedDeliveryClientProxy *))(*(_QWORD *)this + 8LL))(this);
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease((__int64 *)this + 7);
  return 0LL;
}
