/*
 * XREFs of RtlIntegerToChar @ 0x14075ACF0
 * Callers:
 *     sub_14053F1A8 @ 0x14053F1A8 (sub_14053F1A8.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     sub_140837AD4 @ 0x140837AD4 (sub_140837AD4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  ULONG v11; // edx
  __int64 v12; // rax
  __int64 *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = Base;
  switch ( Base )
  {
    case 0u:
      v6 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v8 = 0;
      v9 = 0;
      goto LABEL_4;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return -1073741811;
  }
  v9 = (1 << v8) - 1;
LABEL_4:
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
    v13 = qword_140A37FE0;
    *v10 = *((_BYTE *)qword_140A37FE0 + v12);
  }
  while ( Value );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_9;
  OutputLength = -OutputLength;
  v16 = (int)v15 <= OutputLength;
  if ( (int)v15 < OutputLength )
  {
    v18 = (unsigned int)(OutputLength - v15);
    LOBYTE(v13) = 48;
    memset(String, (int)v13, v18);
    OutputLength = v15;
    String += v18;
LABEL_9:
    v16 = (int)v15 <= OutputLength;
  }
  if ( !v16 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    String[v15] = 0;
  return 0;
}
