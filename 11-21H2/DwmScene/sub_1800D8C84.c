/*
 * XREFs of sub_1800D8C84 @ 0x1800D8C84
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001F958 @ 0x18001F958 (sub_18001F958.c)
 *     sub_1800D8E50 @ 0x1800D8E50 (sub_1800D8E50.c)
 */

__int64 *__fastcall sub_1800D8C84(__int64 *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  _BYTE v8[6]; // [rsp+52h] [rbp-16h] BYREF

  if ( a2 >= 0 )
  {
    v3 = sub_1800D8E50(v8);
  }
  else
  {
    v3 = sub_1800D8E50(v8) - 2;
    *(_WORD *)v3 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  if ( (_BYTE *)v3 != v8 )
  {
    v5 = (__int64)&v8[-v3] >> 1;
    if ( v5 > 7 )
    {
      sub_18001F958(a1, v5, v4, (const void *)v3);
    }
    else
    {
      v6 = 2 * v5;
      a1[2] = v5;
      memmove(a1, (const void *)v3, 2 * v5);
      *(_WORD *)((char *)a1 + v6) = 0;
    }
  }
  return a1;
}
