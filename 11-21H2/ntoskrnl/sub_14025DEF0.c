/*
 * XREFs of sub_14025DEF0 @ 0x14025DEF0
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14025DEF0(unsigned int a1)
{
  int v2; // eax
  int v3; // edx
  bool v4; // di
  __int64 ThreadServerSilo; // rbp
  _QWORD *v6; // rcx
  unsigned int v7; // edx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  v3 = 0;
  if ( v2 != -1 )
    v3 = v2;
  if ( v3 == a1 )
    return 1;
  v4 = 0;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v6 = (_QWORD *)qword_140C50638;
  while ( v6 )
  {
    v7 = *((_DWORD *)v6 - 32);
    if ( a1 > v7 )
    {
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      if ( a1 >= v7 )
      {
        if ( v6[93] == ThreadServerSilo && v7 == a1 && (*((_DWORD *)v6 - 33) & 2) == 0 )
          v4 = *(v6 - 15) != (_QWORD)(v6 - 15);
        break;
      }
      v6 = (_QWORD *)*v6;
    }
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
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
