/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180004A7C
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180004A70 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180013E14 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180063680 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180094630 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180096698 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7,
        _WORD *a8)
{
  int v11; // r15d
  int v12; // ecx
  __int64 v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  const struct wil::FailureInfo *v15; // r9
  int IsDebuggerPresent; // eax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v22; // [rsp+30h] [rbp-D0h]
  _WORD *v23; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int128 v30; // [rsp+68h] [rbp-98h]
  __int128 v31; // [rsp+78h] [rbp-88h]
  __int128 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  char v37[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v37[0] = 0;
  v20 = *a7;
  v21 = a7[1];
  v11 = wil::details::RecordReturn((wil::details *)(unsigned int)v20, (int)a7);
  LODWORD(v19) = 1;
  v12 = 0;
  if ( *(_BYTE *)(v13 + 8) )
    v12 = 8;
  HIDWORD(v19) = v12;
  v22 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v18 = *a8 == 0, v23 = a8, v18) )
    v23 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v27 = a3;
  v28 = a2;
  v29 = v11;
  v25 = 0LL;
  v26 = 0LL;
  v35 = a6;
  v36 = a1;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v14);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v19, v37, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v19);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(&v19);
  if ( v20 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v14);
  if ( wil::g_fIsDebuggerPresent
    || (wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v14))
      : (IsDebuggerPresent = ::IsDebuggerPresent()),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v19, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v19, v15);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v19, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v17);
  }
}
