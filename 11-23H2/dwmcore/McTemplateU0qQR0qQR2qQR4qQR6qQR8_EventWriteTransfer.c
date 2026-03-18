/*
 * XREFs of McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x18012E9E6
 * Callers:
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x1800490F0 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer()
{
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_ATTRIBUTION);
}
