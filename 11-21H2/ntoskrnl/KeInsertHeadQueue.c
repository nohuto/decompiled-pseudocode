/*
 * XREFs of KeInsertHeadQueue @ 0x140570CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  __int64 v3; // r9
  PLIST_ENTRY v4; // rdi
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  LONG SignalState; // r12d
  LONG v13; // edx
  LIST_ENTRY *p_EntryListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx

  v4 = Entry;
  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    Entry = (PLIST_ENTRY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)Entry | *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 20) = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *((_QWORD *)CurrentPrcb + 1);
  if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
  {
    LOBYTE(v10) = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
    sub_14062DA60(v9, v4, v10);
  }
  sub_1402F3290(&Queue->Header.Lock, (__int64)Entry, v2, v3);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || *(PRKQUEUE *)(v9 + 232) == Queue && *(_BYTE *)(v9 + 643) == 15
    || !sub_1402F6A70((__int64)CurrentPrcb, (__int64)Queue, (__int64)v4, v11) )
  {
    v13 = Queue->Header.SignalState;
    Queue->Header.SignalState = v13 + 1;
    p_EntryListHead = &Queue->EntryListHead;
    Flink = Queue->EntryListHead.Flink;
    if ( Flink->Blink != &Queue->EntryListHead )
      __fastfail(3u);
    v4->Flink = Flink;
    v4->Blink = p_EntryListHead;
    Flink->Blink = v4;
    p_EntryListHead->Flink = v4;
    if ( !v13 && p_WaitListHead->Flink != p_WaitListHead )
      sub_14035B550((__int64)CurrentPrcb, (__int64)Queue);
  }
  else
  {
    v4->Flink = 0LL;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
