/*
 * XREFs of sub_1800C3908 @ 0x1800C3908
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 *     sub_1800C3AA8 @ 0x1800C3AA8 (sub_1800C3AA8.c)
 */

char *__fastcall sub_1800C3908(char *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = sub_1800C3AA8(v6);
  }
  else
  {
    v3 = sub_1800C3AA8(v6) - 2;
    *(_WORD *)v3 = v4 + 45;
  }
  *(_QWORD *)a1 = v4;
  *((_QWORD *)a1 + 2) = v4;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = v4;
  if ( (_BYTE *)v3 != v6 )
    sub_18001E768(a1, (const void *)v3, (__int64)&v6[-v3] >> 1);
  return a1;
}
