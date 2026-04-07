/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800996CC
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180099260 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180058590 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     _alloca_probe @ 0x1800662E0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18009B904 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18009BF74 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009E0C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  int v11; // r12d
  int v12; // ecx
  bool v13; // zf
  const struct wil::FailureInfo *v14; // rdx
  __int64 v15; // rcx
  const struct wil::FailureInfo *v16; // r9
  int IsDebuggerPresent; // eax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+24h] [rbp-DCh]
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
  _BYTE v37[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2072]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v37[0] = 0;
  v20 = *(_DWORD *)a7;
  v21 = *(_DWORD *)(a7 + 4);
  v11 = wil::details::RecordFailFast((wil::details *)(unsigned int)v20);
  v18 = 3;
  v12 = 0;
  if ( *(_BYTE *)(a7 + 8) )
    v12 = 8;
  v19 = v12;
  v22 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v13 = *a8 == 0, v23 = a8, v13) )
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
    ModuleName = wil::details::g_pfnGetModuleName(v15);
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
  {
    v20 = -2147418113;
    v21 = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, (int)v14);
  }
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v15)),
         IsDebuggerPresent))
    && (v19 & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v18, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v18, v16);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v18, 0LL, 0LL);
  }
  if ( (v19 & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v15);
  }
  wil::details::WilFailFast((wil::details *)&v18, v14);
}
