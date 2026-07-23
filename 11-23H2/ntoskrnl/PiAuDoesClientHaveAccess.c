/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14079AA78
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079C034 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14079C810 (PiSwDispatch.c)
 *     PiCMOpenDeviceKey @ 0x1407BEB84 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x1407C7C4C (PiCMGetDeviceIdList.c)
 *     PiDqIrpPropertySet @ 0x1408000A4 (PiDqIrpPropertySet.c)
 *     PiCMOpenClassKey @ 0x140860848 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086DC0C (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140968D90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409693A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096AB18 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AD14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AED0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14079AABC (PiAuVerifyAccessToObject.c)
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
