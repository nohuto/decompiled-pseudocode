/*
 * XREFs of ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18004D1A0
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 4) )
    return 0LL;
  result = a1 + 24;
  if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 28) && !*(_DWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 36) )
    return 0LL;
  return result;
}
