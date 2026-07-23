/*
 * XREFs of sub_14022FA04 @ 0x14022FA04
 * Callers:
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14022FA04(int a1, char a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-20h]
  __int128 *v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(xmmword_140D06900) & 0x100000) != 0 )
  {
    v6 = 0LL;
    v5 = 0LL;
    BYTE1(v5) = a2;
    LOBYTE(v5) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        *((_QWORD *)&v5 + 1) = *a3;
        v6 = *a4;
      }
      else if ( a1 == 2 )
      {
        *((_QWORD *)&v5 + 1) = qword_140C2B1A0;
      }
    }
    v9 = 0;
    v7 = &v5;
    v8 = 24;
    return sub_14035EDE4((unsigned int)&v7, 1, 1074790400, 3927, 1538);
  }
  return result;
}
