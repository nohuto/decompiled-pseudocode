/*
 * XREFs of sub_140256C68 @ 0x140256C68
 * Callers:
 *     sub_140256998 @ 0x140256998 (sub_140256998.c)
 *     sub_1403A0B60 @ 0x1403A0B60 (sub_1403A0B60.c)
 *     sub_1403A1210 @ 0x1403A1210 (sub_1403A1210.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140256C68(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
