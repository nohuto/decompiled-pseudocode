/*
 * XREFs of RaidCheckEnclosureIdMapping @ 0x1C003F178
 * Callers:
 *     ShimGetMsftId @ 0x1C0065350 (ShimGetMsftId.c)
 * Callees:
 *     StorCompareScsiDeviceId @ 0x1C001769C (StorCompareScsiDeviceId.c)
 */

_OWORD *__fastcall RaidCheckEnclosureIdMapping(_OWORD *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = EnclosureIdList;
  *a1 = 0LL;
  while ( (__int64 *)v2 != &EnclosureIdList )
  {
    if ( !(unsigned int)StorCompareScsiDeviceId(a2, *(_QWORD *)(v2 + 16)) )
    {
      *a1 = *(_OWORD *)(v2 + 24);
      return a1;
    }
    v2 = *(_QWORD *)v2;
  }
  return a1;
}
