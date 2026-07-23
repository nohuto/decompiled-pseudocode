/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14079A2C8
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetDeviceStatus @ 0x140799B58 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799EE0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x1407BEB84 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x140860848 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x14086C82C (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086DC0C (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x140968D90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409693A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14096A120 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A218 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AED0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
