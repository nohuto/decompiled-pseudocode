/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000399C
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003C60 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18000314C (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003308 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18000339C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180004FD0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005060 (_guard_xfg_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v15; // rcx
  const struct wil::FailureInfo *v16; // r9
  __int64 IsDebuggerPresent; // rcx
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
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v36[0] = 0;
  v9 = a7[1];
  v19 = *a7;
  v20 = v9;
  v10 = wil::details::RecordReturn((wil::details *)(unsigned int)v19);
  v12 = *(_BYTE *)(v11 + 8) == 0;
  v13 = v10;
  LODWORD(v18) = 1;
  v14 = 0;
  if ( !v12 )
    v14 = 8;
  HIDWORD(v18) = v14;
  v22 = 0LL;
  v21 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v27 = a2;
  CurrentThreadId = GetCurrentThreadId();
  v28 = v13;
  v26 = "onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp";
  v32 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v34 = a6;
  v35 = a1;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v15);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v18, v36, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v18);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(&v18);
  if ( v19 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v15);
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v15)),
        (_DWORD)IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v18, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (__int64)&v18, v16);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v18, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(IsDebuggerPresent);
  }
}
