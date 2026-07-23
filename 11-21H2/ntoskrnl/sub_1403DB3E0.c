/*
 * XREFs of sub_1403DB3E0 @ 0x1403DB3E0
 * Callers:
 *     sub_1403DB2F0 @ 0x1403DB2F0 (sub_1403DB2F0.c)
 *     sub_1405DFE94 @ 0x1405DFE94 (sub_1405DFE94.c)
 * Callees:
 *     sub_140207880 @ 0x140207880 (sub_140207880.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403DB3E0(char a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&qword_140D31200, &LockHandle);
  v2 = 1000000 * (unsigned __int64)*(unsigned int *)(qword_140D088C0[0] + 68) / 0x3E8;
  qword_140D052A0 = v2 * (unsigned int)dword_140D052AC;
  qword_140D05418 = v2 * (unsigned int)dword_140D052B0;
  qword_140D05228 = v2 * (unsigned int)dword_140D05148;
  dword_140D05274 = dword_140D052B4;
  dword_140D06B90 = 10000 * (unsigned __int64)(unsigned int)dword_140D05148 / DesiredTime;
  result = sub_140207880(0, 1, 0LL);
  if ( !a1 )
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
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= result;
          if ( v7 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
