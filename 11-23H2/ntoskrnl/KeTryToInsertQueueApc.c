/*
 * XREFs of KeTryToInsertQueueApc @ 0x1405736F0
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x140468E86 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406039D0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KiInsertQueueApc @ 0x14030A3FC (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14030B598 (KiSignalThreadForApc.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  char v6; // si
  char v7; // r11

  v2 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v2) )
    return 0;
  ObGetCurrentIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
    return 0;
  if ( (*(_DWORD *)(v2 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v6 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    v6 = 1;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v7);
  }
  *(_QWORD *)(v2 + 64) = 0LL;
  return v6;
}
