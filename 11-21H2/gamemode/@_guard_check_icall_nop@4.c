/*
 * XREFs of @_guard_check_icall_nop@4 @ 0x100072B0
 * Callers:
 *     __tlgEnableCallback@36 @ 0x10001F50 (__tlgEnableCallback@36.c)
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YGPAXKI@Z @ 0x10002645 (-ProcessHeapAlloc@details@wil@@YGPAXKI@Z.c)
 *     ?WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x100027CA (-WilRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x10002920 (-WilDynamicLoadRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YG_NXZ @ 0x10002FD7 (-IsDebuggerPresent@details@wil@@YG_NXZ.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x1000326D (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z @ 0x10003B4D (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SGXPAUFailureInfo@3@PADI@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z @ 0x10003CF0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YGEXZ @ 0x10003D70 (-RtlDllShutdownInProgress@details@wil@@YGEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YGJPAX0@Z @ 0x10003DF0 (-RtlDisownModuleHeapAllocation@details@wil@@YGJPAX0@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671 (--$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 *     _MsixvcAddPackageAsync@20 @ 0x10004D20 (_MsixvcAddPackageAsync@20.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 *     _MsixvcRemediateMutablePackagesForVolumeAsync@8 @ 0x10005400 (_MsixvcRemediateMutablePackagesForVolumeAsync@8.c)
 *     _MsixvcAddGameToGCS@4 @ 0x100054C0 (_MsixvcAddGameToGCS@4.c)
 *     ??1?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE@XZ @ 0x100057CC (--1-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QAEPAPAUIPackage@StateRepository@Internal@Windows@@XZ @ 0x10005827 (--B-$ComPtrRef@V-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WR.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x10005888 (--$ActivateInstance@V-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x100059AE (--$ActivateInstance@V-$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10005E30 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 *     ?NtStatusToHr@details@wil@@YGJJ@Z @ 0x1000608F (-NtStatusToHr@details@wil@@YGJJ@Z.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailure.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z @ 0x10006424 (-GetCallingProcessHandle@CallerIdentity@@YGJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PAPAX@Z.c)
 *     ??1?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@QAE@XZ @ 0x1000653D (--1-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@QAE@XZ.c)
 *     __CRT_INIT@12 @ 0x10006818 (__CRT_INIT@12.c)
 *     __DllMainCRTStartup @ 0x10006A52 (__DllMainCRTStartup.c)
 *     __initterm_e @ 0x10006CFF (__initterm_e.c)
 *     __onexit @ 0x10006EAA (__onexit.c)
 * Callees:
 *     <none>
 */

void _guard_check_icall_nop()
{
  ;
}
