/*
 * XREFs of sub_18007C0A0 @ 0x18007C0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007C0EC @ 0x18007C0EC (sub_18007C0EC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007C0A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_18007C0EC(a1, a3, a4, a2, 1);
  return a2;
}
