/*
 * XREFs of IommuUnmapDevice @ 0x140523B50
 * Callers:
 *     <none>
 * Callees:
 *     IommupUnmapDeviceInternal @ 0x140523FE8 (IommupUnmapDeviceInternal.c)
 *     HalpIommuDeleteDevice @ 0x1409339FC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuUnmapDevice(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = IommupUnmapDeviceInternal(*a1);
  HalpIommuDeleteDevice(a2);
  return v3;
}
