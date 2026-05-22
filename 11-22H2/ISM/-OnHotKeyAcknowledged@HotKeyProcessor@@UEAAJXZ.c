/*
 * XREFs of ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801FEAD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x180125778 (-OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ.c)
 */

__int64 __fastcall HotKeyProcessor::OnHotKeyAcknowledged(HotKeyProcessor *this)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180275508 > 5
    && (qword_180275518 & 0x20000) != 0
    && (qword_180275520 & 0x20000) == qword_180275520 )
  {
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180275508,
      (unsigned __int8 *)dword_180238BE1,
      0LL,
      0LL,
      2u,
      &v2);
  }
  WinKeyScenarioTelemetry::OnWinKeyAcknowledged();
  return 0LL;
}
