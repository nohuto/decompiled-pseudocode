/*
 * XREFs of sub_140234678 @ 0x140234678
 * Callers:
 *     sub_1406ACB20 @ 0x1406ACB20 (sub_1406ACB20.c)
 *     sub_1406ACB40 @ 0x1406ACB40 (sub_1406ACB40.c)
 * Callees:
 *     sub_140234764 @ 0x140234764 (sub_140234764.c)
 *     sub_140234E1C @ 0x140234E1C (sub_140234E1C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406ACB64 @ 0x1406ACB64 (sub_1406ACB64.c)
 */

__int64 __fastcall sub_140234678(KSPIN_LOCK *a1, char a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int64 OldIrql; // rdi
  _QWORD *v7; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &LockHandle);
    *((_BYTE *)a1 + 72) = 1;
  }
  result = sub_140234764(a1);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v7 = (_QWORD *)result;
    **(_QWORD **)(result + 8) = 0LL;
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      *(_QWORD *)v8 = 0LL;
      if ( v8[16] == 2 )
      {
        v9 = *((_QWORD *)v8 + 1);
        if ( v7 )
          v7[1] = v9;
        else
          v5[1] = v9;
        if ( v5 == (_QWORD *)v8 )
          v5 = v7;
        result = sub_140234E1C(v8, a1);
      }
    }
    while ( v7 );
  }
  if ( a2 )
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
  if ( v5 )
    return sub_1406ACB64(v5);
  return result;
}
