/*
 * XREFs of ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801D3E30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x1800FB708 (-OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ.c)
 */

__int64 __fastcall HotKeyProcessor::OnHotKeyAcknowledged(HotKeyProcessor *this)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1802404C8 > 5
    && (qword_1802404D8 & 0x20000) != 0
    && (qword_1802404E0 & 0x20000) == qword_1802404E0 )
  {
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1802404C8,
      (unsigned __int8 *)dword_180207C4C,
      0LL,
      0LL,
      2u,
      &v2);
  }
  WinKeyScenarioTelemetry::OnWinKeyAcknowledged();
  return 0LL;
}
