/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x18000AC28
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     EtwpFlushUmLogger @ 0x180090EE4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     StringCchCopyW @ 0x1800E94DC (StringCchCopyW.c)
 *     StringCchPrintfW @ 0x1800E9550 (StringCchPrintfW.c)
 */

__int64 __fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  const wchar_t *v4; // r8
  int UniqueProcess; // r9d
  wchar_t *v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-828h]
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  *(_QWORD *)&a3->Length = 0LL;
  a3->Buffer = 0LL;
  v4 = *(const wchar_t **)(a1 + 136);
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 == 1 )
  {
    v6 = (wchar_t *)v4;
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
    {
      LODWORD(result) = StringCchCopyW(pszDest, 0x400uLL, v4);
    }
    else
    {
      v8 = UniqueProcess;
      LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", v4, v8);
    }
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v6 = pszDest;
  }
  if ( RtlCreateUnicodeString(a3, v6) )
    return 0LL;
  else
    return 8LL;
}
