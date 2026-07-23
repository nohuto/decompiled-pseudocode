/*
 * XREFs of sub_14021721C @ 0x14021721C
 * Callers:
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14021721C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
  v2 = *(_QWORD *)(a1 + 1368);
  if ( v2 )
  {
    v3 = (__int64 *)(a1 + 1184);
    if ( *(_QWORD *)(a1 + 1184) )
    {
      if ( (*(_BYTE *)(a1 + 1849) & 1) != 0 && !*(_QWORD *)(v2 + 616) )
        *(_QWORD *)(v2 + 616) = 1LL;
      v4 = (__int64 *)*v3;
      v5 = *(__int64 ***)(a1 + 1192);
      if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
LABEL_13:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 1984);
  v7 = *(_QWORD **)(a1 + 1992);
  if ( *(_QWORD *)(v6 + 8) != a1 + 1984 || *v7 != a1 + 1984 )
    goto LABEL_13;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
