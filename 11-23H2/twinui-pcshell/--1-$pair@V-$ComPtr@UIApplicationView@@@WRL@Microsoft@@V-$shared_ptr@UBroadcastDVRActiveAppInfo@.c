/*
 * XREFs of ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x1803D48C0
 * Callers:
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$5 @ 0x1802B7BD2 (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$5.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$4 @ 0x1802BCE2D (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$4.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$5 @ 0x1802BCE46 (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$5.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$6 @ 0x1802BCE5F (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$6.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(
        __int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1);
}
