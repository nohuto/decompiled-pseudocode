/*
 * XREFs of sub_1402DF880 @ 0x1402DF880
 * Callers:
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_1403A0B60 @ 0x1403A0B60 (sub_1403A0B60.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406A8EEC @ 0x1406A8EEC (sub_1406A8EEC.c)
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_14077D624 @ 0x14077D624 (sub_14077D624.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_1407947BC @ 0x1407947BC (sub_1407947BC.c)
 *     sub_1407F4BB0 @ 0x1407F4BB0 (sub_1407F4BB0.c)
 *     sub_1409234E0 @ 0x1409234E0 (sub_1409234E0.c)
 *     sub_140947DA4 @ 0x140947DA4 (sub_140947DA4.c)
 *     sub_140947E30 @ 0x140947E30 (sub_140947E30.c)
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402DF940 @ 0x1402DF940 (sub_1402DF940.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402DF880(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 ThreadServerSilo; // rdi
  _QWORD *v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v4 = (_QWORD *)qword_140C50638;
  while ( v4 )
  {
    v5 = *((_DWORD *)v4 - 32);
    if ( a1 > v5 )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v5 )
      {
        if ( (!ThreadServerSilo || v4[93] == ThreadServerSilo) && v5 == a1 )
          v2 = sub_1402DF940(v4 - 17);
        break;
      }
      v4 = (_QWORD *)*v4;
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
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v2;
}
