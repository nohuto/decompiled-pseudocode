/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x18009F8C0
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rdi
  const wchar_t *Buffer; // rcx
  unsigned __int16 v3; // ax
  int v4; // ebx
  WCHAR v5; // cx
  int v6; // ebx
  WCHAR *v7; // rax
  _WORD *v8; // rcx
  WCHAR v9; // ax
  __int64 result; // rax
  struct _UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  if ( v11.Length < 2u || (Buffer = v11.Buffer, !*v11.Buffer) )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpPathWildcardMakeLeaves",
      3042,
      (unsigned int)"AslpPathGetFormatInfo failed [%x]",
      -1073741582);
    return 0LL;
  }
  v3 = v11.Length >> 1;
  v4 = 4;
  if ( (unsigned __int16)(v11.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_9:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = 2;
      goto LABEL_18;
    }
    if ( !wcsncmp(v11.Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(v11.Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = 3;
      goto LABEL_18;
    }
    Buffer = v11.Buffer;
LABEL_16:
    v4 = 3;
    if ( !wcsncmp(Buffer, L"\\\\", 2uLL) )
      goto LABEL_18;
LABEL_17:
    v4 = 0;
    goto LABEL_18;
  }
  if ( _wcsnicmp(v11.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    Buffer = v11.Buffer;
    goto LABEL_9;
  }
LABEL_18:
  v5 = *v1;
  v6 = -v4;
  v7 = v1;
  while ( v5 )
  {
    if ( v5 == 92 )
    {
      if ( v6 >= 0 )
        *v7 = 0;
      ++v6;
    }
    v5 = *++v7;
  }
  v7[1] = 0;
  if ( *v1 )
  {
    do
LABEL_26:
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
          --v6;
          goto LABEL_26;
        }
      }
    }
  }
  result = (unsigned int)(v6 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
