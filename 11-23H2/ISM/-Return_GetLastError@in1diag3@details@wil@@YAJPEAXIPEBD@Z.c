/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C
 * Callers:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001C204 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180025840 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___ @ 0x180025C48 (wil--init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180032EE8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180033718 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180037F50 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18003FE10 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041388 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180041598 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004BB44 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004BFC0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004C210 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180051ECC (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005A044 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x18005C214 (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@U-$de.c)
 *     ?SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z @ 0x18005D3E8 (-SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800D2BA4 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800D52A0 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800E5CAC (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x1800E5EC0 (-WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800E95F0 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800E97DC (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800EA3AC (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800EAD24 (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800EAE40 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800ED470 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800EE70C (wil--init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800FED2C (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x180108778 (--$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801A6CDC (-Initialize@PenInterface@@QEAAJXZ.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801A6EF4 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801A7304 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801A93C0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 *     ?Initialize@HapticInterface@@QEAAJXZ @ 0x1801A9758 (-Initialize@HapticInterface@@QEAAJXZ.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801A9D4C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x1801B48D0 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x1801BBB9C (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x1801BC8E0 (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801DA3E4 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801E29E0 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801EB3F0 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180090D78 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
