/*
 * XREFs of sub_140B4E580 @ 0x140B4E580
 * Callers:
 *     sub_1409312AC @ 0x1409312AC (sub_1409312AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140B4E934 @ 0x140B4E934 (sub_140B4E934.c)
 */

__int64 __fastcall sub_140B4E580(__int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  int v11; // ecx
  __int64 result; // rax
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF

  v7 = 1;
  v13 = 0LL;
  v8 = 1;
  v9 = a1;
  sub_140B4E934(a1, 0x80000000LL, 0LL, &v13);
  v10 = v13;
  if ( (unsigned int)v13 >= 0x80000008 )
  {
    sub_140B4E934(v9, 2147483656LL, 0LL, &v13);
    LOWORD(v11) = WORD4(v13) >> 12;
    if ( !(WORD4(v13) >> 12) )
      _BitScanReverse((unsigned int *)&v11, 2 * BYTE8(v13) + 1);
    v8 = 1 << v11;
    if ( v10 >= 0x8000001E )
    {
      sub_140B4E934(v9, 2147483649LL, 0LL, &v13);
      if ( (DWORD2(v13) & 0x400000) != 0 )
      {
        sub_140B4E934(v9, 2147483678LL, 0LL, &v13);
        v7 = BYTE5(v13) + 1;
        v8 /= v7;
      }
    }
  }
  *a3 = a2 / (v8 * v7);
  result = a2 / v7;
  *a4 = result;
  return result;
}
