/*
 * XREFs of sub_1403A4DCC @ 0x1403A4DCC
 * Callers:
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_1403B4E2C @ 0x1403B4E2C (sub_1403B4E2C.c)
 */

LONG_PTR __fastcall sub_1403A4DCC(PIRP Irp)
{
  _SLIST_ENTRY *v2; // rbx
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbp
  void *v5; // r14
  _SLIST_ENTRY *v6; // rdx
  _SLIST_ENTRY **v7; // rax
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (_SLIST_ENTRY *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = *((_QWORD *)&v2[12].Next + 1);
  Next = v2[2].Next;
  v5 = (void *)*((_QWORD *)&v2[1].Next + 1);
  KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
  v6 = v2->Next;
  if ( *(&v2->Next->Next + 1) != v2 || (v7 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1), *v7 != v2) )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)&v6->Next + 1) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 && *((_BYTE *)&v2[11].Next + 8) == 2 && *((_DWORD *)&v2[11].Next + 3) == 1 )
  {
    sub_1403B4E2C(v3);
  }
  else
  {
    sub_140203D88((__int64)&stru_140CF72C0, v2, v8);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(Next, 0x72496F50u);
  return ObfDereferenceObjectWithTag(v5, 0x72496F50u);
}
