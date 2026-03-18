/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14079AD98
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079C354 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14079CB30 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1407BEE44 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x1407C7F0C (PiCMGetDeviceIdList.c)
 *     PiDqIrpPropertySet @ 0x140800484 (PiDqIrpPropertySet.c)
 *     PiCMOpenClassKey @ 0x140860768 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086DE9C (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140968C40 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968DDC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140969250 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969340 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096958C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096973C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A734 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096A9C8 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096ABC4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AD80 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14079ADDC (PiAuVerifyAccessToObject.c)
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
