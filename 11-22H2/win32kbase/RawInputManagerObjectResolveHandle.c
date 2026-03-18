/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00751C0
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070630 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0075530 (RIMDirectStopDeviceClassNotifications.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 *     RIMRemoveInputOfType @ 0x1C00B91E0 (RIMRemoveInputOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB2F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0174734 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInputOfType @ 0x1C0175990 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C80 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DF0 (RIMDirectStartStopDeviceRead.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177190 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0177870 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0177AC0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0177E80 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0178570 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0178980 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0178CC0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01792E0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0179770 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMOnTimerNotification @ 0x1C017A240 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C017A550 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C017A810 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C017AF00 (RIMResetPointerDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
