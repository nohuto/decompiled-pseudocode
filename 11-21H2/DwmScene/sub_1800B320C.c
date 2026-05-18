/*
 * XREFs of sub_1800B320C @ 0x1800B320C
 * Callers:
 *     sub_18002DF30 @ 0x18002DF30 (sub_18002DF30.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 */

char __fastcall sub_1800B320C(__int64 a1)
{
  __int64 v1; // r8

  if ( *(_BYTE *)sub_1800441D8(a1 + 184) )
    return sub_1800B3180(v1, *(_QWORD *)(v1 + 192));
  else
    return 0;
}
