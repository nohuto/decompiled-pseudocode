/*
 * XREFs of HalSendSoftwareInterrupt @ 0x1402547F0
 * Callers:
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiSendSoftwareInterrupt @ 0x140318BD4 (KiSendSoftwareInterrupt.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalSendSoftwareInterrupt(int a1, char a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]

  v6 = a1;
  v5 = 6LL;
  v7 = 0LL;
  v2 = a2 == 1;
  v3 = 31LL;
  if ( !v2 )
    v3 = 47LL;
  return HalpInterruptSendIpi(&v5, v3);
}
