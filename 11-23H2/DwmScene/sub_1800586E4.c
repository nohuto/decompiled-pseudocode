/*
 * XREFs of sub_1800586E4 @ 0x1800586E4
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 * Callees:
 *     sub_180059024 @ 0x180059024 (sub_180059024.c)
 */

char __fastcall sub_1800586E4(_QWORD *a1, _QWORD *a2)
{
  char v2; // al

  if ( a1[1] - *a1 == a2[1] - *a2 )
    v2 = sub_180059024(*a1, a1[1], *a2);
  else
    v2 = 0;
  return v2 ^ 1;
}
