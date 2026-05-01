/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180004480
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180004014 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailu.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x18000145C (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180001910 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180001BA8 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800025EC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002828 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180003E90 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180007C40 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  int v12; // ebx
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  bool v16; // zf
  const struct wil::FailureInfo *v17; // rdx
  unsigned __int64 IsDebuggerPresent; // rcx
  const struct wil::FailureInfo *v19; // r9
  wil::details *v20; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh]
  int v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+5Ch] [rbp-A4h]
  signed __int32 v25; // [rsp+60h] [rbp-A0h]
  _WORD *v26; // [rsp+68h] [rbp-98h]
  DWORD CurrentThreadId; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  unsigned int v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+94h] [rbp-6Ch]
  __int128 v33; // [rsp+98h] [rbp-68h]
  __int128 v34; // [rsp+A8h] [rbp-58h]
  __int128 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 ModuleName; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  _BYTE v40[1024]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR OutputString[2048]; // [rsp+4F0h] [rbp+3F0h] BYREF

  OutputString[0] = 0;
  v40[0] = 0;
  v12 = *(_DWORD *)a7;
  v23 = v12;
  v24 = *(_DWORD *)(a7 + 4);
  if ( v12 >= 0 )
  {
    v12 = -2147024228;
    LODWORD(v20) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v20);
    v23 = -2147024228;
    v24 = wil::details::HrToNtStatus((wil::details *)0x8007029CLL);
  }
  v13 = wil::details::RecordLog((wil::details *)(unsigned int)v12);
  v21 = 2;
  v15 = v14;
  if ( *(_BYTE *)(a7 + 8) != (_BYTE)v14 )
    v15 = 8;
  v22 = v15;
  v25 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v16 = *a8 == 0, v26 = a8, v16) )
    v26 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v30 = a3;
  v31 = a2;
  v32 = v13;
  v28 = a5;
  v29 = a4;
  v38 = a6;
  v39 = a1;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(IsDebuggerPresent);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v21);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v21, v40, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v21);
  if ( wil::details::g_pfnOriginateCallback && (v22 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v21);
  if ( v23 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)IsDebuggerPresent);
  if ( (wil::g_fIsDebuggerPresent
     || (!wil::g_pfnIsDebuggerPresent
       ? (IsDebuggerPresent = ::IsDebuggerPresent())
       : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(IsDebuggerPresent)),
         (_DWORD)IsDebuggerPresent))
    && (v22 & 2) == 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v21, OutputString, 2048LL, v19);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (wchar_t *)0x800, (__int64)&v21, v19);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v21, 0LL, 0LL, v19);
  }
  if ( ((v22 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(IsDebuggerPresent);
  if ( (v22 & 1) != 0 )
    wil::details::WilFailFast((wil::details *)&v21, v17);
}
