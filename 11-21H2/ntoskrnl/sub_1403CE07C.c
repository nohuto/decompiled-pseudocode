/*
 * XREFs of sub_1403CE07C @ 0x1403CE07C
 * Callers:
 *     sub_1403CDDB0 @ 0x1403CDDB0 (sub_1403CDDB0.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_14051314C @ 0x14051314C (sub_14051314C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 */

__int64 __fastcall sub_1403CE07C(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // rdi
  unsigned int v10; // ecx
  __int64 i; // rax
  unsigned int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r11
  __int64 v27; // r9
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  result = 0LL;
  v4 = a3;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
  {
    v7 = 56LL;
    goto LABEL_3;
  }
  if ( a2 == 1 )
  {
    v7 = 72LL;
LABEL_3:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v8 = *(_QWORD *)(v6 + v7);
    if ( v8 )
    {
      v9 = *(__int64 **)(v6 + v7);
      v10 = *(_DWORD *)(v8 + 8) - *(_DWORD *)(v6 + v7 + 8);
      for ( i = *(_QWORD *)v8; i; i = *(_QWORD *)i )
      {
        v10 += *(_DWORD *)(i + 8);
        v9 = (__int64 *)i;
      }
      if ( v10 >= (unsigned int)v4 )
        goto LABEL_7;
    }
    else
    {
      v10 = 0;
      v9 = 0LL;
    }
    v19 = sub_140512EF0(v6, (unsigned int)v4 - v10);
    if ( !v19 )
    {
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
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = 0LL;
      goto LABEL_17;
    }
    if ( v9 )
    {
      *v9 = v19;
    }
    else
    {
      v8 = v19;
      if ( a2 )
        *(_QWORD *)(v6 + 48) = v19;
      else
        *(_QWORD *)(v6 + 40) = v19;
    }
LABEL_7:
    v12 = *(_DWORD *)(v6 + v7 + 8);
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( (_DWORD)v4 )
    {
      v16 = *(_DWORD *)(v8 + 8);
      do
      {
        if ( v12 >= v16 )
        {
          v8 = *(_QWORD *)v8;
          v12 = 0;
          v16 = *(_DWORD *)(v8 + 8);
        }
        v17 = *(_QWORD *)(v8 + 16);
        v15 = v17 + 72LL * v12;
        if ( v13 )
          *(_QWORD *)(v14 + 8) = v15;
        else
          v13 = v17 + 72LL * v12;
        memset((void *)(v17 + 72LL * v12++), 0, 0x48uLL);
        *(_QWORD *)(v15 + 56) = v15;
        v14 = v15;
        --v4;
      }
      while ( v4 );
      v6 = a1;
    }
    *(_QWORD *)(v6 + v7) = v8;
    *(_DWORD *)(v6 + v7 + 8) = v12;
    *(_QWORD *)(v15 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v24 )
            sub_140418E4C(v26);
        }
      }
    }
    result = v13;
LABEL_17:
    __writecr8(OldIrql);
  }
  return result;
}
