/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x18005C480
 * Callers:
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x18005F2C0 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x180125F44 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     StringCchCopyW @ 0x1800E9710 (StringCchCopyW.c)
 *     StringCchPrintfW @ 0x1800E9784 (StringCchPrintfW.c)
 */

__int64 __fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  const WCHAR *v4; // r8
  int UniqueProcess; // r9d
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-828h]
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  *(_QWORD *)&a3->Length = 0LL;
  a3->Buffer = 0LL;
  v4 = *(const WCHAR **)(a1 + 136);
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 == 1 )
  {
    if ( RtlCreateUnicodeString(a3, v4) )
      return 0LL;
    else
      return 8LL;
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
    {
      LODWORD(result) = StringCchCopyW(pszDest, 0x400uLL, v4);
    }
    else
    {
      v7 = UniqueProcess;
      LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", v4, v7);
    }
    if ( (int)result >= 0 )
      return RtlCreateUnicodeString(a3, pszDest) == 0 ? 8 : 0;
    else
      return (unsigned __int16)result;
  }
}
