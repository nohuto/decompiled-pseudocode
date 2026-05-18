/*
 * XREFs of sub_180091900 @ 0x180091900
 * Callers:
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_180093310 @ 0x180093310 (sub_180093310.c)
 * Callees:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 *     sub_1800E0BF4 @ 0x1800E0BF4 (sub_1800E0BF4.c)
 */

_QWORD *__fastcall sub_180091900(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 *)sub_1800E0BF4(a1, &v8);
  sub_1800916DC(a1, a2, a3, v6);
  return a2;
}
