/*
 * XREFs of sub_14026E218 @ 0x14026E218
 * Callers:
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 * Callees:
 *     sub_14025A408 @ 0x14025A408 (sub_14025A408.c)
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14026E218(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned int v4; // eax
  ULONG_PTR v5; // rsi
  __int64 *v8; // rdi
  __int64 *v9; // r12
  ULONG_PTR v10; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  bool i; // zf
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  BugCheckParameter4 = a3;
  v4 = 0;
  v5 = BugCheckParameter3 >> 21;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = 0LL;
  if ( a3 == 1 )
    return sub_14025A408(BugCheckParameter2, v5);
  if ( a3 == 5 )
  {
    if ( !word_140D05000 )
LABEL_36:
      KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
    v13 = (_QWORD *)(qword_140C506E0 + 104);
    while ( BugCheckParameter2 < *(v13 - 1) || BugCheckParameter2 >= *v13 )
    {
      ++v4;
      v13 += 15;
      if ( v4 >= (unsigned __int16)word_140D05000 )
        goto LABEL_36;
    }
    v8 = (__int64 *)(qword_140C506E0 + 120LL * v4);
  }
  else
  {
    v8 = sub_14026CF08(a3);
  }
  v9 = v8;
  v10 = (BugCheckParameter2 - v8[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    v9 = (__int64 *)&v23;
    v19 = v8[2];
    *((_QWORD *)&v23 + 1) = v8[1];
    *(_QWORD *)&v23 = v19;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8 + 8, &LockHandle);
  if ( v10 >= *v9 )
    goto LABEL_43;
  if ( v5 > 1 )
  {
    if ( *v9 - v10 >= v5 )
    {
      v14 = v9[1];
      v15 = (__int64 *)(v14 + 8 * (v10 >> 6));
      v16 = *v15;
      v17 = (__int64 *)(v14 + 8 * ((v10 + v5 - 1) >> 6));
      if ( v15 == v17 )
      {
        v18 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10;
      }
      else
      {
        for ( i = ((-1LL << v10) & v16) == -1LL << v10; ; i = *v15 == -1 )
        {
          if ( !i )
            goto LABEL_43;
          if ( ++v15 == v17 )
            break;
        }
        v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1)) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1);
      }
      if ( v18 )
        goto LABEL_10;
    }
LABEL_43:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v5 != 1 || !_bittest64((const signed __int64 *)v9[1], v10) )
    goto LABEL_43;
LABEL_10:
  RtlClearBitsEx(v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < v8[6] )
      v8[6] = v10;
  }
  else if ( v10 < v8[3] )
  {
    v8[3] = v10;
  }
  _InterlockedExchangeAdd64(&qword_140C53EC8[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140C51888 += BugCheckParameter3;
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
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
