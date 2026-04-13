/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800250D0
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18002490C (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180035504 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800398D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x18003FA50 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800474D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
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
  int v14; // edx
  __int64 v15; // rcx
  const struct wil::FailureInfo *v16; // r9
  int IsDebuggerPresent; // eax
  const struct wil::FailureInfo *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
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
  _BYTE v38[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2072]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v38[0] = 0;
  v21 = *(_DWORD *)a7;
  v22 = *(_DWORD *)(a7 + 4);
  v11 = wil::details::RecordFailFast((wil::details *)(unsigned int)v21, a2);
  LODWORD(v20) = 3;
  v12 = 0;
  if ( *(_BYTE *)(a7 + 8) )
    v12 = 8;
  HIDWORD(v20) = v12;
  v23 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v13 = *a8 == 0, v24 = a8, v13) )
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
    ModuleName = wil::details::g_pfnGetModuleName(v15);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v20, v38, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v20);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(&v20);
  if ( v21 >= 0 )
  {
    v21 = -2147418113;
    v22 = wil::details::HrToNtStatus((wil::details *)0x8000FFFFLL, v14);
  }
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v15)),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v20, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v20, v16);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v20, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v19);
  }
  wil::details::WilFailFast((wil::details *)&v20, v18);
}
