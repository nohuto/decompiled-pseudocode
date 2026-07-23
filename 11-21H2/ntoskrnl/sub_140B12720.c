/*
 * XREFs of sub_140B12720 @ 0x140B12720
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     sub_1403C5BB8 @ 0x1403C5BB8 (sub_1403C5BB8.c)
 */

__int64 __fastcall sub_140B12720(int a1)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  if ( qword_140D686A8 )
  {
    sub_1403C5BB8(&stru_140011FE8, a1);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[0] = sub_140AF32D0;
    v4 = a1;
    v3[3] = &v4;
    sub_140232788((__int64)qword_140D686A8, 0LL, (int)&v5, (__int64)v3);
    return sub_1403C5BB8(&stru_140011FD8, a1);
  }
  return result;
}
