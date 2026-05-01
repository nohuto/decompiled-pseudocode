/*
 * XREFs of ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1805CF200
 * Callers:
 *     ?StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1801D2C80 (-StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800C7D14 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 */

char *__fastcall CorrelationVector::ToString(TraceLoggingCorrelationVector **this, char (*a2)[129])
{
  TraceLoggingCorrelationVector::ToStringImpl(
    *this,
    _InterlockedExchangeAdd64((volatile signed __int64 *)*this + 17, 0LL),
    (char *)a2);
  return *a2;
}
