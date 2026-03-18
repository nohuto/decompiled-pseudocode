/*
 * XREFs of UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0046DC8
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0046F9C (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047420 (UsbDevice_SetResourceAssignment.c)
 */

char __fastcall UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  int i; // ebp
  __int64 v14; // [rsp+20h] [rbp-38h]

  if ( !*(_DWORD *)(a2 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        a4,
        v14,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
        159,
        "Unexpected EndpointsToDisableCount");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = 0;
  LODWORD(v7) = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2, a2, a3, a4);
  v11 = 0LL;
  *(_DWORD *)(a1 + 580) = v7;
  for ( i = v7; (unsigned int)v11 < *(_DWORD *)(a2 + 40); v11 = (unsigned int)(v11 + 1) )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11),
           off_1C00611A8);
    if ( *(_DWORD *)(v7 + 1352) == 2 )
    {
      ++v6;
      LOBYTE(v7) = UsbDevice_SetResourceAssignment(a1, v7, 0LL);
    }
  }
  if ( v6 != i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        v9,
        v10,
        v14,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
        183,
        "Mismatch encountered in UnassignPinsForOffloadedEndpointsState");
    LOBYTE(v7) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v7 )
      __debugbreak();
  }
  return v7;
}
