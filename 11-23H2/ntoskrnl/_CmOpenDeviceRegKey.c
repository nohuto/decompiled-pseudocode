/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1406CE0C4
 * Callers:
 *     IoOpenDeviceRegistryKey @ 0x140687CA0 (IoOpenDeviceRegistryKey.c)
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA3BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406CC7D0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDispatchDevice @ 0x1406CD010 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406CD5DC (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE1F4 (_CmOpenDeviceRegKeyWorker.c)
 *     PiQueryAndAllocateBootResources @ 0x14078FA24 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14078FC24 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14078FFDC (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140790344 (PiQueryResourceRequirements.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140798794 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407987F0 (PnpCheckDeviceIdsChanged.c)
 *     PiCMOpenDeviceKey @ 0x1407BE8B4 (PiCMOpenDeviceKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CF798 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateDeviceWorker @ 0x1407D780C (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D88E4 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8A5C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceCompoundFilters @ 0x1407FD450 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14080A434 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IopGetRootDevices @ 0x140811F58 (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140816154 (IopWriteAllocatedResourcesToRegistry.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1408355C0 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842950 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084900C (PipApplyFunctionToServiceInstances.c)
 *     IopReleaseDeviceResources @ 0x14086977C (IopReleaseDeviceResources.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086C9A0 (_CmSetDeviceRegPropWorker.c)
 *     PipMakeGloballyUniqueId @ 0x140870A20 (PipMakeGloballyUniqueId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14087BC00 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x14087C808 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D024 (PiDevCfgEnumDeviceKeys.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140957980 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140959B3C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095E648 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FB50 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961AEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61EF4 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A623DC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140A674A0 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A67604 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140A69768 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE1F4 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rbp
  __int64 Pool2; // rax
  char *v14; // rdi
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // rax
  int v19; // ecx

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  Pool2 = ExAllocatePool2(256LL, 88LL, 1380994640LL);
  v14 = (char *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(Pool2 + 16) = a3;
  *(_DWORD *)(Pool2 + 20) = a4;
  *(_DWORD *)(Pool2 + 24) = a5;
  *(_BYTE *)(Pool2 + 28) = a6;
  *(_QWORD *)(Pool2 + 32) = a7;
  if ( v8 )
  {
    v15 = v8(a1, a2, 1LL);
    if ( v15 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
      {
        v16 = *(_DWORD *)v14;
        v17 = v14 + 40;
        goto LABEL_6;
      }
      if ( v15 )
        goto LABEL_15;
    }
  }
  v16 = CmOpenDeviceRegKeyWorker(a1, *((_DWORD *)v14 + 6), v14[28], *((_QWORD *)v14 + 4), (__int64)(v14 + 40));
  v17 = v14 + 40;
  if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v17 = v14 + 40, v19 == -1073741822) )
  {
LABEL_6:
    if ( v16 >= 0 && a8 )
      *a8 = *v17;
    goto LABEL_9;
  }
  if ( v19 == -1073741536 )
  {
    v16 = *(_DWORD *)v14;
    goto LABEL_6;
  }
  if ( !v19 )
    goto LABEL_6;
LABEL_15:
  v16 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v16;
}
