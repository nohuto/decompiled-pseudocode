/*
 * XREFs of sub_14091D284 @ 0x14091D284
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14065BCB0 @ 0x14065BCB0 (sub_14065BCB0.c)
 */

void __fastcall sub_14091D284(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  v2 = 0LL;
  v3 = 512LL;
  do
  {
    sub_14065BC50(v2 + *(_QWORD *)(a1 + 96) + 56LL);
    v2 += 408LL;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)a1 = -2;
  sub_14065BCB0((__int16 *)(a1 + 16));
}
