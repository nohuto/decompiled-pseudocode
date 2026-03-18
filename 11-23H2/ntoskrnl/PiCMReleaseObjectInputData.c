/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14079A0D8
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetDeviceStatus @ 0x140799968 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799CF0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x1407BE8B4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x140860608 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x14086C5EC (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086D9CC (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x140968B90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968D2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409691A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969290 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409694DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096968C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140969F20 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A018 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096ACD0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BC6C (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
