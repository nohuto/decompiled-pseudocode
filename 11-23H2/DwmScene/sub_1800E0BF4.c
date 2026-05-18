/*
 * XREFs of sub_1800E0BF4 @ 0x1800E0BF4
 * Callers:
 *     sub_180091900 @ 0x180091900 (sub_180091900.c)
 * Callees:
 *     sub_180091F1C @ 0x180091F1C (sub_180091F1C.c)
 *     sub_1800E0B7C @ 0x1800E0B7C (sub_1800E0B7C.c)
 */

_QWORD *__fastcall sub_1800E0BF4(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = (__int64)a2;
  v3 = sub_1800E0B7C(v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  sub_180091F1C(v6);
  return a2;
}
