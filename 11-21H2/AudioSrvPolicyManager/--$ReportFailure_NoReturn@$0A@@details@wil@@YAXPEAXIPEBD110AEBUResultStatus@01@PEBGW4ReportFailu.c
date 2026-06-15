/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180013BC4
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180013994 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800056F4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180006498 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180007428 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180007738 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180007834 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _alloca_probe @ 0x1800443E0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7)
{
  bool v8; // r15
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rdx
  char v12; // r14
  const struct wil::FailureInfo *v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  const struct wil::FailureInfo *v15; // r9
  const struct wil::FailureInfo *v17; // rdx
  unsigned __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  const char *v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+64h] [rbp-9Ch]
  __int128 v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  char v36[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2064]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v8 = g_pfnThrowPlatformException != 0;
  OutputString[0] = 0;
  v36[0] = 0;
  v19 = *a7;
  v20 = a7[1];
  v9 = wil::details::RecordException((wil::details *)(unsigned int)v19);
  LODWORD(v18) = 0;
  v10 = 0;
  if ( *(_BYTE *)(v11 + 8) )
    v10 = 8;
  HIDWORD(v18) = v10;
  v12 = 1;
  v21 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v22 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v26 = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h";
  v27 = 4335;
  v28 = v9;
  v24 = 0LL;
  v25 = 0LL;
  v34 = a6;
  v35 = a1;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v14);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v18, v36, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v18);
  if ( wil::details::g_pfnOriginateCallback && !v8 )
    wil::details::g_pfnOriginateCallback(&v18);
  if ( v19 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v14);
  if ( !wil::g_fIsDebuggerPresent
    && !(wil::g_pfnIsDebuggerPresent ? (unsigned __int8)wil::g_pfnIsDebuggerPresent(v14) : IsDebuggerPresent()) )
  {
    v12 = 0;
  }
  if ( v8 || v12 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v18, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (__int64)&v18, v15);
    if ( v12 )
      OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v18, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v14);
  if ( v8 )
    ((void (__fastcall *)(unsigned __int64 *, WCHAR *))g_pfnThrowPlatformException)(&v18, OutputString);
  wil::ThrowResultException((wil *)&v18, v13);
  wil::details::WilFailFast((wil::details *)&v18, v17);
}
