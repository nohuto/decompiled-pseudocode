/*
 * XREFs of sub_1402554D8 @ 0x1402554D8
 * Callers:
 *     sub_1403CBDF0 @ 0x1403CBDF0 (sub_1403CBDF0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402554D8(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r15
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  ULONG Processor; // r14d
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r11
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v6 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v7 = 1LL;
  if ( a2 )
  {
    v8 = *a2;
  }
  else
  {
    LOBYTE(v5) = 1;
    v8 = 20000000LL;
    Processor = 1000;
    v11 = sub_1402F5718(v5);
    if ( v11 >= v12 )
      goto LABEL_5;
    v13 = v12 - v11;
    if ( v13 <= 0x1312D00 )
      goto LABEL_5;
    v8 = v13;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v8, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v7;
  KeReleaseSpinLockFromDpcLevel(p_QuadPart);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
