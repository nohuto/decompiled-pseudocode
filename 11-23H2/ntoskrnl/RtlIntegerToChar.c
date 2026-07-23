/*
 * XREFs of RtlIntegerToChar @ 0x1407CF460
 * Callers:
 *     CmLogMcUpdateStatus @ 0x140615D6C (CmLogMcUpdateStatus.c)
 *     RtlIntegerToUnicodeString @ 0x1407CF3D0 (RtlIntegerToUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x14080D038 (CmpInitializeRegistryNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __cdecl RtlIntegerToChar(ULONG Value, ULONG Base, LONG OutputLength, PSTR String)
{
  ULONG v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  ULONG v11; // r11d
  __int64 *v12; // rdx
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v17; // rbx
  char v18; // [rsp+41h] [rbp-27h] BYREF

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
    v12 = RtlpIntegerChars;
    *v10 = *((_BYTE *)RtlpIntegerChars + v11);
  }
  while ( Value );
  v14 = (unsigned int)(v13 + 65 - (_DWORD)v10);
  if ( OutputLength >= 0 )
    goto LABEL_9;
  OutputLength = -OutputLength;
  v15 = (int)v14 <= OutputLength;
  if ( (int)v14 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v14);
    LOBYTE(v12) = 48;
    memset(String, (int)v12, v17);
    OutputLength = v14;
    String += v17;
LABEL_9:
    v15 = (int)v14 <= OutputLength;
  }
  if ( !v15 )
    return -2147483643;
  memmove(String, v10, (unsigned int)v14);
  if ( (int)v14 < OutputLength )
    String[v14] = 0;
  return 0;
}
