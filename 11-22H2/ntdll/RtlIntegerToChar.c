/*
 * XREFs of RtlIntegerToChar @ 0x18006F990
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x18006F900 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  ULONG v11; // r11d
  const char *v12; // rdx
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v17; // rbx
  char v18; // [rsp+41h] [rbp-27h] BYREF

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
  v10 = &v18;
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
    v12 = "0123456789ABCDEF";
    *v10 = RtlpIntegerChars[v11];
  }
  while ( Value );
  v14 = (unsigned int)(v13 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_10;
  OutputLength = -OutputLength;
  v15 = (int)v14 <= OutputLength;
  if ( (int)v14 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v14);
    LOBYTE(v12) = 48;
    memset_thunk_772440563353939046(String, (int)v12, v17);
    OutputLength = v14;
    String += v17;
LABEL_10:
    v15 = (int)v14 <= OutputLength;
  }
  if ( !v15 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v14);
  if ( (int)v14 < OutputLength )
    String[v14] = 0;
  return 0;
}
