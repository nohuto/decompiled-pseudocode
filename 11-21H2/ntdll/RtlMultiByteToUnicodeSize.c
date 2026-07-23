/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x18000DEF0
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x18000C320 (RtlxOemStringToUnicodeSize.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x18000DEC0 (RtlxAnsiStringToUnicodeSize.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  const CHAR *v3; // rdx
  _DWORD *v4; // rcx
  ULONG UTF8StringByteCount; // r8d
  ULONG *v6; // r10
  int v7; // ecx
  __int64 v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(BytesInUnicodeString) )
  {
    if ( UTF8StringByteCount )
      RtlUTF8ToUnicodeN(0LL, 0, v6, v3, UTF8StringByteCount);
    else
      *v4 = 0;
  }
  else
  {
    _InterlockedOr(v10, 0);
    v7 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount )
      {
        v8 = *(unsigned __int8 *)v3;
        --UTF8StringByteCount;
        ++v3;
        if ( *(_WORD *)(qword_1801776E0 + 2 * v8) )
        {
          if ( !UTF8StringByteCount )
          {
            v7 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++v3;
        }
        v7 += 2;
      }
    }
    else
    {
      v7 = 2 * UTF8StringByteCount;
    }
    *v6 = v7;
  }
  return 0;
}
