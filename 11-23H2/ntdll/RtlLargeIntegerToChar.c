/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FA3C0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800FA310 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r9
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v16; // rbx
  char v17; // [rsp+61h] [rbp-37h] BYREF

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
  v9 = &v17;
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
      a2 = v10 % v12;
      v10 /= v12;
      *--v9 = RtlpIntegerChars[(unsigned int)a2];
    }
    while ( v10 );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v9);
  if ( a3 < 0 )
  {
    a3 = -a3;
    v15 = (int)v14 <= a3;
    if ( (int)v14 >= a3 )
      goto LABEL_22;
    v16 = (unsigned int)(a3 - v14);
    LOBYTE(a2) = 48;
    memset_thunk_772440563353939046(a4, a2, v16);
    a3 = v14;
    a4 += v16;
  }
  v15 = (int)v14 <= a3;
LABEL_22:
  if ( !v15 )
    return 2147483653LL;
  memmove(a4, v9, (unsigned int)v14);
  if ( (int)v14 < a3 )
    a4[v14] = 0;
  return 0LL;
}
