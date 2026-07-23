/*
 * XREFs of sub_140252CF0 @ 0x140252CF0
 * Callers:
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 * Callees:
 *     sub_140252E8C @ 0x140252E8C (sub_140252E8C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406DAB4C @ 0x1406DAB4C (sub_1406DAB4C.c)
 */

__int64 __fastcall sub_140252CF0(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // bp
  unsigned __int64 OldIrql; // rsi
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C16628, &LockHandle);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  if ( v6 )
  {
    sub_140252E8C(*(_QWORD *)(a1 + 72));
    v6 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = 1;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v6 )
    return (unsigned int)sub_1406DAB4C(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  v10 = *a2;
  v11 = *(_DWORD **)(v6 + 24);
  if ( *a2 > *(_DWORD *)(*(_QWORD *)(v6 + 184) + 8LL) )
  {
    v11[12] = v10;
    *v11 = 56;
    v10 = 56;
    v11[11] = 32;
  }
  else
  {
    memmove(v11, a2, v10);
    v8 = 0;
  }
  *(_QWORD *)(v6 + 56) = v10;
  *(_DWORD *)(v6 + 48) = 0;
  IofCompleteRequest((PIRP)v6, 0);
  if ( v8 )
    return (unsigned int)sub_1406DAB4C(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  return v7;
}
