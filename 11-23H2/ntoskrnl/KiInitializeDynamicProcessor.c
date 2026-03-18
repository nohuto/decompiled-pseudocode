/*
 * XREFs of KiInitializeDynamicProcessor @ 0x140A9F278
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14036BDB0 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x1408217A0 (KiStartDpcThread.c)
 */

char __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  int started; // eax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[1] = 0LL;
  v4[0] = a1;
  LOBYTE(started) = KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)v4);
  if ( KeThreadDpcEnable )
  {
    started = KiStartDpcThread(a1);
    if ( started < 0 )
      KeBugCheckEx(0x33u, started, 0LL, 0LL, 0LL);
  }
  return started;
}
