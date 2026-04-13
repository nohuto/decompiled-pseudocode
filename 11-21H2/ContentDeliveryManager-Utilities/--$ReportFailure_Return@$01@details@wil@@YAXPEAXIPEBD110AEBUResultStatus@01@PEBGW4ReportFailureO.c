/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800259F0
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800248C4 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024EC0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800324D8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180035504 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800398D0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x18003FFA8 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8)
{
  int v12; // ebx
  int v13; // edx
  int v14; // ebx
  _WORD *v15; // r8
  int v16; // ecx
  bool v17; // zf
  wil::details::in1diag3 *v18; // rcx
  const struct wil::FailureInfo *v19; // r9
  int IsDebuggerPresent; // eax
  __int64 v21; // rcx
  wil::details *v22; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+4Ch] [rbp-B4h]
  signed __int32 v26; // [rsp+50h] [rbp-B0h]
  _WORD *v27; // [rsp+58h] [rbp-A8h]
  DWORD CurrentThreadId; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+84h] [rbp-7Ch]
  __int128 v34; // [rsp+88h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 ModuleName; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  _BYTE v41[1024]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR OutputString[2048]; // [rsp+4E0h] [rbp+3E0h] BYREF

  OutputString[0] = 0;
  v41[0] = 0;
  v12 = *(_DWORD *)a7;
  v24 = v12;
  v25 = *(_DWORD *)(a7 + 4);
  if ( v12 >= 0 )
  {
    v12 = -2147024228;
    LODWORD(v22) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v22);
    v24 = -2147024228;
    v25 = wil::details::HrToNtStatus((wil::details *)0x8007029CLL, v13);
  }
  v14 = wil::details::RecordLog((wil::details *)(unsigned int)v12, a2);
  LODWORD(v23) = 2;
  v16 = (int)v15;
  if ( *(_BYTE *)(a7 + 8) != (_BYTE)v15 )
    v16 = 8;
  HIDWORD(v23) = v16;
  v26 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v17 = *a8 == (unsigned __int16)v15, v27 = a8, v17) )
    v27 = v15;
  CurrentThreadId = GetCurrentThreadId();
  v31 = a3;
  v32 = a2;
  v33 = v14;
  v29 = a5;
  v30 = a4;
  v39 = a6;
  v40 = a1;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v18);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v23, v41, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v23);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(&v23);
  if ( v24 >= 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v18);
  if ( wil::g_fIsDebuggerPresent
    || (!wil::g_pfnIsDebuggerPresent
      ? (IsDebuggerPresent = ::IsDebuggerPresent())
      : (IsDebuggerPresent = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v18)),
        IsDebuggerPresent) )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v23, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v23, v19);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(&v23, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(v21);
  }
}
