/*
 * XREFs of sub_140881426 @ 0x140881426
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 * Callees:
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 */

__int64 __fastcall sub_140881426(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    return sub_1406BF450(v2, a2);
  else
    return sub_1407C97C0(v2, a2);
}
