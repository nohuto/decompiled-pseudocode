/*
 * XREFs of sub_180085AE0 @ 0x180085AE0
 * Callers:
 *     sub_180085AA8 @ 0x180085AA8 (sub_180085AA8.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180085AE0(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_180085AFC(a1, a2, *(const void **)a3, (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 4);
}
