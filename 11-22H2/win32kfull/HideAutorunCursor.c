/*
 * XREFs of HideAutorunCursor @ 0x1C01A9030
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void HideAutorunCursor()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _BYTE v2[4]; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+34h] [rbp-14h]

  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  if ( gptiCurrent != gptiRit )
  {
    v3 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 931);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v2);
  zzzUpdateCursorImage();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v2, v0, v1);
}
