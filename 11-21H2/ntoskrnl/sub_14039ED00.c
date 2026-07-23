/*
 * XREFs of sub_14039ED00 @ 0x14039ED00
 * Callers:
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402392D8 @ 0x1402392D8 (sub_1402392D8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14039ED00(int a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = (_QWORD *)(a2 + 992);
  v4 = (__int64 *)(a3 + 1248);
  if ( byte_140C54C58 != 1 )
    v4 = &qword_140C49BF0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a2 + 704);
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C49C00);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a2 + 704));
  v8 = sub_1402392D8(a2, a1, (__int64)v3, (unsigned __int64 *)(a2 + 1016), 0);
  if ( v8 == 0xFFFFFFFFLL )
  {
    LODWORD(v9) = 100;
  }
  else if ( *v3 )
  {
    v9 = 100 * (unsigned __int64)v8 / *v3;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v9 )
  {
    for ( i = (__int64 *)*v4; i != v4; i = (__int64 *)*i )
    {
      v12 = *(i - 3);
      if ( v12 )
        sub_14042A5E0(i - 4, v12 * (unsigned __int64)(unsigned int)v9 / 0x64);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C49C00);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
