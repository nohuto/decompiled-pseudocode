/*
 * XREFs of sub_140376DF0 @ 0x140376DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140376DF0()
{
  _SLIST_ENTRY *v0; // rsi
  _SLIST_ENTRY *v1; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  _SLIST_ENTRY *Next; // rax
  unsigned int Alignment_low; // edi
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  v1 = (_SLIST_ENTRY *)sub_1402828F0(64, 0x1000uLL, 0x70526D4Du);
  v2 = v1;
  if ( v1 )
  {
    v1->Next = 0LL;
    v1[2].Next = (_SLIST_ENTRY *)((char *)v1 + 72);
    *((_QWORD *)&v1[2].Next + 1) = (char *)v1 + 4088;
    *((_DWORD *)&v1->Next + 2) = 2;
    v1[1].Next = v0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C52B80;
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&qword_140C52B80);
  v3 = ListEntry;
  if ( !dword_140C52B68 )
  {
LABEL_13:
    ListEntry = 0LL;
    goto LABEL_6;
  }
  if ( v2 )
  {
    ListEntry = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( ListEntry )
  {
    if ( ((__int64)ListEntry[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_27;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
      {
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        Next = v3[2].Next;
      }
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = (char *)Next - 8;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !sub_140347810(&stru_140CF5E08) )
      goto LABEL_27;
    Alignment_low = LOWORD(ListHead.Alignment);
    if ( LOWORD(ListHead.Alignment) < (unsigned int)dword_140CF5E28 )
    {
      ExpInterlockedPushEntrySList(&ListHead, v3);
      if ( !stru_140CF5E10.Header.SignalState && Alignment_low >= 8 )
        KeSetEvent(&stru_140CF5E10, 0, 0);
      v6 = 1;
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4EC70, 0x64u);
      v6 = 0;
    }
    sub_1402AD030(&stru_140CF5E08);
    if ( !v6 )
LABEL_27:
      ExFreePoolWithTag(v3, 0);
  }
}
