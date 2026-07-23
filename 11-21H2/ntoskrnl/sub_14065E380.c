/*
 * XREFs of sub_14065E380 @ 0x14065E380
 * Callers:
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_14065E1EC @ 0x14065E1EC (sub_14065E1EC.c)
 *     sub_14065E480 @ 0x14065E480 (sub_14065E480.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_1409239EC @ 0x1409239EC (sub_1409239EC.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14065E7EC @ 0x14065E7EC (sub_14065E7EC.c)
 */

void __fastcall sub_14065E380(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*a2)-- == 1 )
  {
    v5 = a2[3];
    if ( (_DWORD)v5 != -1 )
      sub_14065E7EC(a1, v5);
    v6 = a2[4];
    if ( (_DWORD)v6 != -1 )
      sub_14065E7EC(a1, v6);
    sub_140346D64(a2, 0x77554D43u);
  }
}
