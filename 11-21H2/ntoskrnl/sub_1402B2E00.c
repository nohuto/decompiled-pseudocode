/*
 * XREFs of sub_1402B2E00 @ 0x1402B2E00
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_140739F40 @ 0x140739F40 (sub_140739F40.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_14097079C @ 0x14097079C (sub_14097079C.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 *     sub_14098194C @ 0x14098194C (sub_14098194C.c)
 *     sub_140A4F800 @ 0x140A4F800 (sub_140A4F800.c)
 *     sub_140A4F8B0 @ 0x140A4F8B0 (sub_140A4F8B0.c)
 *     sub_140A4FFC0 @ 0x140A4FFC0 (sub_140A4FFC0.c)
 *     sub_140A8142C @ 0x140A8142C (sub_140A8142C.c)
 *     sub_140A814F8 @ 0x140A814F8 (sub_140A814F8.c)
 *     sub_140A815FC @ 0x140A815FC (sub_140A815FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402B2E00(unsigned __int64 a1)
{
  if ( a1 > qword_140C50840 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
