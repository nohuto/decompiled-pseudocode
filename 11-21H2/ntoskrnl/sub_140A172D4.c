/*
 * XREFs of sub_140A172D4 @ 0x140A172D4
 * Callers:
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A172D4(WCHAR *SourceString)
{
  WCHAR *v1; // rbx
  wchar_t *Buffer; // rdi
  unsigned __int16 v3; // ax
  int v4; // eax
  bool v5; // zf
  WCHAR v6; // dx
  WCHAR *v7; // rcx
  _WORD *v8; // rdx
  WCHAR v9; // cx
  __int64 result; // rax
  UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v11 = 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  if ( v11.Length < 2u || (Buffer = v11.Buffer, !*v11.Buffer) )
  {
    sub_1406E0C3C(1LL, (__int64)"AslpPathWildcardMakeLeaves");
    return 0LL;
  }
  v3 = v11.Length >> 1;
  if ( (unsigned __int16)(v11.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_9:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = -2;
      goto LABEL_17;
    }
    if ( !wcsncmp(Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = -3;
      goto LABEL_17;
    }
LABEL_15:
    v5 = wcsncmp(Buffer, L"\\\\", 2uLL) == 0;
    v4 = -3;
    if ( v5 )
      goto LABEL_17;
LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  if ( wcsnicmp(v11.Buffer, L"\\??\\UNC\\", 8uLL) )
    goto LABEL_9;
  v4 = -4;
LABEL_17:
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
LABEL_25:
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
          goto LABEL_25;
        }
      }
    }
  }
  result = (unsigned int)(v4 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
