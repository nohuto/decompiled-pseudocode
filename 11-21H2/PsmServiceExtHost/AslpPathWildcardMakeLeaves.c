/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x1800A5B74
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rbx
  const wchar_t *Buffer; // rcx
  unsigned __int16 v3; // ax
  int v4; // eax
  bool v5; // zf
  WCHAR v6; // dx
  WCHAR *v7; // rcx
  _WORD *v8; // rdx
  WCHAR v9; // cx
  __int64 result; // rax
  struct _UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  if ( v11.Length < 2u || (Buffer = v11.Buffer, !*v11.Buffer) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v3 = v11.Length >> 1;
  if ( (unsigned __int16)(v11.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_18;
      goto LABEL_17;
    }
LABEL_10:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = -2;
      goto LABEL_19;
    }
    if ( !wcsncmp(v11.Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(v11.Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = -3;
      goto LABEL_19;
    }
    Buffer = v11.Buffer;
LABEL_17:
    v5 = wcsncmp(Buffer, L"\\\\", 2uLL) == 0;
    v4 = -3;
    if ( v5 )
      goto LABEL_19;
LABEL_18:
    v4 = 0;
    goto LABEL_19;
  }
  if ( _wcsnicmp(v11.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    Buffer = v11.Buffer;
    goto LABEL_10;
  }
  v4 = -4;
LABEL_19:
  v6 = *v1;
  v7 = v1;
  while ( v6 )
  {
    if ( v6 == 92 )
    {
      if ( v4 >= 0 )
        *v7 = 0;
      ++v4;
    }
    v6 = *++v7;
  }
  v7[1] = 0;
  if ( *v1 )
  {
    do
LABEL_27:
      ++v1;
    while ( *v1 );
    v8 = v1 + 1;
    v9 = v1[1];
    if ( v9 )
    {
      while ( v9 != 42 && v9 != 63 )
      {
        v9 = *++v8;
        if ( !*v8 )
        {
          *v1 = 92;
          --v4;
          goto LABEL_27;
        }
      }
    }
  }
  result = (unsigned int)(v4 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
