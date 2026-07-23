/*
 * XREFs of sub_14025E370 @ 0x14025E370
 * Callers:
 *     <none>
 * Callees:
 *     sub_140276AAC @ 0x140276AAC (sub_140276AAC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1407460A4 @ 0x1407460A4 (sub_1407460A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14025E370(_QWORD *P)
{
  __int64 v2; // rcx
  int v3; // eax
  _QWORD *v4; // rdi
  void *v5; // r14
  int v6; // ebx
  unsigned __int64 OldIrql; // rbx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v2 = P[1];
  v15 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = sub_1407460A4(v2, &v15);
  v4 = (_QWORD *)*P;
  v5 = (void *)P[1];
  v6 = v3;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( v6 >= 0 )
  {
    v8 = v4[28];
    if ( !v8 )
      v8 = v4[29];
    if ( !v8 )
      *((_OWORD *)v4 + 14) = v15;
  }
  sub_140276AAC(v4);
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
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag(P, 0x65546343u);
}
