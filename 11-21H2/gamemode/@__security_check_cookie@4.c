/*
 * XREFs of @__security_check_cookie@4 @ 0x10006D50
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x10001E70 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     _TraceLoggingRegisterEx_EventRegister_EventSetInformation@12 @ 0x10001FD1 (_TraceLoggingRegisterEx_EventRegister_EventSetInformation@12.c)
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x100027FA (-GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z.c)
 *     ??0ResultException@wil@@QAE@ABUFailureInfo@1@@Z @ 0x10002DCD (--0ResultException@wil@@QAE@ABUFailureInfo@1@@Z.c)
 *     ?what@ResultException@wil@@UBEPBDXZ @ 0x10002E40 (-what@ResultException@wil@@UBEPBDXZ.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z @ 0x100033EE (-_FailFast_GetLastError@in1diag3@details@wil@@YGXPAXIPBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?ReleaseMutex@details@wil@@YGX0@ZU?$integral_constant@I$01@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@@wil@@QAE@XZ @ 0x100034C7 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-ReleaseMutex@details@wil@.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z @ 0x100039FA (-GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z @ 0x10003CF0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z.c)
 *     ?GetLocal@?$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAEPAPAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x10003EA0 (-GetLocal@-$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@QAEXPAX@Z @ 0x10003F96 (-reset@-$unique_storage@U-$resource_policy@PAXP6GXPAX@_E$1-CloseHandle@details@wil@@YGX0@ZU-$int.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPAPAV123@@Z @ 0x10004000 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SGJPBDPA.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ @ 0x10004272 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAE@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QAE@XZ @ 0x100042D4 (--1SemaphoreValue@details_abi@wil@@QAE@XZ.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100049AF (--$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 *     _MsixvcAddPackageAsync@20 @ 0x10004D20 (_MsixvcAddPackageAsync@20.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400 (_MsixvcRemediateMutablePackagesForVolumeAsync@8.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QAEPAPAUIPackage@StateRepository@Internal@Windows@@XZ @ 0x10005827 (--B-$ComPtrRef@V-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WR.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x10005888 (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     _GetExpandedResourceExclusiveCpuCount@4 @ 0x10005B60 (_GetExpandedResourceExclusiveCpuCount@4.c)
 *     _ReleaseExclusiveCpuSets@0 @ 0x10005C20 (_ReleaseExclusiveCpuSets@0.c)
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10005E30 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptions@01@@Z @ 0x10006651 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptio.c)
 *     __EH_epilog3_GS @ 0x100073B3 (__EH_epilog3_GS.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x100077B0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     <none>
 */

void __fastcall __security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != __security_cookie )
    __report_gsfailure();
}
