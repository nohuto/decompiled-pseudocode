/*
 * XREFs of KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14023C6B0
 * Callers:
 *     <none>
 * Callees:
 *     KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x14023C750 (KiDpcRuntimeHistoryHashTableCleanupDpcRoutine.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

void KiDpcRuntimeHistoryHashTableCleanupTimerCallback()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+42h] [rbp-16h]
  __int16 v5; // [rsp+46h] [rbp-12h]
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = 0;
  v3 = 0;
  v6 = 0;
  v2[1] = qword_140D06E48[0];
  v2[0] = &KeActiveProcessors;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
  {
    Prcb = KeGetPrcb(v6);
    if ( (struct _KPRCB *)Prcb != CurrentPrcb )
      KiInsertQueueDpc(*(_QWORD *)(Prcb + 13080), 0);
  }
  KiDpcRuntimeHistoryHashTableCleanupDpcRoutine(0LL, 0LL, 0LL, 0LL);
}
