/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64
 * Callers:
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180038E2C (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F638 (--$get_runtime_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ??$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F70C (--$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??1CandidateIdentity@@QEAA@XZ @ 0x180081984 (--1CandidateIdentity@@QEAA@XZ.c)
 *     ??$_Erase_tree_and_orphan@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180093E78 (--$_Erase_tree_and_orphan@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180094620 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x180094A68 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180095020 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x180095300 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180095600 (-GetConstantsForInputType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4Input.c)
 *     ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800956C0 (-GetCurrentInputTypesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180096830 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800BE5C0 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x1800BEC0C (--1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800BEF18 (--1TraceSessionConfig@@QEAA@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800C2C94 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ??$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800C957C (--$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winr.c)
 *     ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330 (--$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x18014C070 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801885E8 (--0PenInterface@@QEAA@PEAX0@Z.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x1801888E0 (--1PenInterface@@UEAA@XZ.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x18018B148 (--1HapticInterface@@UEAA@XZ.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A9474 (--1Edge@@QEAA@XZ.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801AB090 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801AB1F0 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AB8E8 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ABE84 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AC004 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x1801AC364 (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::_Tidy_deallocate(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
