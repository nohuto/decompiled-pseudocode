/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800063E8
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180006B34 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x1800018F0 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002828 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800060B4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  wil::details *v16; // rcx
  int v17; // ebp
  __int64 v18; // rdx
  signed __int32 v19; // ecx
  DWORD CurrentThreadId; // eax
  unsigned __int16 *v21; // rdx
  unsigned __int64 IsDebuggerPresent; // rcx
  const struct wil::FailureInfo *v23; // r9
  __int64 (*v24)(void); // rax
  __int64 v25; // rax

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v16 = (wil::details *)*a8;
  *(_DWORD *)(a15 + 8) = (_DWORD)v16;
  *(_DWORD *)(a15 + 12) = a8[1];
  v17 = wil::details::RecordReturn(v16);
  *(_QWORD *)a15 = 1LL;
  if ( *(_BYTE *)(v18 + 8) )
    *(_DWORD *)(a15 + 4) = 8;
  v19 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  *(_QWORD *)(a15 + 24) = 0LL;
  *(_DWORD *)(a15 + 16) = v19;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 64) = 14;
  *(_DWORD *)(a15 + 32) = CurrentThreadId;
  *(_QWORD *)(a15 + 56) = "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp";
  *(_QWORD *)(a15 + 136) = a6;
  v24 = (__int64 (*)(void))wil::details::g_pfnGetModuleName;
  *(_DWORD *)(a15 + 68) = v17;
  *(_QWORD *)(a15 + 40) = 0LL;
  *(_QWORD *)(a15 + 48) = 0LL;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( v24 )
    v25 = v24();
  else
    v25 = 0LL;
  *(_QWORD *)(a15 + 128) = v25;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(a15);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(a15, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *(int *)(a15 + 8) >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)IsDebuggerPresent);
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(IsDebuggerPresent)),
         (_DWORD)IsDebuggerPresent))
    && (*(_BYTE *)(a15 + 4) & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL, v23);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, v21, a15, v23);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(a15, 0LL, 0LL, v23);
  }
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(IsDebuggerPresent);
  }
}
