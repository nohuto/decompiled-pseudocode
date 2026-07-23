/*
 * XREFs of IommuUnmapDevice @ 0x140523FE0
 * Callers:
 *     <none>
 * Callees:
 *     IommupUnmapDeviceInternal @ 0x140524478 (IommupUnmapDeviceInternal.c)
 *     HalpIommuDeleteDevice @ 0x140933C2C (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuUnmapDevice(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = IommupUnmapDeviceInternal(*a1);
  HalpIommuDeleteDevice(a2);
  return v3;
}
