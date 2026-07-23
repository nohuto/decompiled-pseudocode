/*
 * XREFs of sub_14025D7D0 @ 0x14025D7D0
 * Callers:
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 * Callees:
 *     sub_140258C54 @ 0x140258C54 (sub_140258C54.c)
 */

void __fastcall sub_14025D7D0(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1176) )
  {
    if ( !*(_DWORD *)(a1 + 1196) )
      sub_140258C54(&stru_140D31F80, 0);
  }
}
