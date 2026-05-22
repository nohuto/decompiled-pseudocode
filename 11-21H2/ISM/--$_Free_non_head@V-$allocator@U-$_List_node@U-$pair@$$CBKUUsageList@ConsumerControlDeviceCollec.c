/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3EB4
 * Callers:
 *     ??1?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800C436C (--1-$list@U-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataH.c)
 *     ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x1800C43B8 (--1-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800C4408 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800C5CE8 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1TestCommandHost@@QEAA@XZ @ 0x1800FA8B4 (--1TestCommandHost@@QEAA@XZ.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180148768 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18018335C (--$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
