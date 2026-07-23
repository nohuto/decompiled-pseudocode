/*
 * XREFs of sub_140360E0C @ 0x140360E0C
 * Callers:
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1409870AC @ 0x1409870AC (sub_1409870AC.c)
 * Callees:
 *     sub_1408820E0 @ 0x1408820E0 (sub_1408820E0.c)
 */

__int64 __fastcall sub_140360E0C(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return sub_1408820E0(a1 + 8);
}
