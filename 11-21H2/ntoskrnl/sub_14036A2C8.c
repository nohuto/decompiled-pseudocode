/*
 * XREFs of sub_14036A2C8 @ 0x14036A2C8
 * Callers:
 *     sub_1403690D0 @ 0x1403690D0 (sub_1403690D0.c)
 *     PoSetPowerRequest @ 0x140369FB0 (PoSetPowerRequest.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407EF750 @ 0x1407EF750 (sub_1407EF750.c)
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036A410 @ 0x14036A410 (sub_14036A410.c)
 *     sub_14036A48C @ 0x14036A48C (sub_14036A48C.c)
 *     sub_14036A8F0 @ 0x14036A8F0 (sub_14036A8F0.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14036A2C8(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = (int)a2;
  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v14 + 1) = &v14;
    *(_QWORD *)&v14 = &v14;
  }
  v5 = (_QWORD *)((unsigned __int64)&v14 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && ((1 << a2) & Object[5]) != 0
    && (a2 != 3 || *((_QWORD *)Object + 17) == *((_QWORD *)KeGetCurrentThread() + 23)) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C24278, &LockHandle);
    if ( Object[v2 + 10] == -1 )
    {
      v6 = -1073741675;
    }
    else
    {
      Object[7] &= ~(1 << v2);
      ++Object[v2 + 10];
      sub_14036A48C(Object);
      sub_14036A410(Object);
      v6 = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
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
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        if ( (_QWORD *)*v5 != v5 )
          sub_14036A8F0(v5);
      }
      else
      {
        sub_14036AAC4(&unk_140C24440, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}
