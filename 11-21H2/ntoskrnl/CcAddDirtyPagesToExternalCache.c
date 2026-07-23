/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14039EB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029E120 @ 0x14029E120 (sub_14029E120.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (__int64)qword_140D06C40;
  v6 = *((_QWORD *)qword_140D06C40 + 1);
  if ( a2 )
  {
    do
    {
      v7 = v3;
      if ( v3 > 0xFFFFFFFF )
        v7 = -1;
      v3 -= v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 704), &LockHandle);
      v8 = *(_QWORD *)(a1 + 8);
      if ( !v8 )
      {
        sub_140276758((_BYTE *)v6, v2, 0LL, 0);
        v8 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v7 + v8;
      sub_14029E120(0LL, 0LL, 0LL, v7, v6, v2);
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
    }
    while ( v3 );
  }
  return result;
}
