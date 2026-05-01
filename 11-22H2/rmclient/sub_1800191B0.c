/*
 * XREFs of sub_1800191B0 @ 0x1800191B0
 * Callers:
 *     sub_180003AD8 @ 0x180003AD8 (sub_180003AD8.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     sub_18001AA68 @ 0x18001AA68 (sub_18001AA68.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void __fastcall sub_1800191B0(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    j_free(v1);
}
