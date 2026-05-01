/*
 * XREFs of memset_0 @ 0x18001570E
 * Callers:
 *     HampConnectionInitialize @ 0x180004A48 (HampConnectionInitialize.c)
 *     CrmActivityAllocate @ 0x180004EB0 (CrmActivityAllocate.c)
 *     HamIpcChannelInitialize @ 0x180005C08 (HamIpcChannelInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 *     HamPopulateActivityProperties @ 0x180007700 (HamPopulateActivityProperties.c)
 *     CempGetTokenHostInfo @ 0x180007FD0 (CempGetTokenHostInfo.c)
 *     CempHostInfoInitialize @ 0x180008220 (CempHostInfoInitialize.c)
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800083D0 (-HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPE.c)
 *     HamHostIdInitializeKey @ 0x1800087D0 (HamHostIdInitializeKey.c)
 *     RmResourceSetPropertiesInitialize @ 0x180008AF0 (RmResourceSetPropertiesInitialize.c)
 *     RmpClientConnectionInitialize @ 0x18000A580 (RmpClientConnectionInitialize.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x18000CAB0 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18000F20C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180010AFC (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180011C58 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RmpProcContextInitialize@@YAXP6A?AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x1800134A4 (-RmpProcContextInitialize@@YAXP6A-AW4_RM_PROC_CALLBACK_RESULT@@PEAXW4_RM_PROC_REQUEST@@K@ZPEAU_R.c)
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcEntryAllocateState@@YAJPEAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013D64 (-RmpProcEntryAllocateState@@YAJPEAXPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z @ 0x1800143B4 (-RmpProcEntryInitialize@@YAXKPEAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_ENTRY@@@Z.c)
 *     HamCompleteExtendedExecution @ 0x18001C960 (HamCompleteExtendedExecution.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18001EC40 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18001EC40.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEBU_GUID@@PEA_NPEAUIResourceSet@4@PEAPEAU74@@Z @ 0x18001ED20 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@4@PEAPEAU64@@Z @ 0x18001EE90 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@Ex.c)
 *     ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x18001F400 (-Apply@ResourceSetClientProxy@@UEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManagerClientProxy@@UEAAJK@Z @ 0x18001F5A0 (-ApplyTerminalResourceSet@ResourceManagerClientProxy@@UEAAJK@Z.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAPEAUIResourceSet@3@@Z @ 0x18001F6F0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@.c)
 *     ?CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@PEAPEAUIResourceSet@4@@Z @ 0x18001F7D0 (-CreateTerminalResourceSet@ResourceManagerClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionMode.c)
 *     ?IsKillable@ResourceManagerClientProxy@@UEAAJKPEA_N@Z @ 0x18001FD40 (-IsKillable@ResourceManagerClientProxy@@UEAAJKPEA_N@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001FF60 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x180020040 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180020540 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResourceSetInfo@@@Z @ 0x180020600 (-RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UEAAJW4RmResourceSetType@@PEAURmResource.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x180020C90 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
