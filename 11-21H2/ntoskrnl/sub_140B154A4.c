/*
 * XREFs of sub_140B154A4 @ 0x140B154A4
 * Callers:
 *     sub_140B15450 @ 0x140B15450 (sub_140B15450.c)
 * Callees:
 *     sub_1403C77D4 @ 0x1403C77D4 (sub_1403C77D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140833110 @ 0x140833110 (sub_140833110.c)
 *     sub_140833314 @ 0x140833314 (sub_140833314.c)
 */

__int64 __fastcall sub_140B154A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF

  v6 = sub_140833314(qword_140C49458);
  v11[8] = a5;
  v11[1] = v7;
  v11[2] = v8;
  v11[4] = v7;
  v11[5] = v8;
  v11[0] = v6;
  v11[3] = v6;
  v11[6] = v6;
  v11[7] = v9;
  sub_140833110(qword_140C494B0, v6, (__int64)v11);
  result = sub_1403C77D4((__int64)&qword_140C49458, v6);
  qword_140C49598[0] = a6;
  return result;
}
