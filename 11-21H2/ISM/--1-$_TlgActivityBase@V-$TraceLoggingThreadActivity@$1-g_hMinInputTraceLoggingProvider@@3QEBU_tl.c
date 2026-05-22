/*
 * XREFs of ??1?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@IEAA@XZ @ 0x1800D1AC4
 * Callers:
 *     ??1?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@QEAA@XZ @ 0x1800D1AB8 (--1-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800D19B0 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>(
        __int64 a1)
{
  ULONG result; // eax

  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 4) )
      EventActivityIdControl(4u, (LPGUID)(a1 + 24));
    *(_DWORD *)a1 = 2;
    result = _tlgWriteActivityAutoStop<0,5>(&dword_180240410, (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return result;
}
