/*
 * XREFs of sub_140209B54 @ 0x140209B54
 * Callers:
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140209B54(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r8
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  v8 = dword_140D06884;
  *a2 = 0LL;
  if ( v8 )
  {
    v9 = (__int64 *)(a1 + 176);
    v10 = v8;
    do
    {
      v11 = *v9;
      v9 += 53;
      *a2 |= v11;
      --v10;
    }
    while ( v10 );
  }
  *a3 = dword_140D05148;
  v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v13 = (unsigned int)*a3;
  v14 = v12;
  v15 = 1000 * (v12.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v14;
  *a4 = v15 / PerformanceFrequency.QuadPart / v13;
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
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = ((unsigned int)result & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= result;
        if ( v20 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
