/*
 * XREFs of sub_1405062F4 @ 0x1405062F4
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405062F4(int *a1)
{
  int v1; // eax
  bool v2; // r8
  int v4; // ecx

  v1 = a1[2];
  v2 = 0;
  if ( v1 )
    v2 = a1[3] < 50 * v1 / 0x64u;
  v4 = *a1;
  if ( v4 && a1[1] < 50 * v4 / 0x64u )
    return 1;
  return v2;
}
