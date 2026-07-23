/*
 * XREFs of sub_1402A1788 @ 0x1402A1788
 * Callers:
 *     sub_1402A0EF8 @ 0x1402A0EF8 (sub_1402A0EF8.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_1403DF48C @ 0x1403DF48C (sub_1403DF48C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF940 @ 0x1402DF940 (sub_1402DF940.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void *__fastcall sub_1402A1788(_QWORD *Object)
{
  void *v2; // rdi
  __int64 ThreadServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  void *v6; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( Object )
    v4 = Object[171];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 120);
    goto LABEL_5;
  }
  v5 = (__int64 *)qword_140C53480;
  if ( qword_140C53480 )
  {
LABEL_5:
    while ( v5 != &qword_140C53480 )
    {
      v6 = (void *)sub_1402DF940(v5 - 15);
      v2 = v6;
      if ( v6 )
      {
        if ( !ThreadServerSilo || v5[95] == ThreadServerSilo )
          break;
        ObfDereferenceObject(v6);
        v2 = 0LL;
      }
      v5 = (__int64 *)*v5;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( Object )
      ObfDereferenceObject(Object);
    return v2;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = *((_QWORD *)v11 + 4375);
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(v11);
        }
      }
    }
    __writecr8(v9);
    return 0LL;
  }
}
