/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1406D3F74
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D3FB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790974 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140793DAC (IopBuildGlobalSymbolicLinkString.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C57A0 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1407CF8BC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFA68 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8BB4 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8D2C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DC154 (PnpGetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140848FF0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084930C (PipApplyFunctionToServiceInstances.c)
 *     IoRegisterDeviceInterface @ 0x140867000 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DAE8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpDisableDeviceInterfaces @ 0x140882ED0 (PnpDisableDeviceInterfaces.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x140956654 (PnpDeleteDeviceInterfaces.c)
 *     PiInitializeDevice @ 0x14096DCE4 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140B3A22C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
