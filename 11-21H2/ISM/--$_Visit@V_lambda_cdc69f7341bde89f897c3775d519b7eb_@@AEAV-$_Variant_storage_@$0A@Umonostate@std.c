/*
 * XREFs of ??$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18018335C
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801838F8 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 *     ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x180183D88 (--1-$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@U.c)
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180184140 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3EB4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180182C0C (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@A.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180183298 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX.c)
 */

void __fastcall std::_Variant_raw_visit1<2>::_Visit<_lambda_cdc69f7341bde89f897c3775d519b7eb_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
        int a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  bool v9; // zf
  void *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx

  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = *(_QWORD *)(a3 + 32);
            v9 = v7 == 1;
            v10 = *(void **)(a3 + 24);
            if ( v9 )
            {
              std::_Deallocate<16,0>(v10, (v8 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_QWORD *)(a3 + 24) = 0LL;
              *(_QWORD *)(a3 + 32) = 0LL;
              *(_QWORD *)(a3 + 40) = 0LL;
              std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
                v13,
                *(_QWORD ***)(a3 + 8));
              v12 = 176LL;
            }
            else
            {
              std::_Deallocate<16,0>(v10, (v8 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_QWORD *)(a3 + 24) = 0LL;
              *(_QWORD *)(a3 + 32) = 0LL;
              *(_QWORD *)(a3 + 40) = 0LL;
              std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
                v11,
                *(_QWORD ***)(a3 + 8));
              v12 = 40LL;
            }
            std::_Deallocate<16,0>(*(void **)(a3 + 8), v12);
          }
        }
      }
      else if ( *(_QWORD *)a3 )
      {
        std::_Destroy_range<std::allocator<InputSpacePayload>>(*(_QWORD **)a3, *(_QWORD **)(a3 + 8));
        std::_Deallocate<16,0>(*(void **)a3, 8 * ((__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)a3) >> 3));
        *(_QWORD *)a3 = 0LL;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
      }
    }
  }
}
