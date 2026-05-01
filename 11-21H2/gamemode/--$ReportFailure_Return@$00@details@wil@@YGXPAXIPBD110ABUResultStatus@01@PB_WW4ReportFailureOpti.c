/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100048D9 (--$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z @ 0x1000238B (-GetFailureLogString@wil@@YGJPA_WIABUFailureInfo@1@@Z.c)
 *     ?RecordReturn@details@wil@@YGHJ@Z @ 0x1000277A (-RecordReturn@details@wil@@YGHJ@Z.c)
 *     ?IsDebuggerPresent@details@wil@@YG_NXZ @ 0x10002FD7 (-IsDebuggerPresent@details@wil@@YG_NXZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     __chkstk @ 0x10007440 (__chkstk.c)
 */

void __fastcall wil::details::ReportFailure_Return<1>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // eax
  int v12; // edx
  bool v13; // zf
  wil::details::in1diag3 *v14; // [esp+0h] [ebp-1480h]
  unsigned int v15; // [esp+4h] [ebp-147Ch]
  const struct wil::FailureInfo *v16; // [esp+8h] [ebp-1478h]
  int v17; // [esp+10h] [ebp-1470h] BYREF
  int v18; // [esp+14h] [ebp-146Ch]
  void *v19; // [esp+18h] [ebp-1468h]
  int v20; // [esp+1Ch] [ebp-1464h]
  signed __int32 v21; // [esp+20h] [ebp-1460h]
  int v22; // [esp+24h] [ebp-145Ch]
  DWORD CurrentThreadId; // [esp+28h] [ebp-1458h]
  int v24; // [esp+2Ch] [ebp-1454h]
  int v25; // [esp+30h] [ebp-1450h]
  int v26; // [esp+34h] [ebp-144Ch]
  int v27; // [esp+38h] [ebp-1448h]
  int v28; // [esp+3Ch] [ebp-1444h]
  int v29; // [esp+40h] [ebp-1440h]
  int v30; // [esp+44h] [ebp-143Ch]
  int v31; // [esp+48h] [ebp-1438h]
  int v32; // [esp+4Ch] [ebp-1434h]
  int v33; // [esp+50h] [ebp-1430h]
  int v34; // [esp+54h] [ebp-142Ch]
  int v35; // [esp+58h] [ebp-1428h]
  int ModuleName; // [esp+5Ch] [ebp-1424h]
  int v37; // [esp+60h] [ebp-1420h]
  int v38; // [esp+64h] [ebp-141Ch]
  int v39; // [esp+68h] [ebp-1418h]
  int v40; // [esp+6Ch] [ebp-1414h]
  WCHAR OutputString[2048]; // [esp+70h] [ebp-1410h] BYREF
  _BYTE v42[1024]; // [esp+1070h] [ebp-410h] BYREF
  int v43; // [esp+147Ch] [ebp-4h]

  v39 = a6;
  v43 = 0;
  OutputString[0] = 0;
  v42[0] = 0;
  v11 = *(_DWORD *)(a7 + 4);
  v19 = *(void **)a7;
  v20 = v11;
  v18 = 0;
  v40 = wil::details::RecordReturn(v19);
  v13 = *(_BYTE *)(v12 + 8) == 0;
  v17 = 1;
  if ( !v13 )
    v18 = 8;
  v22 = 0;
  v21 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  CurrentThreadId = GetCurrentThreadId();
  v28 = v40;
  v26 = a3;
  v37 = v39;
  v38 = a1;
  v27 = a2;
  v24 = 0;
  v25 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(wil::details::g_pfnGetModuleName);
  else
    ModuleName = 0;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(wil::details::g_pfnGetContextAndNotifyFailure, &v17, v42, 1024);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(wil::details::g_pfnLoggingCallback, &v17);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(wil::details::g_pfnOriginateCallback, &v17);
  if ( (int)v19 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v14);
  if ( wil::details::IsDebuggerPresent() )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, &v17, OutputString, 2048);
    if ( !OutputString[0] )
      wil::GetFailureLogString(2048, (wil::details *)OutputString, (wil *)&v17, (wchar_t *)v14, v15, v16);
    OutputDebugStringW(OutputString);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(g_pfnResultLoggingCallback, &v17, 0, 0);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak(wil::details::g_pfnDebugBreak);
  }
}
