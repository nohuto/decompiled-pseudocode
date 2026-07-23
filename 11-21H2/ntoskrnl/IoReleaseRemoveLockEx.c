/*
 * XREFs of IoReleaseRemoveLockEx @ 0x1402332A0
 * Callers:
 *     sub_140610A00 @ 0x140610A00 (sub_140610A00.c)
 *     sub_140A9E300 @ 0x140A9E300 (sub_140A9E300.c)
 *     sub_140A9E8F0 @ 0x140A9E8F0 (sub_140A9E8F0.c)
 *     sub_140A9E960 @ 0x140A9E960 (sub_140A9E960.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A91EAC @ 0x140A91EAC (sub_140A91EAC.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // r15
  LIST_ENTRY *p_WaitListHead; // rsi
  unsigned __int64 v7; // rbp
  struct _LIST_ENTRY *Flink; // rdi
  PVOID *p_Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  PVOID **v11; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    p_Flink = (PVOID *)&Flink->Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || p_Flink[1] != Tag )
        {
          Flink = (struct _LIST_ENTRY *)p_Flink;
          p_Flink = (PVOID *)*p_Flink;
        }
        else
        {
          v10 = (struct _LIST_ENTRY *)*p_Flink;
          v5 = 1;
          if ( p_Flink == (PVOID *)p_WaitListHead->Flink )
          {
            p_WaitListHead->Flink = v10;
            v11 = (PVOID **)&RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
          }
          else
          {
            Flink->Flink = v10;
            v11 = (PVOID **)Flink;
          }
          ExFreePoolWithTag(p_Flink, 0);
          p_Flink = *v11;
        }
      }
      while ( p_Flink );
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((dword_140C29FC0 & 0x800) == 0 || !(unsigned int)sub_140A91EAC((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
