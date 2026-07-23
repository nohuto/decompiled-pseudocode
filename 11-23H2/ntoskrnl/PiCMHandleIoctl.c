/*
 * XREFs of PiCMHandleIoctl @ 0x1406D0790
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1406D0720 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetObjectProperty @ 0x1406D0A04 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceStatus @ 0x140799B58 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799EE0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14079C034 (PiCMSetObjectProperty.c)
 *     PiCMOpenDeviceKey @ 0x1407BEB84 (PiCMOpenDeviceKey.c)
 *     PiCMGetRegistryProperty @ 0x1407C0B44 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C53EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceIdList @ 0x1407C7C4C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407C9EDC (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x140860848 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x14086C82C (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086DC0C (PiCMOpenObjectKey.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140968D90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409693A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x140969B9C (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x14096A120 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A218 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096AB18 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14096AD14 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AED0 (PiCMUnregisterDeviceInterface.c)
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
