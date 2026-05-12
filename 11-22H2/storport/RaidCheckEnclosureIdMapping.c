/*
 * XREFs of RaidCheckEnclosureIdMapping @ 0x1C0041A14
 * Callers:
 *     ShimGetMsftId @ 0x1C0073F00 (ShimGetMsftId.c)
 * Callees:
 *     StorCompareScsiDeviceId @ 0x1C0012C3C (StorCompareScsiDeviceId.c)
 */

_OWORD *__fastcall RaidCheckEnclosureIdMapping(_OWORD *a1, __int64 a2)
{
  PVOID *v2; // rbx

  v2 = (PVOID *)EnclosureIdList;
  *a1 = 0LL;
  while ( v2 != &EnclosureIdList )
  {
    if ( !(unsigned int)StorCompareScsiDeviceId(a2, (__int64)v2[2]) )
    {
      *a1 = *(_OWORD *)(v2 + 3);
      return a1;
    }
    v2 = (PVOID *)*v2;
  }
  return a1;
}
