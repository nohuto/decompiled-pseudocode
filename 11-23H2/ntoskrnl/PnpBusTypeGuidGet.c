/*
 * XREFs of PnpBusTypeGuidGet @ 0x1407E9914
 * Callers:
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 */

__int64 __fastcall PnpBusTypeGuidGet(unsigned __int16 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = a1;
  ExAcquireFastMutex(&PnpBusTypeGuidLock);
  if ( v2 >= PnpBusTypeGuidCount )
  {
    v5 = -1073741772;
  }
  else
  {
    v4 = 2LL * v2;
    v5 = 0;
    *a2 = *(_OWORD *)((char *)PnpBusTypeGuidArray + 8 * v4);
  }
  ExReleaseFastMutex(&PnpBusTypeGuidLock);
  return v5;
}
