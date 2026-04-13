/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800044F8
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180004808 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180003B6C (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003D40 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180003DD0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180004434 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180005C20 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  bool v12; // zf
  int v13; // ebx
  int v14; // ecx
  const struct wil::FailureInfo *v15; // rdx
  unsigned __int64 IsDebuggerPresent; // rcx
  const struct wil::FailureInfo *v17; // r9
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+24h] [rbp-DCh]
  int v20; // [rsp+28h] [rbp-D8h]
  int v21; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  const char *v27; // [rsp+58h] [rbp-A8h]
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
  v9 = a7[1];
  v20 = *a7;
  v21 = v9;
  v10 = wil::details::RecordReturn((wil::details *)(unsigned int)v20);
  v12 = *(_BYTE *)(v11 + 8) == 0;
  v13 = v10;
  v18 = 1;
  v14 = 0;
  if ( !v12 )
    v14 = 8;
  v19 = v14;
  v23 = 0LL;
  v22 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v28 = a2;
  CurrentThreadId = GetCurrentThreadId();
  v29 = v13;
  v27 = "onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp";
  v33 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v35 = a6;
  v36 = a1;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(IsDebuggerPresent);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v18);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v18, v37, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v18);
  if ( wil::details::g_pfnOriginateCallback && (v19 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v18);
  if ( v20 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)IsDebuggerPresent);
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(IsDebuggerPresent)),
         (_DWORD)IsDebuggerPresent))
    && (v19 & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v18, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (__int64)&v18, v17);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v18, 0LL, 0LL);
  }
  if ( ((v19 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(IsDebuggerPresent);
  if ( (v19 & 1) != 0 )
    wil::details::WilFailFast((wil::details *)&v18, v15);
}
