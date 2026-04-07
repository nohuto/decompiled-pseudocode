/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800999B4
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18009920C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800662E0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18009B904 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18009CC6C (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009E0C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009E1F8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
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
  bool v14; // zf
  const struct wil::FailureInfo *v15; // rdx
  wil::details::in1diag3 *v16; // rcx
  const struct wil::FailureInfo *v17; // r9
  int IsDebuggerPresent; // eax
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+24h] [rbp-DCh]
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v23; // [rsp+30h] [rbp-D0h]
  _WORD *v24; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  __int128 v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  char v38[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v38[0] = 0;
  v21 = *a7;
  v22 = a7[1];
  v11 = wil::details::RecordReturn((wil::details *)(unsigned int)v21, (int)a7);
  v19 = 1;
  v12 = 0;
  if ( *(_BYTE *)(v13 + 8) )
    v12 = 8;
  v20 = v12;
  v23 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v14 = *a8 == 0, v24 = a8, v14) )
    v24 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v28 = a3;
  v29 = a2;
  v30 = v11;
  v26 = 0LL;
  v27 = 0LL;
  v36 = a6;
  v37 = a1;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v16);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v19);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v19, v38, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v19);
  if ( wil::details::g_pfnOriginateCallback && (v20 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v19);
  if ( v21 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v16);
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v16)),
         IsDebuggerPresent))
    && (v20 & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v19, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v19, v17);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v19, 0LL, 0LL);
  }
  if ( ((v20 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v16);
  if ( (v20 & 1) != 0 )
    wil::details::WilFailFast((wil::details *)&v19, v15);
}
