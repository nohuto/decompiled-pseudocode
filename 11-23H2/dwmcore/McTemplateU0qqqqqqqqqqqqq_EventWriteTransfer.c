/*
 * XREFs of McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x18012E2B6
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18004953C (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer()
{
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &ENDFRAME_DRAWLIST_BATCH_STATS);
}
