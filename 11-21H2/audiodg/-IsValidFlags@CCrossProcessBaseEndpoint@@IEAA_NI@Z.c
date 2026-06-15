/*
 * XREFs of ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8
 * Callers:
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140088DE4 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140089000 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140089270 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140089380 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140089EE0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14008A250 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x14008946C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidFlags(
        CCrossProcessBaseEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // bl

  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0p_EventWriteTransfer(this, a2, this, a4);
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 0xFFFFFFFE);
  v5 = 0;
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidFlags", 0x697u, -2147467259);
  return v5;
}
