/*
 * XREFs of PiCMHandleIoctl @ 0x1406D0760
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1406D06F0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetObjectProperty @ 0x1406D09D4 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceStatus @ 0x140799968 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799CF0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x140799EB8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079BE44 (PiCMSetObjectProperty.c)
 *     PiCMOpenDeviceKey @ 0x1407BE8B4 (PiCMOpenDeviceKey.c)
 *     PiCMGetRegistryProperty @ 0x1407C0874 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C511C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x1407C797C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407C9C0C (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x140860608 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x14086C5EC (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086D9CC (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x140968430 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140968B90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968D2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968E48 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409691A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969290 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409694DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096968C (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x14096999C (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x140969F20 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A018 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A274 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A684 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096A918 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AB14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096ACD0 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *P,
        unsigned int a6,
        int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, (__int64)P);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)P);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, (__int64)P);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, a3, a4, a7, P);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, P);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, a3, a4, a7, (__int64)P);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, a3, a4, a7, P);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, a3, a4, a7, P);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, (__int64)P);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, a3, a4, a7, (__int64)P);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, a3, a4, a7, (__int64)P);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, a3, a4, a7, (__int64)P);
}
