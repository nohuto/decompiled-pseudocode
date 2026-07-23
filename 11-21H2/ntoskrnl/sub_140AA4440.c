/*
 * XREFs of sub_140AA4440 @ 0x140AA4440
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA5808 @ 0x140AA5808 (sub_140AA5808.c)
 */

__int64 __fastcall sub_140AA4440(_QWORD *a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a1[8] == 0LL;
  return sub_140AA5808(a1, *a1, a3);
}
