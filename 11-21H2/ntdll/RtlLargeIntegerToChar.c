/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800F8D70
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800F8CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = 10;
      goto LABEL_12;
    case 2:
      v7 = 1;
      goto LABEL_10;
    case 8:
      v7 = 3;
LABEL_10:
      v8 = (1 << v7) - 1;
      goto LABEL_13;
  }
  if ( (_DWORD)a2 != 10 )
  {
    if ( (_DWORD)a2 != 16 )
      return 3221225485LL;
    v7 = 4;
    goto LABEL_10;
  }
LABEL_12:
  v7 = 0;
  v8 = 0;
LABEL_13:
  v9 = &v18;
  v10 = *a1;
  if ( v7 )
  {
    do
    {
      v11 = v10;
      v10 >>= v7;
      *--v9 = RtlpIntegerChars[v8 & v11];
    }
    while ( v10 );
  }
  else
  {
    v12 = (unsigned int)a2;
    do
    {
      v13 = v10;
      v10 /= v12;
      a2 = v13 % v12;
      *--v9 = RtlpIntegerChars[(unsigned int)(v13 % v12)];
    }
    while ( v10 );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( a3 < 0 )
  {
    a3 = -a3;
    v16 = (int)v15 <= a3;
    if ( (int)v15 >= a3 )
      goto LABEL_22;
    v17 = (unsigned int)(a3 - v15);
    LOBYTE(a2) = 48;
    memset(a4, a2, v17);
    a3 = v15;
    a4 += v17;
  }
  v16 = (int)v15 <= a3;
LABEL_22:
  if ( !v16 )
    return 2147483653LL;
  memmove(a4, v9, (unsigned int)v15);
  if ( (int)v15 < a3 )
    a4[v15] = 0;
  return 0LL;
}
