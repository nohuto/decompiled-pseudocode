/*
 * XREFs of sub_1406913B4 @ 0x1406913B4
 * Callers:
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 */

char __fastcall sub_1406913B4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_14035B8F4((__int64 **)(a1 + 48), 0LL, 0LL, a4);
  sub_1402AFC00(v4);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
