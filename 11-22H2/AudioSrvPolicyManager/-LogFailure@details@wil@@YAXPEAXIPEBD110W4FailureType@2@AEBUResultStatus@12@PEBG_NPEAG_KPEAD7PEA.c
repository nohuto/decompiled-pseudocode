/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000D670
 * Callers:
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000D5B0 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180018554 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800185DC (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800242DC (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800105E0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180018460 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180019004 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180019AF8 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180019B20 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180019B34 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180019B54 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18001AAC4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 ModuleName; // rdi
  unsigned int v18; // r14d
  int v19; // r15d
  int v20; // eax
  int v21; // edx
  _WORD *v22; // rax
  int v23; // edx
  wil::details::in1diag3 *v24; // rcx
  const struct wil::FailureInfo *v25; // r9
  const WCHAR *v26; // rax
  wil::details *v27; // [rsp+30h] [rbp-48h]

  ModuleName = 0LL;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v18 = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 8) = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 12) = *(_DWORD *)(a8 + 4);
  v19 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v20 = wil::details::RecordReturn((wil::details *)v18, a2);
        break;
      case 2:
        if ( (v18 & 0x80000000) == 0 )
        {
          v18 = -2147024228;
          LODWORD(v27) = -2147024228;
          wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v27);
          *(_DWORD *)(a15 + 8) = -2147024228;
          *(_DWORD *)(a15 + 12) = wil::details::HrToNtStatus((wil::details *)0x8007029CLL, v21);
        }
        v20 = wil::details::RecordLog((wil::details *)v18, a2);
        break;
      case 3:
        v20 = wil::details::RecordFailFast((wil::details *)v18, a2);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v20 = wil::details::RecordException((wil::details *)v18, a2);
  }
  v19 = v20;
LABEL_12:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  if ( *(_BYTE *)(a8 + 8) )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v22 = a9;
  if ( !a9 || !*a9 )
    v22 = 0LL;
  *(_QWORD *)(a15 + 24) = v22;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = a2;
  *(_DWORD *)(a15 + 68) = v19;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  *(_QWORD *)(a15 + 128) = ModuleName;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(a15);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(a15, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v24);
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, v23);
  }
  if ( !wil::g_fIsDebuggerPresent )
  {
    if ( wil::g_pfnIsDebuggerPresent )
    {
      if ( !(unsigned __int8)wil::g_pfnIsDebuggerPresent() )
        goto LABEL_38;
    }
    else if ( !IsDebuggerPresent() )
    {
LABEL_38:
      if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
        g_pfnResultLoggingCallback(a15, 0LL, 0LL);
      goto LABEL_47;
    }
  }
  if ( (*(_BYTE *)(a15 + 4) & 2) != 0 )
    goto LABEL_38;
  if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
    g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
  v26 = (const WCHAR *)lpOutputString;
  if ( !*(_WORD *)lpOutputString )
  {
    wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v25);
    v26 = (const WCHAR *)lpOutputString;
  }
  OutputDebugStringW(v26);
LABEL_47:
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
