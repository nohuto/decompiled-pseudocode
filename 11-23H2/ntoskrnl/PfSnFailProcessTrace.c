/*
 * XREFs of PfSnFailProcessTrace @ 0x14097FA04
 * Callers:
 *     PfSnLogHelper @ 0x140773AB8 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1407BE988 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1407C3554 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1407E55F0 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
