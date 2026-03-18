/*
 * XREFs of McTemplateU0qqqqq_EventWriteTransfer @ 0x18012E59C
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180048C6C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0qqqqq_EventWriteTransfer()
{
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Stop);
}
