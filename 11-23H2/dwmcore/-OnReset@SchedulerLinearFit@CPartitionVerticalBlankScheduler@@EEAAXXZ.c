/*
 * XREFs of ?OnReset@SchedulerLinearFit@CPartitionVerticalBlankScheduler@@EEAAXXZ @ 0x1800E7D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::SchedulerLinearFit::OnReset(
        CPartitionVerticalBlankScheduler::SchedulerLinearFit *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_RESET);
}
