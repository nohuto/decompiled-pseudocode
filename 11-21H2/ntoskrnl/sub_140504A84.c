/*
 * XREFs of sub_140504A84 @ 0x140504A84
 * Callers:
 *     sub_140511600 @ 0x140511600 (sub_140511600.c)
 *     sub_1405157F0 @ 0x1405157F0 (sub_1405157F0.c)
 *     sub_140515FD0 @ 0x140515FD0 (sub_140515FD0.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140504A84(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdx
  _QWORD **v4; // rbx
  char v5; // di
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD **v8; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf
  _QWORD *v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 120), &LockHandle);
  v3 = (_QWORD **)(v1 + 152);
  v4 = (_QWORD **)(v1 + 168);
  if ( !*(_BYTE *)(a1 + 434) )
    v4 = v3;
  v5 = 0;
  v6 = *v4;
  if ( *v4 != v4 )
  {
    v7 = (_QWORD *)(a1 + 160);
    while ( 1 )
    {
      v8 = (_QWORD **)*v6;
      if ( v6 == v7 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v8 == v4 )
        goto LABEL_7;
    }
    v16 = (_QWORD *)v6[1];
    if ( v8[1] != v6 || (_QWORD *)*v16 != v6 )
      __fastfail(3u);
    *v16 = v8;
    v5 = 1;
    v8[1] = v16;
  }
LABEL_7:
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
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v5;
}
