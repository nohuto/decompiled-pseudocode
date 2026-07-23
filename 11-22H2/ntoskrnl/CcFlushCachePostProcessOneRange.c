/*
 * XREFs of CcFlushCachePostProcessOneRange @ 0x14029E8D0
 * Callers:
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x14053ACC4 (CcAsyncLazywriteWorkerMulti.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14053B850 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     CcReleaseByteRangeFromWrite @ 0x14025D5E0 (CcReleaseByteRangeFromWrite.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     CcIsFatalWriteError @ 0x1402F42A8 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     CcPostDeferredWrites @ 0x1403C17E8 (CcPostDeferredWrites.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall CcFlushCachePostProcessOneRange(__int64 *a1)
{
  __int64 v1; // r13
  bool v2; // zf
  _QWORD *v3; // r14
  __int64 v4; // rsi
  char v6; // di
  char v7; // bp
  struct _IO_STATUS_BLOCK *v8; // r12
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // r9
  int v12; // r8d
  unsigned int v13; // r8d
  __int64 v14; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 OldIrql; // r15
  int v19; // r13d
  __int64 v20; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  int v25; // eax
  NTSTATUS Status; // ecx
  unsigned __int64 v27; // r13
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  char v32; // al
  int v33; // ecx
  _QWORD *v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-78h] BYREF
  __int128 v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+C0h] [rbp+8h]
  unsigned int v40; // [rsp+C8h] [rbp+10h]
  __int64 v41; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+20h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 15) == 0;
  v3 = (_QWORD *)a1[12];
  v4 = a1[2];
  v6 = *((_BYTE *)a1 + 132);
  v7 = *((_BYTE *)a1 + 133);
  v8 = (struct _IO_STATUS_BLOCK *)a1[14];
  v9 = a1[3];
  v38 = 0LL;
  v35 = a1[1];
  v40 = *((_DWORD *)a1 + 26);
  v37 = 0LL;
  v42 = v1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v34 = v3;
  if ( !v2 )
    goto LABEL_7;
  if ( v8->Status >= 0 )
  {
    if ( (*(_DWORD *)(v4 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
      *(_DWORD *)(v4 + 152) |= 0x400u;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v2 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v2 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    if ( v6 )
    {
      __incgsdword(0x846Cu);
      __addgsdword(0x8470u, (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12);
    }
    *((_DWORD *)a1 + 60) += (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12;
    goto LABEL_7;
  }
  v19 = *((_DWORD *)a1 + 12);
  v41 = a1[5];
  v39 = v19;
  if ( !(unsigned __int8)CcIsFatalWriteError(v4) )
  {
    *((_DWORD *)a1 + 16) = 1;
    goto LABEL_31;
  }
  v20 = v42;
  do
  {
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      CcPerfLogFlushSection(a1[21], v4, (unsigned int)&v41, 4096, *((_DWORD *)a1 + 14));
    v8->Status = v6 != 0 ? 0x80000016 : 0;
    v25 = MmFlushSection(v9, &v41, 0x1000uLL, 0LL, v8, *((_DWORD *)a1 + 14));
    if ( v25 < 0 )
    {
      Status = v8->Status;
      if ( v6 )
      {
        if ( Status != -2147483626 )
          goto LABEL_47;
      }
      else if ( Status )
      {
        goto LABEL_47;
      }
      v8->Status = v25;
    }
LABEL_47:
    if ( v8->Status < 0 )
    {
      v32 = CcIsFatalWriteError(v4);
      v33 = *((_DWORD *)a1 + 32);
      if ( !v32 )
      {
        *((_DWORD *)a1 + 16) = 1;
        if ( v33 )
          goto LABEL_61;
LABEL_60:
        *((_DWORD *)a1 + 32) = v8->Status;
        goto LABEL_61;
      }
      if ( !v33 )
        goto LABEL_60;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v20 + 768), &LockHandle);
      *(_DWORD *)(v4 + 152) |= 0x400u;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v27 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v2 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v2 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(v27);
      v19 = v39;
    }
LABEL_61:
    v41 += 4096LL;
    v2 = v19 == 4096;
    v19 -= 4096;
    v39 = v19;
  }
  while ( !v2 );
  v3 = v34;
LABEL_31:
  v1 = v42;
LABEL_7:
  v10 = *((_DWORD *)a1 + 15) || *((_DWORD *)a1 + 16);
  CcReleaseByteRangeFromWrite(v4, a1 + 5, *((_DWORD *)a1 + 12), (_WORD *)a1[15], v10);
  v11 = *((unsigned int *)a1 + 12);
  v12 = *((_DWORD *)a1 + 13);
  a1[27] += v11;
  v13 = v11 + v12;
  *((_DWORD *)a1 + 13) = v13;
  if ( v13 >= 0x40000 && *(_QWORD *)a1[22] != a1[22] )
  {
    CcPostDeferredWrites(v1, v35);
    *((_DWORD *)a1 + 13) = 0;
  }
  if ( v6 && !v7 )
  {
    v14 = *(_QWORD *)a1[22] == a1[22] ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
    a1[19] = a1[18] + v14;
    if ( MEMORY[0xFFFFF78000000320] > a1[19] )
    {
      v8->Information = 35422LL;
      return 0;
    }
  }
  if ( v3 )
  {
    v16 = a1[5] + *((unsigned int *)a1 + 12);
    a1[5] = v16;
    v17 = *v3;
    if ( *v3 + v40 > v16 )
    {
      a1[4] = v16;
      *((_DWORD *)a1 + 12) = v40 + v17 - v16;
      goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  if ( !*((_BYTE *)a1 + 193) )
    return 1;
  a1[25] += *((unsigned int *)a1 + 12);
  return (unsigned __int64)a1[27] >> 12 < a1[26];
}
