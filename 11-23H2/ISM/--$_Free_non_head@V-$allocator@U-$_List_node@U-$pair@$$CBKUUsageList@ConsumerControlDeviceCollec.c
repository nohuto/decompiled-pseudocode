/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DCF54
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1800DD414 (--1-$list@U-$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@V-$allocator@U-$p.c)
 *     ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800DD460 (--1-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800DD4B0 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DEF28 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1TestCommandHost@@QEAA@XZ @ 0x180116894 (--1TestCommandHost@@QEAA@XZ.c)
 *     ??_EDragManagerClientProxy@@UEAAPEAXI@Z @ 0x180154550 (--_EDragManagerClientProxy@@UEAAPEAXI@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x180155B58 (-clear@-$_Hash@V-$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V-$_Uhash_comp.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180167314 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??$_Visit@V_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@1@@Z @ 0x1801A23F4 (--$_Visit@V_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
