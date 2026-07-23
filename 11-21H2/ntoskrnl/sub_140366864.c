/*
 * XREFs of sub_140366864 @ 0x140366864
 * Callers:
 *     sub_140208F20 @ 0x140208F20 (sub_140208F20.c)
 *     IoRecordIoAttribution @ 0x140365D40 (IoRecordIoAttribution.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140366864(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v8; // r8d
  _QWORD *v9; // rsi
  KSPIN_LOCK v10; // rbp
  KSPIN_LOCK v11; // rdx
  KSPIN_LOCK v12; // r12
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  KSPIN_LOCK v15; // rcx
  KSPIN_LOCK v16; // rax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // edx
  bool v23; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 0;
  if ( (unsigned __int8)v5 == 3 )
  {
    v9 = a1 + 10;
LABEL_3:
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    v12 = 0LL;
    if ( (a3 & 2) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
      v5 = *(_DWORD *)(a2 + 4);
      v11 = 0LL;
      v8 = 1;
    }
    if ( (v5 & 0x100) != 0 )
    {
      v16 = a1[9];
      if ( !v16 || v10 < a1[8] )
        a1[8] = v10;
      a1[9] = v16 + 1;
      ++*v9;
    }
    else
    {
      if ( (a3 & 1) == 0 )
      {
        --a1[9];
        --*v9;
        v5 = *(_DWORD *)(a2 + 4);
      }
      if ( (v5 & 0x200) == 0 )
      {
        v13 = a1[6];
        v14 = *(_QWORD *)(a2 + 16);
        if ( v13 <= v14 )
          v13 = *(_QWORD *)(a2 + 16);
        if ( v10 >= v13 )
        {
          a1[6] = v10;
          v14 = *(_QWORD *)(a2 + 16);
          v11 = v10 - v13;
        }
        v10 = v14;
      }
      v15 = a1[7];
      if ( v15 <= a1[8] )
        v15 = a1[8];
      if ( v10 >= v15 )
      {
        a1[7] = v10;
        v12 = v10 - v15;
      }
      v9[1] += v12;
      if ( !_bittest((const signed __int32 *)(a2 + 4), 9u) )
      {
        v9[2] += v11;
        v9[3] += *(unsigned int *)(a2 + 8);
        v9[4] += (dword_140C097C0 + *(_DWORD *)(a2 + 8) - 1) / (unsigned int)dword_140C097C0;
      }
    }
    if ( v8 )
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
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v3;
  }
  if ( (unsigned __int8)v5 == 4 )
  {
    v9 = a1 + 15;
    goto LABEL_3;
  }
  if ( (a3 & 1) == 0 )
    return (unsigned int)-1073741637;
  v9 = a1 + 10;
  if ( a1[10] )
    goto LABEL_3;
  v9 = a1 + 15;
  if ( a1[15] )
    goto LABEL_3;
  return v3;
}
