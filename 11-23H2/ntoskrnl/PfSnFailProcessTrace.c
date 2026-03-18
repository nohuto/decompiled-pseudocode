/*
 * XREFs of PfSnFailProcessTrace @ 0x14097F804
 * Callers:
 *     PfSnLogHelper @ 0x1407738C8 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1407BE6B8 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1407C3284 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1407E5320 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
