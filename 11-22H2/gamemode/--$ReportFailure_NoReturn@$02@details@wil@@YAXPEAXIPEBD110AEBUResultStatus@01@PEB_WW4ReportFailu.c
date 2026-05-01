/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180004058
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x1800026B0 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x18000145C (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180001930 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180001BA8 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800025EC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180007C40 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // edi
  int v10; // ecx
  const struct wil::FailureInfo *v11; // rdx
  __int64 IsDebuggerPresent; // rcx
  const struct wil::FailureInfo *v13; // r9
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+24h] [rbp-DCh]
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  const char *v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+64h] [rbp-9Ch]
  __int128 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _BYTE v33[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2064]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v33[0] = 0;
  v16 = *(_DWORD *)a7;
  v17 = *(_DWORD *)(a7 + 4);
  v9 = wil::details::RecordFailFast((wil::details *)(unsigned int)v16);
  v14 = 3;
  v10 = 0;
  if ( *(_BYTE *)(a7 + 8) )
    v10 = 8;
  v15 = v10;
  v18 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v19 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v23 = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h";
  v24 = a2;
  v25 = v9;
  v21 = 0LL;
  v22 = 0LL;
  v31 = a6;
  v32 = a1;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(IsDebuggerPresent);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v14);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v14, v33, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v14);
  if ( wil::details::g_pfnOriginateCallback && (v15 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v14);
  if ( v16 >= 0 )
  {
    v16 = -2147418113;
    v17 = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL);
  }
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(IsDebuggerPresent)),
         (_DWORD)IsDebuggerPresent))
    && (v15 & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v14, OutputString, 2048LL, v13);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (wchar_t *)0x800, (__int64)&v14, v13);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v14, 0LL, 0LL, v13);
  }
  if ( (v15 & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(IsDebuggerPresent);
  }
  wil::details::WilFailFast((wil::details *)&v14, v11);
}
