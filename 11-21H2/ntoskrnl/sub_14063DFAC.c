/*
 * XREFs of sub_14063DFAC @ 0x14063DFAC
 * Callers:
 *     sub_1402F0574 @ 0x1402F0574 (sub_1402F0574.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

__int64 __fastcall sub_14063DFAC(PKTIMER a1)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v5; // rdx
  __int64 result; // rax

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&Blink[75]);
    Flink = a1[3].TimerListEntry.Flink;
    if ( Flink->Blink != &a1[3].TimerListEntry || (v5 = a1[3].TimerListEntry.Blink, v5->Flink != &a1[3].TimerListEntry) )
      __fastfail(3u);
    v5->Flink = Flink;
    Flink->Blink = v5;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&Blink[75]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || KeRemoveQueueDpcEx((__int64)&a1[2].TimerListEntry, 0) )
    {
      v1 = 1;
    }
    if ( KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    KeCancelTimer(a1);
  }
  result = v1;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
