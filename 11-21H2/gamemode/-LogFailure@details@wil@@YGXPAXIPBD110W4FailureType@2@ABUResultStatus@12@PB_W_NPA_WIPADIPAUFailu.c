/*
 * XREFs of ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017
 * Callers:
 *     ??$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100049AF (--$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YGHJ@Z @ 0x10002761 (-RecordException@details@wil@@YGHJ@Z.c)
 *     ?RecordReturn@details@wil@@YGHJ@Z @ 0x1000277A (-RecordReturn@details@wil@@YGHJ@Z.c)
 *     ?RecordLog@details@wil@@YGHJ@Z @ 0x10002793 (-RecordLog@details@wil@@YGHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YGHJ@Z @ 0x100027B0 (-RecordFailFast@details@wil@@YGHJ@Z.c)
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YG_NXZ @ 0x10002FD7 (-IsDebuggerPresent@details@wil@@YG_NXZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z @ 0x10004515 (--$ReportFailure_Hr@$01@details@wil@@YGXPAXIPBD110J@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

void __fastcall wil::details::LogFailure(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _WORD *a9,
        int a10,
        wil::details *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        wil *a15)
{
  int v15; // edi
  int v16; // eax
  int v17; // edi
  _WORD *v18; // eax
  int ModuleName; // eax
  void (__thiscall *v20)(_DWORD, wil *, _BYTE *, int); // edi
  wil::details::in1diag3 *v21; // [esp+0h] [ebp-28h]
  unsigned int v22; // [esp+4h] [ebp-24h]
  const struct wil::FailureInfo *v23; // [esp+8h] [ebp-20h]

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v15 = *(_DWORD *)a8;
  *((_DWORD *)a15 + 2) = *(_DWORD *)a8;
  *((_DWORD *)a15 + 3) = *(_DWORD *)(a8 + 4);
  switch ( a7 )
  {
    case 0:
      v16 = wil::details::RecordException((void *)v15);
      goto LABEL_10;
    case 1:
      v16 = wil::details::RecordReturn((void *)v15);
      goto LABEL_10;
    case 2:
      if ( v15 >= 0 )
      {
        v15 = -2147024228;
        wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, -2147024228);
        *((_DWORD *)a15 + 2) = -2147024228;
        *((_DWORD *)a15 + 3) = wil::details::HrToNtStatus(-2147024228);
      }
      v16 = wil::details::RecordLog((void *)v15);
      goto LABEL_10;
    case 3:
      v16 = wil::details::RecordFailFast((wil::details *)v15, (int)v21);
LABEL_10:
      v17 = v16;
      goto LABEL_13;
  }
  v17 = 0;
LABEL_13:
  *(_DWORD *)a15 = a7;
  *((_DWORD *)a15 + 1) = 0;
  if ( *(_BYTE *)(a8 + 8) )
    *((_DWORD *)a15 + 1) = 8;
  *((_DWORD *)a15 + 4) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v18 = a9;
  if ( !a9 || !*a9 )
    v18 = 0;
  *((_DWORD *)a15 + 5) = v18;
  *((_DWORD *)a15 + 6) = GetCurrentThreadId();
  *((_DWORD *)a15 + 9) = a3;
  *((_DWORD *)a15 + 10) = a2;
  *((_DWORD *)a15 + 7) = a5;
  *((_DWORD *)a15 + 8) = a4;
  *((_DWORD *)a15 + 20) = a6;
  *((_DWORD *)a15 + 11) = v17;
  *((_DWORD *)a15 + 21) = a1;
  ModuleName = 0;
  *((_DWORD *)a15 + 12) = 0;
  memset((char *)a15 + 52, 0, 0x18u);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(wil::details::g_pfnGetModuleName);
  v20 = (void (__thiscall *)(_DWORD, wil *, _BYTE *, int))wil::details::g_pfnGetContextAndNotifyFailure;
  *((_DWORD *)a15 + 19) = ModuleName;
  if ( v20 )
    v20(v20, a15, a13, 1024);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(wil::details::g_pfnLoggingCallback, a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(wil::details::g_pfnOriginateCallback, a15);
  if ( *((int *)a15 + 2) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v21);
    *((_DWORD *)a15 + 2) = -2147418113;
    *((_DWORD *)a15 + 3) = wil::details::HrToNtStatus(-2147418113);
  }
  if ( wil::details::IsDebuggerPresent() )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a15, lpOutputString, 2048);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(2048, lpOutputString, a15, (wchar_t *)v21, v22, v23);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, a15, 0, 0);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(wil::details::g_pfnDebugBreak);
  }
}
