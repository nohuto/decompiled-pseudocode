/*
 * XREFs of sub_1402390A4 @ 0x1402390A4
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     sub_1402392D8 @ 0x1402392D8 (sub_1402392D8.c)
 *     sub_140276AAC @ 0x140276AAC (sub_140276AAC.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402390A4(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // r14
  KSPIN_LOCK *v8; // r13
  __int64 *v9; // rbx
  unsigned __int64 OldIrql; // rdi
  __int64 v11; // rcx
  unsigned int *v12; // rdi
  unsigned int *v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+48h] [rbp-20h] BYREF
  int v36; // [rsp+B0h] [rbp+48h]
  unsigned __int16 v38; // [rsp+C8h] [rbp+60h] BYREF

  v36 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *a2 = 0;
  *(_QWORD *)&v35.OldIrql = 0LL;
  v38 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  LockHandle.LockQueue = 0LL;
  v35.LockQueue = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = (__int64 *)qword_140C49B30;
  if ( (__int64 *)qword_140C49B30 != &qword_140C49B30 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 704);
    do
    {
      v9 = v7 - 2;
      ++*((_DWORD *)v7 - 3);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = *((_QWORD *)CurrentPrcb + 4375);
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v26;
            if ( v27 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      v11 = v9[5];
      if ( v11 )
        sub_14042A5E0(v11, &v38);
      KeAcquireInStackQueuedSpinLock(v8, &v35);
      if ( !v9[5] )
        goto LABEL_13;
      v12 = (unsigned int *)(v9 + 8);
      v13 = (unsigned int *)(v9 + 14);
      if ( (unsigned __int64)v9[8] >= 0xFFFFFFFF )
      {
        ++dword_140D017F0;
        v38 = 0;
      }
      else
      {
        v14 = *v12;
        *v13 = *v12;
        if ( v38 )
        {
          v15 = 100 * v14;
          *v13 = v15;
          v16 = v15 / v38;
          goto LABEL_10;
        }
      }
      v16 = *((unsigned int *)v9 + 37);
LABEL_10:
      v9[11] = v16;
      v9[13] = v16;
      v9[12] = v16;
      *v13 = (unsigned int)(3 * v16) >> 2;
      v17 = sub_1402392D8(v36, a3, (int)v9 + 64, (int)v9 + 88, 1);
      v18 = *(_QWORD *)v12;
      v9[9] = *(_QWORD *)v12;
      if ( v17 > v18 >> 3 )
      {
        *a2 += v17;
        ++dword_140C4E85C;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)v9 + 36) = v17;
      *((_DWORD *)v9 + 20) = v17;
      if ( v9[4] )
      {
        v22 = v9[22];
        if ( v22 < *a4 )
          *a4 = v22;
      }
LABEL_13:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
      v19 = v35.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && v35.OldIrql <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = *((_QWORD *)v29 + 4375);
            v31 = ~(unsigned __int16)(-1LL << (v35.OldIrql + 1));
            v27 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
            *(_DWORD *)(v30 + 20) &= v31;
            if ( v27 )
              sub_140418E4C(v29);
          }
        }
      }
      __writecr8(v19);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v7 = (__int64 *)*v7;
      sub_140276AAC(v9);
    }
    while ( v7 != &qword_140C49B30 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  v21 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = *((_QWORD *)v32 + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = ((unsigned int)result & *(_DWORD *)(v33 + 20)) == 0;
        *(_DWORD *)(v33 + 20) &= result;
        if ( v27 )
          result = sub_140418E4C(v32);
      }
    }
  }
  __writecr8(v21);
  return result;
}
