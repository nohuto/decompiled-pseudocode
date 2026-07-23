/*
 * XREFs of sub_140B4E7BC @ 0x140B4E7BC
 * Callers:
 *     sub_1409312AC @ 0x1409312AC (sub_1409312AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140B4E934 @ 0x140B4E934 (sub_140B4E934.c)
 */

__int64 __fastcall sub_140B4E7BC(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 result; // rax
  unsigned int v10; // ecx
  unsigned __int8 v11; // di
  unsigned int v12; // ecx
  unsigned __int8 v13; // bl
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF

  *a4 = a2;
  *a3 = a2;
  v6 = a1;
  v14 = 0LL;
  sub_140B4E934(a1, 0LL, 0LL, &v14);
  v7 = v14;
  if ( (unsigned int)v14 >= 0xB && (sub_140B4E934(v6, 11LL, 0LL, &v14), DWORD1(v14)) )
  {
    v8 = 0;
    do
    {
      sub_140B4E934(v6, 11LL, v8++, &v14);
      result = (unsigned int)((DWORD2(v14) >> 8) - 1);
      if ( DWORD2(v14) >> 8 == 1 )
      {
        *a4 >>= v14 & 0x1F;
      }
      else if ( DWORD2(v14) >> 8 == 2 )
      {
        *a3 >>= v14 & 0x1F;
      }
    }
    while ( WORD2(v14) );
  }
  else
  {
    if ( v7 < 4 )
    {
      v11 = 1;
    }
    else
    {
      sub_140B4E934(v6, 4LL, 0LL, &v14);
      _BitScanReverse(&v10, 2 * ((unsigned int)v14 >> 26) + 1);
      v11 = 1 << v10;
    }
    sub_140B4E934(v6, 1LL, 0LL, &v14);
    if ( (HIDWORD(v14) & 0x10000000) != 0 )
    {
      _BitScanReverse(&v12, 2 * BYTE6(v14) - 1);
      v13 = 1 << v12;
    }
    else
    {
      v13 = v11;
    }
    *a4 /= (unsigned int)(unsigned __int8)(v13 / v11);
    result = *a3 / (unsigned int)v13;
    *a3 = result;
  }
  return result;
}
