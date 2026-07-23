/*
 * XREFs of KeInsertQueue @ 0x1402624D0
 * Callers:
 *     sub_140459F80 @ 0x140459F80 (sub_140459F80.c)
 *     sub_140542FC4 @ 0x140542FC4 (sub_140542FC4.c)
 *     sub_1406F20E8 @ 0x1406F20E8 (sub_1406F20E8.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rbp
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // r14
  LONG SignalState; // r12d
  __int64 v10; // r9
  LONG v11; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v13; // r8

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 1);
  if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
  {
    LOBYTE(v13) = sub_14056B1E4(*((_QWORD *)CurrentPrcb + 1));
    sub_14062DA60(v7, Entry, v13);
  }
  sub_1402F3290(Queue);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || *(PRKQUEUE *)(v7 + 232) == Queue && *(_BYTE *)(v7 + 643) == 15
    || !(unsigned __int8)sub_1402F6A70(CurrentPrcb, Queue, Entry) )
  {
    v11 = Queue->Header.SignalState;
    Queue->Header.SignalState = v11 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
    if ( !v11 && p_WaitListHead->Flink != p_WaitListHead )
      sub_14035B550(CurrentPrcb, Queue);
  }
  else
  {
    Entry->Flink = 0LL;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  sub_1402B0820((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
