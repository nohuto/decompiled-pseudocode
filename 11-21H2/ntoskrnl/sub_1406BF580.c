/*
 * XREFs of sub_1406BF580 @ 0x1406BF580
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406BF580(__int64 a1, _QWORD *a2, char *a3)
{
  char v4; // al

  if ( *a2 )
    v4 = sub_14042A5E0(*(_QWORD *)&qword_140D00AC0, *(_QWORD *)(a1 + 16));
  else
    v4 = 1;
  *a3 = v4;
  return 0LL;
}
