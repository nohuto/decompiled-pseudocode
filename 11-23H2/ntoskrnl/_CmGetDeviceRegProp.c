/*
 * XREFs of _CmGetDeviceRegProp @ 0x1406CD48C
 * Callers:
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14069A82C (PipGetRegistrySecurityWithFallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14069AD64 (PipGetRegistryDwordWithFallback.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406C9C5C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3EC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC800 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD60C (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140788D10 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1407930F8 (PiGetDeviceRegProperty.c)
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796978 (PiPnpRtlSetObjectProperty.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407989E0 (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140798BD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x14079A758 (_CmGetDeviceStatus.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14079B7B0 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiCMGetRegistryProperty @ 0x1407C0B44 (PiCMGetRegistryProperty.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407C1460 (PiQueryRemovableDeviceOverride.c)
 *     PiDeviceRegistration @ 0x1407CF8BC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFA68 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8BB4 (PnpIsDeviceInstanceEnabled.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407D9220 (PpDevCfgProcessDeviceOperations.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1407DE244 (PpHotSwapUpdateRemovalPolicy.c)
 *     IopPnPDispatch @ 0x1407EB2F0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140812494 (IopInitializeDeviceInstanceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     IopIsReportedAlready @ 0x1408358C0 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842C50 (PiDevCfgProcessDeviceCallback.c)
 *     _CmIsLocalMachineContainer @ 0x14085D8A8 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087C944 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D264 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14095A674 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14095AB10 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14095B430 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14095B680 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14095CAD0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095E6F0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961CEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x140962AFC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140962E74 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1409635BC (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     _CmDeleteDeviceWorker @ 0x140A6268C (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140A65170 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140A65450 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x140B94540 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140B94660 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD60C (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v12; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  v20[2] = a3;
  LODWORD(v20[3]) = a4;
  v20[5] = a6;
  v20[6] = a7;
  v20[4] = a5;
  LODWORD(v20[7]) = a8;
  if ( v11 )
  {
    v12 = v11(a1, a2, 1LL, 9LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), v20[4], v20[5], v20[6], v20[7]);
  v14 = DeviceRegPropWorker;
  if ( !v11 )
    return v14;
  LODWORD(v20[0]) = DeviceRegPropWorker;
  v15 = v11(a1, a2, 1LL, 9LL, 2, v20);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(v20[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
