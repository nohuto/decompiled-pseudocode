/*
 * XREFs of ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140095DD0
 * Callers:
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140095CEC (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140095ED0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140096140 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140096250 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140096ED0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x140097240 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x14009633C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidFlags(CCrossProcessBaseEndpoint *this, __int64 a2)
{
  char v3; // bl

  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0p_EventWriteTransfer(this, a2, this);
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 0xFFFFFFFE);
  v3 = 0;
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidFlags", 0x698u, -2147467259);
  return v3;
}
