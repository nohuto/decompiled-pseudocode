/*
 * XREFs of KeFlushQueuedDpcs @ 0x14028F9C0
 * Callers:
 *     KeCleanupThreadState @ 0x1402EAB20 (KeCleanupThreadState.c)
 *     MmPageEntireDriver @ 0x140700F50 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14085EBD0 (IopDeleteDriver.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F8014 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140A008E8 (ExpPartitionDestroy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402572B0 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x1402573A0 (KeAddProcessorAffinityEx.c)
 *     KiGetDeepIdleProcessors @ 0x14028FB00 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x140305B34 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v1[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v2[34]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v3[68]; // [rsp+158h] [rbp+50h] BYREF

  LODWORD(v0) = 0;
  LODWORD(v2[0]) = 2097153;
  memset((char *)v2 + 4, 0, 0x104uLL);
  v3[0] = 2097153;
  memset(&v3[1], 0, 0x104uLL);
  KiGetDeepIdleProcessors(v2, v3);
  v1[1] = (unsigned __int16 *)v2[1];
  v1[0] = (unsigned __int16 *)v2;
  memset(&v1[2], 0, sizeof(unsigned __int16 *));
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v0] + 13244) )
      KeAddProcessorAffinityEx((unsigned __int16 *)v3, v0);
  }
  KeGenericProcessorCallback(v3, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
