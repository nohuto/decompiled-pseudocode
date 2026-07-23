/*
 * XREFs of RtlIntegerToChar @ 0x180074090
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x180074000 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  ULONG v11; // edx
  __int64 v12; // rax
  const char *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = Base;
  if ( !Base )
  {
    v6 = 10;
    goto LABEL_17;
  }
  if ( Base != 16 )
  {
    if ( Base != 10 )
    {
      if ( Base == 2 )
      {
        v8 = 1;
      }
      else
      {
        if ( Base != 8 )
          return -1073741811;
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
  v10 = &v19;
  do
  {
    if ( v8 )
    {
      v11 = Value & v9;
      Value >>= v8;
    }
    else
    {
      v11 = Value % v6;
      Value /= v6;
    }
    --v10;
    v12 = v11;
    v13 = "0123456789ABCDEF";
    *v10 = RtlpIntegerChars[v12];
  }
  while ( Value );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_10;
  OutputLength = -OutputLength;
  v16 = (int)v15 <= OutputLength;
  if ( (int)v15 < OutputLength )
  {
    v18 = (unsigned int)(OutputLength - v15);
    LOBYTE(v13) = 48;
    memset(String, (int)v13, v18);
    OutputLength = v15;
    String += v18;
LABEL_10:
    v16 = (int)v15 <= OutputLength;
  }
  if ( !v16 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    String[v15] = 0;
  return 0;
}
