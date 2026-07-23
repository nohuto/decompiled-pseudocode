/*
 * XREFs of sub_14055712C @ 0x14055712C
 * Callers:
 *     sub_140556DE0 @ 0x140556DE0 (sub_140556DE0.c)
 *     sub_1405594BC @ 0x1405594BC (sub_1405594BC.c)
 *     sub_1405595B8 @ 0x1405595B8 (sub_1405595B8.c)
 *     sub_140601C50 @ 0x140601C50 (sub_140601C50.c)
 *     sub_140A7FDC0 @ 0x140A7FDC0 (sub_140A7FDC0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14055712C(int a1, char a2, char a3)
{
  int v6; // eax
  volatile __int32 *v7; // rcx
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C46FC8, &LockHandle);
  if ( a2 )
    v6 = a1 | dword_140D0110C;
  else
    v6 = dword_140D0110C & ~a1;
  dword_140D0110C = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&dword_140D06AD0, 1);
    _InterlockedExchange(&dword_140D06B10, 1);
    v7 = &dword_140D06C3C;
    _InterlockedExchange(&dword_140D06BA4, 1);
    v8 = 1;
  }
  else
  {
    _InterlockedExchange(&dword_140D06C3C, 0);
    v7 = &dword_140D06AD0;
    v9 = (dword_140D0110C & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&dword_140D06B10, v9);
    _InterlockedExchange(&dword_140D06BA4, v9);
    if ( (dword_140D0110C & 4) != 0 )
      v8 = 2;
    else
      v8 = 0;
  }
  result = (unsigned int)_InterlockedExchange(v7, v8);
  if ( !a3 )
  {
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
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= result;
          if ( v14 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
