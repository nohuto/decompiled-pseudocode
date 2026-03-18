/*
 * XREFs of PfSnFailProcessTrace @ 0x1407F8C9C
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1406A05E4 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1406B5FC4 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1407E5390 (PfSnLogHelper.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1407D936C (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
