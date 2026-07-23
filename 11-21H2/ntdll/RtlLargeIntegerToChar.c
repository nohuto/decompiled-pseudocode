/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800F8D70
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800F8CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 QuadPart; // rax
  int v11; // r8d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( Base )
  {
    case 0u:
      Base = 10;
      goto LABEL_12;
    case 2u:
      v7 = 1;
      goto LABEL_10;
    case 8u:
      v7 = 3;
LABEL_10:
      v8 = (1 << v7) - 1;
      goto LABEL_13;
  }
  if ( Base != 10 )
  {
    if ( Base != 16 )
      return -1073741811;
    v7 = 4;
    goto LABEL_10;
  }
LABEL_12:
  v7 = 0;
  v8 = 0;
LABEL_13:
  v9 = &v18;
  QuadPart = Value->QuadPart;
  if ( v7 )
  {
    do
    {
      v11 = QuadPart;
      QuadPart >>= v7;
      *--v9 = RtlpIntegerChars[v8 & v11];
    }
    while ( QuadPart );
  }
  else
  {
    v12 = Base;
    do
    {
      v13 = QuadPart;
      QuadPart /= v12;
      *(_QWORD *)&Base = v13 % v12;
      *--v9 = RtlpIntegerChars[(unsigned int)(v13 % v12)];
    }
    while ( QuadPart );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( OutputLength < 0 )
  {
    OutputLength = -OutputLength;
    v16 = (int)v15 <= OutputLength;
    if ( (int)v15 >= OutputLength )
      goto LABEL_22;
    v17 = (unsigned int)(OutputLength - v15);
    LOBYTE(Base) = 48;
    memset(String, Base, v17);
    OutputLength = v15;
    String += v17;
  }
  v16 = (int)v15 <= OutputLength;
LABEL_22:
  if ( !v16 )
    return -2147483643;
  memmove(String, v9, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    String[v15] = 0;
  return 0;
}
