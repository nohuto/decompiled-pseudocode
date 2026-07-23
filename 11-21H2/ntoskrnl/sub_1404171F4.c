/*
 * XREFs of sub_1404171F4 @ 0x1404171F4
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402127F0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

char __fastcall sub_1404171F4(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rbx
  _SLIST_ENTRY *v6; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 1;
  if ( (*(_DWORD *)(a2 + 152) & 0x20) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    v4 = *(_QWORD *)(a2 + 496);
    if ( v4 )
    {
      v6 = (_SLIST_ENTRY *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      Next = v6->Next;
      if ( *(&v6->Next->Next + 1) != v6 || (v8 = (_SLIST_ENTRY **)*((_QWORD *)&v6->Next + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = Next;
      *((_QWORD *)&Next->Next + 1) = v8;
      *((_QWORD *)&v6->Next + 1) = 0LL;
      v6->Next = 0LL;
      *(_QWORD *)(a2 + 496) = 0LL;
      *(_DWORD *)(a2 + 152) &= ~0x20u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      sub_1402766A0(v6);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 0;
    }
  }
  return v3;
}
