/*
 * XREFs of sub_1402C4BF0 @ 0x1402C4BF0
 * Callers:
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 * Callees:
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402C4BF0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  bool v4; // zf
  __int64 v6; // rsi
  __int64 v7; // r15
  KIRQL v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r11
  __int64 v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  __int64 v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  __int64 v34; // r8
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-59h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-41h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-29h] BYREF
  KIRQL v39; // [rsp+100h] [rbp+67h]

  v2 = *(_QWORD *)(a1 + 232);
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a2 = 0;
  v4 = *(_DWORD *)(v2 + 136) == 0;
  v6 = *(_QWORD *)(v2 + 72);
  Object[0] = (PVOID)(v6 + 104);
  if ( v4 )
  {
    if ( !*(_BYTE *)(a1 + 300) )
    {
      *(_BYTE *)(a1 + 300) = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      v4 = (*(_DWORD *)(v2 + 152))-- == 1;
      if ( v4 )
        *(_DWORD *)(v2 + 136) = 1;
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
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v4 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 144) + 40LL * *(unsigned int *)(a1 + 264);
    Object[1] = (PVOID)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 4) & 2) != 0 )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
        if ( (*(_BYTE *)(v7 + 4) & 4) != 0 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v11 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
              {
                v27 = KeGetCurrentPrcb();
                v31 = *((_QWORD *)v27 + 4375);
                v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v4 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
                *(_DWORD *)(v31 + 20) &= v32;
                if ( v4 )
                  goto LABEL_56;
              }
            }
          }
          goto LABEL_17;
        }
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 )
          break;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        v39 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
            {
              v18 = KeGetCurrentPrcb();
              v19 = *((_QWORD *)v18 + 4375);
              v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v4 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
              *(_DWORD *)(v19 + 20) &= v20;
              if ( v4 )
              {
                sub_140418E4C(v18);
                v9 = v39;
              }
            }
          }
        }
        __writecr8(v9);
        *a2 = 1;
        if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
          goto LABEL_37;
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 )
          goto LABEL_3;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v11 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = *((_QWORD *)v27 + 4375);
            v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v29;
            if ( v4 )
LABEL_56:
              sub_140418E4C(v27);
          }
        }
      }
LABEL_17:
      __writecr8(v11);
    }
LABEL_3:
    if ( *((_DWORD *)Object[0] + 1) )
    {
LABEL_37:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      *(_BYTE *)(v7 + 4) |= 0x10u;
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v21 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = *((_QWORD *)v23 + 4375);
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v4 )
LABEL_63:
              sub_140418E4C(v23);
          }
        }
      }
LABEL_64:
      __writecr8(v21);
      return 0LL;
    }
    while ( *(_DWORD *)(v6 + 16100) || dword_140C53440 )
    {
      if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&Timeout) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
        *(_BYTE *)(v7 + 4) |= 0x10u;
        KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v21 = LockHandle.OldIrql;
        if ( !dword_140D06B08 )
          goto LABEL_64;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_64;
        v33 = KeGetCurrentIrql();
        if ( v33 > 0xFu )
          goto LABEL_64;
        if ( LockHandle.OldIrql > 0xFu )
          goto LABEL_64;
        if ( v33 < 2u )
          goto LABEL_64;
        v23 = KeGetCurrentPrcb();
        v34 = *((_QWORD *)v23 + 4375);
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
        *(_DWORD *)(v34 + 20) &= v35;
        if ( !v4 )
          goto LABEL_64;
        goto LABEL_63;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 240) )
    return 1LL;
  v10 = sub_14023FF18(*(_QWORD *)(v2 + 72), 0);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 240) = v10;
    return 1LL;
  }
  return 0LL;
}
