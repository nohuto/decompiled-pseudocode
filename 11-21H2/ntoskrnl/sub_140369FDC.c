/*
 * XREFs of sub_140369FDC @ 0x140369FDC
 * Callers:
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     PoClearPowerRequest @ 0x140369EA0 (PoClearPowerRequest.c)
 *     sub_140398DF0 @ 0x140398DF0 (sub_140398DF0.c)
 *     sub_1403B68E0 @ 0x1403B68E0 (sub_1403B68E0.c)
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

__int64 __fastcall sub_140369FDC(_DWORD *Object, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = (int)a2;
  v16 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    *((_QWORD *)&v16 + 1) = &v16;
    *(_QWORD *)&v16 = &v16;
  }
  v5 = (_QWORD *)((unsigned __int64)&v16 & -(__int64)(CurrentIrql < 2u));
  if ( a2 <= 5
    && (v6 = Object[5], _bittest(&v6, a2))
    && (a2 != 3 || *((_QWORD *)Object + 17) == *((_QWORD *)KeGetCurrentThread() + 23)) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C24278, &LockHandle);
    v7 = Object[v2 + 10];
    if ( v7 )
    {
      Object[v2 + 10] = v7 - 1;
      sub_14036A48C(Object);
      sub_14036A410(Object);
      v8 = 0;
    }
    else
    {
      v8 = -1073741637;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v8 >= 0 )
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
  return (unsigned int)v8;
}
