/*
 * XREFs of PpmAllocWmiEvent @ 0x1405991EC
 * Callers:
 *     PpmFireWmiEvent @ 0x140599288 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x140599310 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x1403C2740 (IoWMIDeviceObjectToProviderId.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmAllocWmiEvent(PDEVICE_OBJECT DeviceObject, __int128 *a2, int a3)
{
  int v3; // esi
  __int64 Pool2; // rbx
  __int128 v8; // xmm0

  v3 = a3 + 64;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(a3 + 64), 2001555536LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)Pool2 = v3;
    *(_DWORD *)(Pool2 + 4) = IoWMIDeviceObjectToProviderId(DeviceObject);
    v8 = *a2;
    *(_DWORD *)(Pool2 + 44) = 138;
    *(_DWORD *)(Pool2 + 56) = 64;
    *(_OWORD *)(Pool2 + 24) = v8;
    *(_DWORD *)(Pool2 + 60) = a3;
  }
  return Pool2;
}
