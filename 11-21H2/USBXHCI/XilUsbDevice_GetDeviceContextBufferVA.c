/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferVA @ 0x1C000154C
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000448C (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C000BFCC (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C000C034 (UsbDevice_GetEndpointState.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0010670 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0038FA8 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003A428 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C00467DC (UsbDevice_GetEndpointOffloadInformation.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C004A540 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *(_BYTE *)(a1 + 657) )
    v2 = *(_QWORD *)(a1 + 640);
  else
    v2 = *(_QWORD *)(a1 + 632);
  if ( v2 )
    return *(_QWORD *)(v2 + 16);
  return result;
}
