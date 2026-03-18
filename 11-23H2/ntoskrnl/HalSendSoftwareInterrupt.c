/*
 * XREFs of HalSendSoftwareInterrupt @ 0x140254730
 * Callers:
 *     KiFlushSoftwareInterruptBatch @ 0x140252760 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessThreadWaitList @ 0x140253DC0 (KiProcessThreadWaitList.c)
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     KiSendSoftwareInterrupt @ 0x140318944 (KiSendSoftwareInterrupt.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254D50 (HalpInterruptSendIpi.c)
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
