/*
 * XREFs of EtwpRequestFlushTimer @ 0x140227BD0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x1403B5B00 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x1406BDE48 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  ULONG v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( (*(_DWORD *)(a1 + 824) & 0x400) == 0 )
  {
    if ( a2 || ObGetCurrentIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 9u) )
        KiInsertQueueDpc(a1 + 568, 0);
      return 1;
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 0xAu) )
    {
      v3 = *(_DWORD *)(a1 + 208);
      if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
        v3 *= 1000;
      v4 = 500;
      v5 = EtwpOneMs * v3;
      v6 = v3 >> 2;
      if ( v6 < 0x1F4 )
        v4 = v6;
      KeSetCoalescableTimer((PKTIMER)(a1 + 504), (LARGE_INTEGER)v5, 0, v4, 0LL);
      return 1;
    }
  }
  return 0;
}
