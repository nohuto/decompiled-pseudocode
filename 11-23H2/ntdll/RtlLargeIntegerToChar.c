/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FA3C0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800FA310 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v7; // r9d
  int v8; // r10d
  char *v9; // r14
  unsigned __int64 QuadPart; // r8
  int v11; // eax
  unsigned __int64 v12; // r9
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v16; // rbx
  char v17; // [rsp+61h] [rbp-37h] BYREF

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
  v9 = &v17;
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
      *(_QWORD *)&Base = QuadPart % v12;
      QuadPart /= v12;
      *--v9 = RtlpIntegerChars[Base];
    }
    while ( QuadPart );
  }
  v14 = (unsigned int)(v13 + 97 - (_DWORD)v9);
  if ( OutputLength < 0 )
  {
    OutputLength = -OutputLength;
    v15 = (int)v14 <= OutputLength;
    if ( (int)v14 >= OutputLength )
      goto LABEL_22;
    v16 = (unsigned int)(OutputLength - v14);
    LOBYTE(Base) = 48;
    memset_thunk_772440563353939046(String, Base, v16);
    OutputLength = v14;
    String += v16;
  }
  v15 = (int)v14 <= OutputLength;
LABEL_22:
  if ( !v15 )
    return -2147483643;
  memmove(String, v9, (unsigned int)v14);
  if ( (int)v14 < OutputLength )
    String[v14] = 0;
  return 0;
}
