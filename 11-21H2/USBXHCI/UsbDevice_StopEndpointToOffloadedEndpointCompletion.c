/*
 * XREFs of UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0047650
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall UsbDevice_StopEndpointToOffloadedEndpointCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        a4,
        v8,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
        142,
        "Stop Endpoint cannot fail while issued on an offloaded endpoint");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  result = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(result + 16);
  if ( (*(_DWORD *)(v6 + 580))-- == 1 )
    return UsbDevice_QueueConfigureEndpointEvent(v6, 1LL);
  return result;
}
