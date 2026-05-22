/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640
 * Callers:
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18003F740 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x18003F9C0 (-NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z.c)
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@PEA_K@Z @ 0x18004B3D8 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@st.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18004B714 (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D8364 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     GetRIMDeviceInstancePath @ 0x1800E59E8 (GetRIMDeviceInstancePath.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800ED470 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800EDEB8 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 *     ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F0330 (-CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800F06CC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800F1E94 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800F2540 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800F36E0 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F3CD8 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F42A8 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F48C8 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F5530 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F5F98 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800F65F0 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18017C9F8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180188B70 (-GetMany@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x1801896B0 (-IndexOf@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x1801A7030 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x1801A7304 (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 *     ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801A93C0 (-ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z.c)
 *     ?FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z @ 0x1801A9588 (-FindHapticsCollection@HapticInterface@@AEAA_NPEAU_HIDP_PREPARSED_DATA@@PEAG@Z.c)
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801A9D4C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
