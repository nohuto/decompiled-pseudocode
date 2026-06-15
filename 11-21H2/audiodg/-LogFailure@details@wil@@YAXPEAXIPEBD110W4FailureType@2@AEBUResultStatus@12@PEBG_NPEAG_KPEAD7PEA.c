/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140026784
 * Callers:
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1400266C0 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x140026600 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x1400269B4 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x1400269D4 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14002C60C (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x14002E250 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x14004DC54 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x14004E73C (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14004F454 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _WORD *a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  unsigned int v17; // edi
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  _WORD *v21; // rax
  int v22; // edx
  wil::details::in1diag3 *v23; // rcx
  const struct wil::FailureInfo *v24; // r9
  __int64 ModuleName; // rax
  int IsDebuggerPresent; // eax
  __int64 v27; // rcx
  int v28; // edx
  wil::details *v29; // [rsp+30h] [rbp-48h]

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v17 = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 8) = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 12) = *(_DWORD *)(a8 + 4);
  v18 = 0;
  switch ( a7 )
  {
    case 0:
      v19 = wil::details::RecordException((wil::details *)v17, a2);
      goto LABEL_7;
    case 1:
      v19 = wil::details::RecordReturn((wil::details *)v17, a2);
LABEL_7:
      v18 = v19;
      break;
    case 2:
      if ( (v17 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        LODWORD(v29) = -2147024228;
        wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v29);
        *(_DWORD *)(a15 + 8) = -2147024228;
        *(_DWORD *)(a15 + 12) = wil::details::HrToNtStatus((wil::details *)0x8007029CLL, v28);
      }
      v19 = wil::details::RecordLog((wil::details *)v17, a2);
      goto LABEL_7;
    case 3:
      v19 = wil::details::RecordFailFast((wil::details *)v17, a2);
      goto LABEL_7;
  }
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  v20 = 0;
  if ( *(_BYTE *)(a8 + 8) )
    v20 = 8;
  *(_DWORD *)(a15 + 4) = v20;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 24) = v21;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = a2;
  *(_DWORD *)(a15 + 68) = v18;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v23);
  else
    ModuleName = 0LL;
  *(_QWORD *)(a15 + 128) = ModuleName;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(a15, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v23);
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, v22);
  }
  if ( wil::g_fIsDebuggerPresent
    || (wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v23))
      : (IsDebuggerPresent = ::IsDebuggerPresent()),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v24);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(a15, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v27);
  }
}
