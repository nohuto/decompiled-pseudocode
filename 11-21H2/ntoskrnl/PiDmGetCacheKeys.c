/*
 * XREFs of PiDmGetCacheKeys @ 0x14077B4E4
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1406D3020 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14076A2CC (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407783C4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14077B3D4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
