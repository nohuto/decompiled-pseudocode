/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180013EF0 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001B208 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180027FC0 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18002B240 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180030590 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180030820 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180033174 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034484 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x180034E8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003D448 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18003D860 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180040F64 (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800B9CDC (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800BC1E4 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800BF434 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800CC69C (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x1800CC8B0 (-WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800CFCE0 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800CFDE4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800D0A6C (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800D13BC (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800D14D4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D3850 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800D4CE0 (wil--init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800E5F1C (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x1800EF5FC (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___ @ 0x1800FA3A8 (wil--init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F544 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x180188B9C (-Initialize@PenInterface@@QEAAJXZ.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x180188DA8 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x180189164 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x18018B250 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x18018B5D8 (-Initialize@HapticInterface@@QEAAJXZ.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x18018BBA8 (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x180196908 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x18019D9F4 (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x18019E688 (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801BC054 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801C3E88 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CC380 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180079F88 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
