/*
 * XREFs of MiHandleForceTrimWorkingSets @ 0x140373F80
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14036DAE4 (MiReturnWsToExpansionList.c)
 *     MiDetachAndUnlockWorkingSet @ 0x140374238 (MiDetachAndUnlockWorkingSet.c)
 *     MiSelfTrim @ 0x140374278 (MiSelfTrim.c)
 *     MiAttachWorkingSet @ 0x140374958 (MiAttachWorkingSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiHandleForceTrimWorkingSets(__int64 a1)
{
  __int64 v1; // rsi
  __int64 **v2; // rdi
  int v3; // r12d
  __int64 *v4; // r8
  __int64 **v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int16 v8; // r13
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rdx
  int v13; // eax
  __int64 ***v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int8 v17; // bl
  __int64 *v18; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v30; // [rsp+70h] [rbp+30h]
  int v31; // [rsp+70h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 16600);
  v2 = (__int64 **)(a1 + 16608);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  do
  {
    *(_DWORD *)(v1 + 40) &= ~0x400u;
    v4 = *v2;
    while ( v4 != (__int64 *)v2 )
    {
      v7 = v4;
      v4 = (__int64 *)*v4;
      if ( (*((_DWORD *)v7 + 41) & 3) != 0 && (*((_DWORD *)v7 + 41) & 4) != 0 )
      {
        v5 = (__int64 **)v7[1];
        if ( (__int64 *)v4[1] != v7 )
          goto LABEL_37;
        if ( *v5 != v7 )
          goto LABEL_37;
        *v5 = v4;
        v4[1] = (__int64)v5;
        v6 = *v2;
        if ( (__int64 **)(*v2)[1] != v2 )
          goto LABEL_37;
        *v7 = (__int64)v6;
        ++v3;
        v7[1] = (__int64)v2;
        v6[1] = (__int64)v7;
        *v2 = v7;
      }
    }
    if ( !v3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_28;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_28;
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result > 0xFu || LockHandle.OldIrql > 0xFu || (unsigned __int8)result < 2u )
        goto LABEL_28;
      goto LABEL_47;
    }
    v8 = ++*(_WORD *)(v1 + 2344);
    *(_WORD *)(v1 + 52) = 257;
    while ( 1 )
    {
      v9 = *v2;
      if ( *v2 == (__int64 *)v2 )
        goto LABEL_24;
      v10 = *v9;
      if ( (__int64 **)v9[1] != v2 || *(__int64 **)(v10 + 8) != v9 )
        goto LABEL_37;
      v11 = (__int64)(v9 - 3);
      *v2 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v2;
      v12 = (__int64 *)(v11 + 24);
      if ( *(_WORD *)(v11 + 172) == v8 )
        break;
      *v12 = 0LL;
      v13 = *(_DWORD *)(v11 + 188);
      *(_WORD *)(v11 + 172) = v8;
      if ( (v13 & 3) != 0 && (v13 & 4) != 0 && *(_QWORD *)(v11 + 144) > 1uLL )
      {
        v30 = *(_DWORD *)(v11 + 184);
        BYTE1(v30) = BYTE1(v30) & 0xF9 | 2;
        *(_WORD *)(v11 + 184) = v30;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v15 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v25 = (v24 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v24;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v15);
        MiAttachWorkingSet(v11);
        LOBYTE(v16) = MiLockWorkingSetShared(v11);
        v17 = v16;
        MiSelfTrim(v11, v16);
        MiUnlockWorkingSetShared(v11, v17);
        MiDetachAndUnlockWorkingSet(v11);
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v31 = *(_DWORD *)(v11 + 184);
        BYTE1(v31) &= 0xF9u;
        *(_WORD *)(v11 + 184) = v31;
        MiReturnWsToExpansionList(v11, 0);
      }
      else
      {
        v14 = (__int64 ***)v2[1];
        if ( *v14 != v2 )
          goto LABEL_37;
        *v12 = (__int64)v2;
        *(_QWORD *)(v11 + 32) = v14;
        *v14 = (__int64 **)v12;
        v2[1] = v12;
      }
    }
    v18 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 )
LABEL_37:
      __fastfail(3u);
    *v12 = (__int64)v18;
    *(_QWORD *)(v11 + 32) = v2;
    v18[1] = (__int64)v12;
    *v2 = v12;
LABEL_24:
    *(_WORD *)(v1 + 52) = 0;
  }
  while ( (*(_DWORD *)(v1 + 40) & 0x400) != 0 );
  if ( !*(_DWORD *)(v1 + 40) )
    KeSetEvent((PRKEVENT)v1, 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
LABEL_47:
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v28 = result & v27[5];
        v27[5] = v28;
        if ( !v28 )
          result = KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
LABEL_28:
  __writecr8(OldIrql);
  return result;
}
