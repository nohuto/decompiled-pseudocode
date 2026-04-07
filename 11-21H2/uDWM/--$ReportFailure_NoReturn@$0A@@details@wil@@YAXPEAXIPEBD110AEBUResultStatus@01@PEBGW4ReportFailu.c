/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800F0640
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800F05B4 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     _alloca_probe @ 0x180063680 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180094630 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x1800951C4 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180096290 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180096568 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180096698 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7)
{
  bool v10; // r13
  int v11; // ebx
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  char v15; // r12
  const struct wil::FailureInfo *v16; // rdx
  wil::details::in1diag3 *v17; // rcx
  const struct wil::FailureInfo *v18; // r9
  const struct wil::FailureInfo *v20; // rdx
  unsigned __int64 v21; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+28h] [rbp-D8h]
  int v23; // [rsp+2Ch] [rbp-D4h]
  int v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+64h] [rbp-9Ch]
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 ModuleName; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  char v39[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2072]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v10 = g_pfnThrowPlatformException != 0;
  OutputString[0] = 0;
  v39[0] = 0;
  v22 = *a7;
  v23 = a7[1];
  v11 = wil::details::RecordException((wil::details *)(unsigned int)v22);
  LODWORD(v21) = v12;
  v13 = v12;
  if ( *(_BYTE *)(v14 + 8) != (_BYTE)v12 )
    v13 = v12 + 8;
  HIDWORD(v21) = v13;
  v15 = v12 + 1;
  v24 = v12 + 1 + _InterlockedExchangeAdd(&`wil::details::LogFailure'::`2'::s_failureId, v12 + 1);
  v25 = v12;
  CurrentThreadId = GetCurrentThreadId();
  v29 = a3;
  v30 = a2;
  v31 = v11;
  v27 = 0LL;
  v28 = 0LL;
  v37 = a6;
  v38 = a1;
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v17);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v21, v39, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v21);
  if ( wil::details::g_pfnOriginateCallback && !v10 )
    wil::details::g_pfnOriginateCallback(&v21);
  if ( v22 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v17);
  if ( !wil::g_fIsDebuggerPresent
    && !(wil::g_pfnIsDebuggerPresent ? (unsigned __int8)wil::g_pfnIsDebuggerPresent(v17) : IsDebuggerPresent()) )
  {
    v15 = 0;
  }
  if ( v10 || v15 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v21, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (__int64)&v21, v18);
    if ( v15 )
      OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v21, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v17);
  if ( v10 )
    ((void (__fastcall *)(unsigned __int64 *, WCHAR *))g_pfnThrowPlatformException)(&v21, OutputString);
  wil::ThrowResultException((wil *)&v21, v16);
  wil::details::WilFailFast((wil::details *)&v21, v20);
}
