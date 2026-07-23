/*
 * XREFs of sub_14065DDC4 @ 0x14065DDC4
 * Callers:
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_14065D320 @ 0x14065D320 (sub_14065D320.c)
 *     sub_14065DC44 @ 0x14065DC44 (sub_14065DC44.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 */

void __fastcall sub_14065DDC4(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      sub_14079BD98(a1, v4);
    sub_140346D64(a2, 0x77554D43u);
  }
}
