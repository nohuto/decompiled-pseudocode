/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1801325B8
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180132580 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18012FA34 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x180131FF0 (-IsDebuggerPresent@details@wil@@YA_NXZ.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180132114 (-RecordException@details@wil@@YAHJ@Z.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18038FAA8 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18038FEB8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _WORD *a8)
{
  bool v11; // di
  int v12; // r12d
  int v13; // ecx
  __int64 v14; // rdx
  bool v15; // zf
  wil::details *v16; // rcx
  const struct wil::FailureInfo *v17; // rdx
  __int64 v18; // rcx
  const struct wil::FailureInfo *v19; // r9
  char v20; // bl
  const struct wil::FailureInfo *v21; // rdx
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+24h] [rbp-DCh]
  int v24; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v26; // [rsp+30h] [rbp-D0h]
  _WORD *v27; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+64h] [rbp-9Ch]
  __int128 v34; // [rsp+68h] [rbp-98h]
  __int128 v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  char v41[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2072]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v11 = g_pfnThrowPlatformException != 0;
  OutputString[0] = 0;
  v41[0] = 0;
  v24 = *a7;
  v25 = a7[1];
  v12 = wil::details::RecordException((wil::details *)(unsigned int)v24);
  v22 = 0;
  v13 = 0;
  if ( *(_BYTE *)(v14 + 8) )
    v13 = 8;
  v23 = v13;
  v26 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v15 = *a8 == 0, v27 = a8, v15) )
    v27 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v31 = a3;
  v32 = a2;
  v33 = v12;
  v29 = 0LL;
  v30 = 0LL;
  v39 = a6;
  v40 = a1;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v16);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v22);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v22, v41, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v22);
  if ( wil::details::g_pfnOriginateCallback && !v11 && (v23 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v22);
  if ( v24 < 0 )
  {
    if ( !wil::details::IsDebuggerPresent(v16) || (v20 = 1, (v23 & 2) != 0) )
      v20 = 0;
    if ( v11 || v20 )
    {
      if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
        g_pfnResultLoggingCallback(&v22, OutputString, 2048LL, v19);
      if ( !OutputString[0] )
        wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (__int64)&v22, v19);
      if ( v20 )
        OutputDebugStringW(OutputString);
    }
    else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
    {
      g_pfnResultLoggingCallback(&v22, 0LL, 0LL, v19);
    }
    if ( ((v23 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v18);
    if ( (v23 & 1) == 0 )
    {
      if ( v11 )
        ((void (__fastcall *)(int *, WCHAR *))g_pfnThrowPlatformException)(&v22, OutputString);
      wil::ThrowResultException((wil *)&v22, v17);
      wil::details::WilFailFast((wil::details *)&v22, v21);
    }
    wil::details::WilFailFast((wil::details *)&v22, v17);
  }
  wil::details::in1diag3::FailFastImmediate_Unexpected(v16);
}
