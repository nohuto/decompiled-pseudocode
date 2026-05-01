/*
 * XREFs of ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptions@01@@Z @ 0x10006651 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptio.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YGHJ@Z @ 0x1000277A (-RecordReturn@details@wil@@YGHJ@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YG_NXZ @ 0x10002FD7 (-IsDebuggerPresent@details@wil@@YG_NXZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10005E30 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

void __thiscall wil::details::LogFailure(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        WCHAR *lpOutputString,
        int a11,
        _BYTE *a12,
        int a13,
        wil *a14)
{
  void *v15; // ecx
  int v16; // edx
  int ModuleName; // eax
  void (__thiscall *v18)(_DWORD, wil *, _BYTE *, int); // edi
  wil::details::in1diag3 *v19; // [esp+0h] [ebp-10h]
  unsigned int v20; // [esp+4h] [ebp-Ch]
  const struct wil::FailureInfo *v21; // [esp+8h] [ebp-8h]
  int v22; // [esp+Ch] [ebp-4h]

  *lpOutputString = 0;
  *a12 = 0;
  v15 = *(void **)a7;
  *((_DWORD *)a14 + 2) = *(_DWORD *)a7;
  *((_DWORD *)a14 + 3) = *(_DWORD *)(a7 + 4);
  v22 = wil::details::RecordReturn(v15);
  *(_DWORD *)a14 = 1;
  *((_DWORD *)a14 + 1) = 0;
  if ( *(_BYTE *)(v16 + 8) )
    *((_DWORD *)a14 + 1) = 8;
  *((_DWORD *)a14 + 4) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  *((_DWORD *)a14 + 5) = 0;
  *((_DWORD *)a14 + 6) = GetCurrentThreadId();
  *((_DWORD *)a14 + 11) = v22;
  *((_DWORD *)a14 + 21) = this;
  *((_DWORD *)a14 + 20) = a5;
  ModuleName = 0;
  *((_DWORD *)a14 + 9) = "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp";
  *((_DWORD *)a14 + 10) = 14;
  *((_DWORD *)a14 + 7) = 0;
  *((_DWORD *)a14 + 8) = 0;
  *((_DWORD *)a14 + 12) = 0;
  memset((char *)a14 + 52, 0, 0x18u);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(wil::details::g_pfnGetModuleName);
  v18 = (void (__thiscall *)(_DWORD, wil *, _BYTE *, int))wil::details::g_pfnGetContextAndNotifyFailure;
  *((_DWORD *)a14 + 19) = ModuleName;
  if ( v18 )
    v18(v18, a14, a12, 1024);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(wil::details::g_pfnLoggingCallback, a14);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(wil::details::g_pfnOriginateCallback, a14);
  if ( *((int *)a14 + 2) >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v19);
  if ( wil::details::IsDebuggerPresent() )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a14, lpOutputString, 2048);
    if ( !*lpOutputString )
      wil::GetFailureLogString(lpOutputString, lpOutputString, a14, (unsigned __int16 *)v19, v20, v21);
    OutputDebugStringW(lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a14, 0, 0);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(wil::details::g_pfnDebugBreak);
  }
}
