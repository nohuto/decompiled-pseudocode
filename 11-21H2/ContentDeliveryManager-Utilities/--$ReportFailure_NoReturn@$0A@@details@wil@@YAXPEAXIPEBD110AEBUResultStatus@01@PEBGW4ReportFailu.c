/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180025380
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180024944 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800324D8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180035504 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x18003FA28 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800464B0 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800474D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
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
  _WORD *v12; // r8
  int v13; // r13d
  int v14; // ecx
  __int64 v15; // rdx
  char v16; // bl
  bool v17; // zf
  const struct wil::FailureInfo *v18; // rdx
  wil::details::in1diag3 *v19; // rcx
  const struct wil::FailureInfo *v20; // r9
  const struct wil::FailureInfo *v22; // rdx
  unsigned __int64 v23; // [rsp+20h] [rbp-E0h] BYREF
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
  v13 = wil::details::RecordException((wil::details *)(unsigned int)v24, (int)a7);
  LODWORD(v23) = (_DWORD)v12;
  v14 = (int)v12;
  if ( *(_BYTE *)(v15 + 8) != (_BYTE)v12 )
    v14 = (_DWORD)v12 + 8;
  HIDWORD(v23) = v14;
  v16 = (_BYTE)v12 + 1;
  v26 = (_DWORD)v12 + 1 + _InterlockedExchangeAdd(&`wil::details::LogFailure'::`2'::s_failureId, (_DWORD)v12 + 1);
  if ( !a8 || (v17 = *a8 == (unsigned __int16)v12, v27 = a8, v17) )
    v27 = v12;
  CurrentThreadId = GetCurrentThreadId();
  v31 = a3;
  v32 = a2;
  v33 = v13;
  v29 = 0LL;
  v30 = 0LL;
  v39 = a6;
  v40 = a1;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v19);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v23, v41, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v23);
  if ( wil::details::g_pfnOriginateCallback && !v11 )
    wil::details::g_pfnOriginateCallback(&v23);
  if ( v24 >= 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v19);
  if ( !wil::g_fIsDebuggerPresent
    && !(wil::g_pfnIsDebuggerPresent ? (unsigned __int8)wil::g_pfnIsDebuggerPresent(v19) : IsDebuggerPresent()) )
  {
    v16 = 0;
  }
  if ( v11 || v16 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v23, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v23, v20);
    if ( v16 )
      OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v23, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v19);
  if ( v11 )
    ((void (__fastcall *)(unsigned __int64 *, WCHAR *))g_pfnThrowPlatformException)(&v23, OutputString);
  wil::ThrowResultException((wil *)&v23, v18);
  wil::details::WilFailFast((wil::details *)&v23, v22);
}
