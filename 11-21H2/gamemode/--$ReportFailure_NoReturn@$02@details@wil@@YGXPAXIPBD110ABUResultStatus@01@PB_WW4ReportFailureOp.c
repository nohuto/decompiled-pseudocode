/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004671
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100032FA (--$ReportFailure_Base@$02$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?RecordFailFast@details@wil@@YGHJ@Z @ 0x100027B0 (-RecordFailFast@details@wil@@YGHJ@Z.c)
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YG_NXZ @ 0x10002FD7 (-IsDebuggerPresent@details@wil@@YG_NXZ.c)
 *     ?WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z @ 0x1000326D (-WilFailFast@details@wil@@YGXABUFailureInfo@2@@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     __chkstk @ 0x10007440 (__chkstk.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // [esp+0h] [ebp-1480h]
  wchar_t *v13; // [esp+0h] [ebp-1480h]
  const struct wil::FailureInfo *v14; // [esp+4h] [ebp-147Ch]
  const struct wil::FailureInfo *v15; // [esp+8h] [ebp-1478h]
  int v16; // [esp+10h] [ebp-1470h] BYREF
  int v17; // [esp+14h] [ebp-146Ch]
  int v18; // [esp+18h] [ebp-1468h]
  int v19; // [esp+1Ch] [ebp-1464h]
  signed __int32 v20; // [esp+20h] [ebp-1460h]
  int v21; // [esp+24h] [ebp-145Ch]
  DWORD CurrentThreadId; // [esp+28h] [ebp-1458h]
  int v23; // [esp+2Ch] [ebp-1454h]
  int v24; // [esp+30h] [ebp-1450h]
  const char *v25; // [esp+34h] [ebp-144Ch]
  int v26; // [esp+38h] [ebp-1448h]
  int v27; // [esp+3Ch] [ebp-1444h]
  int v28; // [esp+40h] [ebp-1440h]
  int v29; // [esp+44h] [ebp-143Ch]
  int v30; // [esp+48h] [ebp-1438h]
  int v31; // [esp+4Ch] [ebp-1434h]
  int v32; // [esp+50h] [ebp-1430h]
  int v33; // [esp+54h] [ebp-142Ch]
  int v34; // [esp+58h] [ebp-1428h]
  int ModuleName; // [esp+5Ch] [ebp-1424h]
  int v36; // [esp+60h] [ebp-1420h]
  int v37; // [esp+64h] [ebp-141Ch]
  int v38; // [esp+68h] [ebp-1418h]
  int v39; // [esp+6Ch] [ebp-1414h]
  WCHAR OutputString[2048]; // [esp+70h] [ebp-1410h] BYREF
  char v41[1028]; // [esp+1070h] [ebp-410h] BYREF
  int v42; // [esp+147Ch] [ebp-4h]

  v38 = a6;
  v42 = 0;
  OutputString[0] = 0;
  v41[0] = 0;
  v9 = *(_DWORD *)(a7 + 4);
  v18 = *(_DWORD *)a7;
  v19 = v9;
  v10 = wil::details::RecordFailFast((wil::details *)v18, v12);
  v17 = 0;
  v11 = *(_BYTE *)(a7 + 8) == 0;
  v39 = v10;
  v16 = 3;
  if ( !v11 )
    v17 = 8;
  v21 = 0;
  v20 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  CurrentThreadId = GetCurrentThreadId();
  v27 = v39;
  v26 = a2;
  v36 = v38;
  v25 = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h";
  v23 = 0;
  v24 = 0;
  v37 = a1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(wil::details::g_pfnGetModuleName);
  else
    ModuleName = 0;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(wil::details::g_pfnGetContextAndNotifyFailure, &v16, v41, 1024);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(wil::details::g_pfnLoggingCallback, &v16);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(wil::details::g_pfnOriginateCallback, &v16);
  if ( v18 >= 0 )
  {
    v18 = -2147418113;
    v19 = wil::details::HrToNtStatus(-2147418113);
  }
  if ( wil::details::IsDebuggerPresent() )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, &v16, OutputString, 2048);
    if ( !OutputString[0] )
      wil::GetFailureLogString(2048, (wil::details *)OutputString, (wil *)&v16, v13, (unsigned int)v14, v15);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, &v16, 0, 0);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(wil::details::g_pfnDebugBreak);
  }
  v42 = -1;
  wil::details::WilFailFast(&v16, (wil::details *)v13, v14);
}
