/*
 * XREFs of RtlIntegerToChar @ 0x18006F990
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x18006F900 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  int v11; // r11d
  const char *v12; // rdx
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v17; // rbx
  char v18; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  if ( !a2 )
  {
    v6 = 10;
    goto LABEL_17;
  }
  if ( a2 != 16 )
  {
    if ( a2 != 10 )
    {
      if ( a2 == 2 )
      {
        v8 = 1;
      }
      else
      {
        if ( a2 != 8 )
          return 3221225485LL;
        v8 = 3;
      }
      goto LABEL_4;
    }
LABEL_17:
    v8 = 0;
    v9 = 0;
    goto LABEL_5;
  }
  v8 = 4;
LABEL_4:
  v9 = (1 << v8) - 1;
LABEL_5:
  v10 = &v18;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    --v10;
    v12 = "0123456789ABCDEF";
    *v10 = RtlpIntegerChars[v11];
  }
  while ( a1 );
  v14 = (unsigned int)(v13 + 65 - (_DWORD)v10);
  if ( a3 >= 0 )
    goto LABEL_10;
  a3 = -a3;
  v15 = (int)v14 <= a3;
  if ( (int)v14 < a3 )
  {
    v17 = (unsigned int)(a3 - v14);
    LOBYTE(v12) = 48;
    memset_thunk_772440563353939046(a4, (int)v12, v17);
    a3 = v14;
    a4 += v17;
LABEL_10:
    v15 = (int)v14 <= a3;
  }
  if ( !v15 )
    return 2147483653LL;
  memmove(a4, v10, (unsigned int)v14);
  if ( (int)v14 < a3 )
    a4[v14] = 0;
  return 0LL;
}
