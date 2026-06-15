/*
 * XREFs of ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14001AAB0
 * Callers:
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x14001A9EC (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CreateSecurityDescriptor(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  __int64 v3; // rbx
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  WCHAR *v8; // rdi
  int v9; // ebx
  signed int LastError; // eax

  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v6 = v3 + 35;
  v7 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_10:
    AudCPTraceLoggingErrorHelper("CreateSecurityDescriptor", 0x5Bu, v9);
    return (unsigned int)v9;
  }
  v9 = StringCchPrintfW(v7, v6, (size_t *)L"D:(A;OICI;0x%08I32X;;;%ws)", 983071LL, a1);
  if ( v9 >= 0 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v8, 1u, a3, 0LL) )
    {
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  CoTaskMemFree(v8);
  if ( v9 < 0 )
    goto LABEL_10;
  return (unsigned int)v9;
}
