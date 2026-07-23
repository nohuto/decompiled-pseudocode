/*
 * XREFs of sub_14078AC7C @ 0x14078AC7C
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 */

__int64 __fastcall sub_14078AC7C(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152LL);
  v3 = *(_QWORD *)(*a1 + 160LL);
  sub_14078C2F8(*a1);
  sub_14078B2D4(v1);
  sub_14078B7C4((void *)(v3 + 4), v2);
  return 0LL;
}
