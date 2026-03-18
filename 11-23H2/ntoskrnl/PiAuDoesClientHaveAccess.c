/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14079A888
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079BE44 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14079C620 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1407BE8B4 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x1407C797C (PiCMGetDeviceIdList.c)
 *     PiDqIrpPropertySet @ 0x1407FFDD4 (PiDqIrpPropertySet.c)
 *     PiCMOpenClassKey @ 0x140860608 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086D9CC (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140968B90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968D2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409691A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969290 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409694DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096968C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A684 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096A918 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AB14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096ACD0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14079A8CC (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
