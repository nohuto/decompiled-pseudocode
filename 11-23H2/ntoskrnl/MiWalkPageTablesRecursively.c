/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14025C400
 * Callers:
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiRecomputeWalkHierarchy @ 0x14025BED0 (MiRecomputeWalkHierarchy.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14025CFD0 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14025D330 (MiGetNextPageTablePte.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140319A68 (MiGetPageTableLockBuffer.c)
 *     MiYieldPageTableWalk @ 0x14033D4B8 (MiYieldPageTableWalk.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1403584FC (MiAdvanceToLastUntrimmableVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // r12d
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  int v9; // r15d
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // r14
  int v12; // ecx
  int NextPageTablePte; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdi
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rax
  unsigned __int64 *v27; // r9
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r10
  _DWORD *v32; // rax
  char v33; // dl
  unsigned __int64 v34; // r9
  char v35; // cl
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  int v39; // r8d
  __int64 v40; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebp
  unsigned int DpcTimeCount; // r14d
  _KTHREAD *NextThread; // rax
  unsigned __int8 v45; // cl
  char v46; // al
  __int64 (__fastcall *v47)(unsigned int *); // rax
  char v48; // cl
  char v49; // al
  __int64 (__fastcall *v51)(unsigned int *); // rax
  char v52; // cl
  int v53; // edx
  char v54; // al
  char v55; // cl
  unsigned __int64 v56; // rcx
  int v57; // ebp
  int v58; // eax
  __int64 LeafVa; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // r9
  unsigned __int64 valid; // rax
  __int64 v66; // rdx
  __int64 (__fastcall *v67)(unsigned int *); // rax
  int v68; // edi
  __int64 v69; // rax
  _DWORD *PageTableLockBuffer; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  unsigned int v73; // edi
  int v74; // eax
  struct _KPRCB *v75; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 SharedVm; // rdi
  signed __int32 v78; // eax
  signed __int32 v79; // ett
  char v80; // dl
  __int64 *v81; // r11
  __int64 v82; // rdi
  unsigned int v83; // r10d
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v85; // rcx
  __int64 v86; // rdi
  unsigned __int64 v87; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall *v88)(unsigned int *, unsigned __int64, _QWORD); // [rsp+28h] [rbp-60h]
  unsigned __int64 v89[11]; // [rsp+30h] [rbp-58h] BYREF
  int v90; // [rsp+90h] [rbp+8h] BYREF
  __int64 v91; // [rsp+98h] [rbp+10h]
  int v92; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *v93; // [rsp+A8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v88 = (__int64 (__fastcall *)(unsigned int *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 19);
  v6 = a2;
  v7 = (int)a3;
  v91 = v4;
  v9 = 0;
  v10 = (unsigned __int64 *)&a1[4 * (int)a3 + 20];
  v93 = v10;
  if ( a2 < *v10 )
    v6 = *v10;
  if ( (_DWORD)a3 == 3 )
  {
    v11 = *((_QWORD *)a1 + 17);
  }
  else
  {
    v11 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v11 > v10[1] )
      v11 = v10[1];
  }
  v12 = 0;
  v87 = v11;
  v92 = 0;
LABEL_7:
  if ( v6 <= v11 )
  {
    while ( 1 )
    {
      a3 = 0xFFFFF68000000000uLL;
      if ( v12 )
      {
        v92 = 0;
        if ( v9 >= 4 )
          break;
        if ( (a1[1] & 1) != 0 )
        {
          if ( (_DWORD)v7 != 3 )
            break;
          v62 = *((_QWORD *)a1 + 3);
          if ( (*a1 & 4) != 0 )
          {
            v63 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            MiLockWorkingSetShared(*((_QWORD *)a1 + 3));
            valid = MiLockLowestValidPageTable(v62, v63 << 25 >> 16, v89, v64);
            if ( valid != v63 )
            {
              MiUnlockPageTableInternal(v62, valid);
              MiUnlockWorkingSetShared(*((_QWORD *)a1 + 3), *((_BYTE *)a1 + 7));
              goto LABEL_9;
            }
            *((_QWORD *)a1 + 6) = v63;
          }
          else
          {
            SharedVm = MiGetSharedVm(*((_QWORD *)a1 + 3), 0x7FFFFFFFF8LL, 0xFFFFF68000000000uLL, a4);
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
            *(_DWORD *)(SharedVm + 4) = 0;
            if ( (*a1 & 0x400) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67024);
          }
          *((_BYTE *)a1 + 4) &= ~1u;
        }
      }
LABEL_9:
      a3 = ++*((_QWORD *)a1 + 18);
      if ( (a3 & 0xF) == 0 && (*a1 & 8) != 0 )
      {
        v17 = *((_QWORD *)a1 + 9);
        v18 = *(_QWORD *)(v17 + 17216);
        if ( v18 < 0x420 )
        {
          v81 = (__int64 *)(v17 + 6808);
          v82 = 0LL;
          while ( 1 )
          {
            a4 = *v81;
            v83 = 0;
            if ( dword_140C65AFC )
              break;
LABEL_211:
            ++v82;
            ++v81;
            if ( v82 > 1 )
            {
              v9 = 5;
              goto LABEL_213;
            }
          }
          while ( 1 )
          {
            v18 += *(unsigned __int16 *)a4;
            if ( v18 >= 0x420 )
              break;
            ++v83;
            a4 += 16LL;
            if ( v83 >= dword_140C65AFC )
              goto LABEL_211;
          }
        }
      }
      if ( (*a1 & 2) == 0 || ((unsigned __int8)a3 & *((_BYTE *)a1 + 6)) != 0 )
        goto LABEL_12;
      v31 = *((_QWORD *)a1 + 3);
      if ( (*(_BYTE *)(v31 + 184) & 7) == 2 )
        v32 = &unk_140C6A180;
      else
        v32 = (_DWORD *)(v31 + 192);
      if ( (*v32 & 0x40000000) != 0 )
        goto LABEL_162;
      if ( (*a1 & 4) != 0 )
      {
        v33 = *(_BYTE *)(v31 + 184);
        v34 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v90 = 0;
        v35 = v33 & 7;
        if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v35 )
          {
            v80 = v33 & 7;
            if ( v80 == 7 )
            {
              SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
            }
            else if ( v80 == 5 )
            {
              SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
            }
            else
            {
              SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
            }
          }
          else
          {
            SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
          }
          if ( SelfmapLockHandle->LockQueue.Next )
            goto LABEL_162;
        }
        else
        {
          if ( v34 < 0xFFFFF6FB7DBED000uLL )
            goto LABEL_63;
          if ( !v35 )
          {
            if ( v34 <= 0xFFFFF6FB7DBEDFFFuLL
              && (v61 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) != 0 )
            {
              LODWORD(v37) = (*(_DWORD *)(v61 + 4 * ((((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) >> 30) & 1;
            }
            else
            {
LABEL_63:
              v36 = *(_QWORD *)v34;
              if ( v34 >= 0xFFFFF6FB7DBED000uLL
                && v34 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0x600000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v36 & 1) != 0
                && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
              {
                Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( Flink )
                {
                  v85 = *((_QWORD *)&Flink->Flink + ((v34 >> 3) & 0x1FF));
                  if ( (v85 & 0x20) != 0 )
                    v36 |= 0x20uLL;
                  if ( (v85 & 0x42) != 0 )
                    v36 |= 0x42uLL;
                }
              }
              v37 = (v36 >> 60) & 2;
            }
            if ( (_DWORD)v37 )
              goto LABEL_162;
            goto LABEL_66;
          }
          if ( v34 > 0xFFFFF6FB7DBEDFFFuLL )
            goto LABEL_63;
          PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                            v31,
                                            ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                            &v90);
          if ( ((*PageTableLockBuffer >> v90) & 2) != 0 )
            goto LABEL_162;
        }
      }
LABEL_66:
      if ( (*a1 & 0x400) != 0 && (dword_140C67024 & 0x40000000) != 0 )
        goto LABEL_162;
      if ( *((_BYTE *)a1 + 7) >= 2u )
        goto LABEL_12;
      v38 = KeGetCurrentPrcb();
      v39 = 0;
      v40 = 0LL;
      DpcRequestSummary = v38->DpcRequestSummary;
      DpcWatchdogCount = v38->DpcWatchdogCount;
      DpcTimeCount = v38->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v39 = 1;
        if ( DpcTimeCount <= 7 )
          goto LABEL_73;
        if ( v38->QuantumEnd )
        {
          v73 = 1;
          goto LABEL_159;
        }
      }
      else
      {
        if ( !v38->NestingLevel )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v73 = 2;
            goto LABEL_159;
          }
          if ( v38->QuantumEnd )
          {
            v73 = 3;
            goto LABEL_159;
          }
          NextThread = v38->NextThread;
          if ( NextThread && NextThread != v38->CurrentThread )
          {
            v73 = 4;
            goto LABEL_159;
          }
LABEL_73:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_74;
          if ( !v39 )
            goto LABEL_184;
          goto LABEL_228;
        }
        v40 = 1LL;
        if ( DpcWatchdogCount <= 7 )
        {
LABEL_74:
          v11 = v87;
          goto LABEL_12;
        }
        if ( v38->QuantumEnd )
        {
          v73 = 7;
          goto LABEL_159;
        }
      }
LABEL_228:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v73 = 5;
        goto LABEL_159;
      }
      if ( v38->CurrentThread != v38->IdleThread )
      {
        v73 = 6;
        goto LABEL_159;
      }
LABEL_184:
      _disable();
      v38->DpcWatchdogCount = 0;
      v38->DpcTimeCount = 0;
      v75 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v75->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v78 = *SchedulerAssist;
        do
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange(SchedulerAssist, v78 & 0xFFDFFFFF, v78);
        }
        while ( v79 != v78 );
        if ( (v78 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
      _enable();
      v73 = 0;
LABEL_159:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v73, DpcWatchdogCount, DpcTimeCount, v40);
      v11 = v87;
      if ( v73 )
      {
LABEL_162:
        v74 = MiYieldPageTableWalk(a1, 1LL);
        if ( v74 >= 4 )
          v9 = v74;
        goto LABEL_102;
      }
LABEL_12:
      if ( (*a1 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(a1, v6, (unsigned int)v7);
        if ( NextPageTablePte == 3 )
        {
          v12 = 1;
          v9 = 4;
          v92 = 1;
          goto LABEL_22;
        }
        if ( (a1[1] & 1) != 0 )
          goto LABEL_102;
        v30 = *((_QWORD *)a1 + 8);
        if ( v30 && v30 == v6 )
        {
          *((_QWORD *)a1 + 8) = 0LL;
LABEL_26:
          v19 = v93;
LABEL_27:
          v4 = v91;
LABEL_28:
          a4 = *a1;
          v20 = *a1 & 1;
          if ( v20 || (_DWORD)v7 )
          {
LABEL_33:
            v22 = *((_QWORD *)a1 + 8);
            if ( v22 && v22 == *v19 )
              *((_QWORD *)a1 + 8) = 0LL;
            v23 = *((_QWORD *)a1 + 7);
            if ( v23 && v23 == *v19 )
              *((_QWORD *)a1 + 7) = 0LL;
            if ( (a4 & 0x40) != 0 || (int)v7 >= 1 && !v20 && (*(_BYTE *)(v4 + 184) & 7) != 0 )
              goto LABEL_15;
            v24 = v88(a1, v6, (unsigned int)v7);
            v9 = v24;
            if ( v24 == 2 )
            {
              v9 = 0;
              goto LABEL_19;
            }
            if ( v24 != 3 )
              goto LABEL_16;
            v9 = 0;
            MiYieldPageTableWalk(a1, 1LL);
            MiWaitForFreePage(*((_QWORD *)a1 + 9));
            v12 = 1;
            v92 = 1;
          }
          else
          {
            a3 = ((((__int64)(v6 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
            v21 = *(_QWORD *)a3;
            if ( a3 >= 0xFFFFF6FB7DBED000uLL
              && a3 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0)
              && KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink )
            {
              a3 = (a3 >> 3) & 0x1FF;
            }
            if ( (unsigned __int8)((HIBYTE(v21) & 0xF) - 9) <= 1u )
            {
              if ( (*(_BYTE *)(v4 + 184) & 7) == 0 )
              {
                LeafVa = MiGetLeafVa(v6);
                v60 = (__int64)((((unsigned __int64)MiAdvanceToLastUntrimmableVa(LeafVa) >> 9) & 0x7FFFFFFFF8LL)
                              - 0x98000000000LL
                              - v6) >> 3;
                if ( v60 > 0xFFFFFFFFLL )
                  a1[2] = -1;
                else
                  a1[2] = v60;
              }
            }
            else if ( (HIBYTE(v21) & 0xF) != 8 || (a4 & 0x8000) != 0 )
            {
              goto LABEL_33;
            }
LABEL_15:
            v9 = 0;
LABEL_16:
            v14 = a1[2] + 1LL;
            a1[2] = 0;
            v15 = v6 + 8 * v14;
            v16 = (v6 >> 9) & 0x7FFFFFFFF8LL;
            v6 = v15;
            if ( (_DWORD)v7 || ((v15 >> 9) & 0x7FFFFFFFF8LL) != v16 )
            {
              v25 = v15;
              v26 = v93;
              if ( (*a1 & 0x4000) == 0 || v15 > *v93 )
                *v93 = v15;
              if ( v7 < 3 )
              {
                v27 = v26 + 2;
                a3 = 3 - v7;
                do
                {
                  v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  *v27 = v25;
                  v27 += 2;
                  --a3;
                }
                while ( a3 );
                v11 = v87;
                v26 = v93;
              }
              a4 = v7;
              if ( (_DWORD)v7 )
              {
                a3 = 0LL;
                v28 = v26 - 2;
                do
                {
                  v29 = (__int64)(v15 << 25) >> 16;
                  if ( (*a1 & 0x4000) == 0 || (v15 = *v28, v29 > *v28) )
                  {
                    v15 = v29;
                    *v28 = v29;
                  }
                  v28 -= 2;
                  --a4;
                }
                while ( a4 );
              }
            }
            else
            {
              *((_QWORD *)a1 + 10) = v15;
            }
LABEL_19:
            v12 = v92;
          }
          if ( (a1[1] & 1) == 0 && v9 < 4 )
          {
LABEL_22:
            v4 = v91;
            goto LABEL_7;
          }
LABEL_102:
          v12 = 1;
          v92 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        NextPageTablePte = MiComputePxeWalkAction(a1, v6, (unsigned int)v7);
      }
      if ( !NextPageTablePte )
        goto LABEL_15;
      if ( NextPageTablePte == 1 || (int)v7 <= ((*((unsigned __int8 *)a1 + 4) >> 2) & 7) )
        goto LABEL_26;
      v51 = (__int64 (__fastcall *)(unsigned int *))*((_QWORD *)a1 + 20);
      v52 = *((_BYTE *)a1 + 4) | 2;
      *((_BYTE *)a1 + 4) = v52;
      if ( v51 )
      {
        v53 = v51(a1);
      }
      else
      {
        v53 = 0;
        if ( *((_BYTE *)a1 + 7) == 17 )
        {
          v55 = v52 & 0xFD;
          *((_BYTE *)a1 + 4) = v55;
          goto LABEL_93;
        }
      }
      v54 = a1[1] & 0xFD;
      *((_BYTE *)a1 + 4) = v54;
      if ( (v54 & 1) != 0 )
      {
        v55 = v54;
        if ( v53 >= 4 )
        {
LABEL_232:
          if ( v53 == 5 )
            v9 = 5;
          goto LABEL_102;
        }
      }
      else
      {
        if ( v53 >= 4 )
          goto LABEL_232;
        v55 = v54;
      }
LABEL_93:
      if ( (v55 & 1) != 0 )
        goto LABEL_102;
      v56 = (__int64)(v6 << 25) >> 16;
      if ( v56 < *(v93 - 2) )
        v56 = *(v93 - 2);
      if ( v56 > *(v93 - 1) )
      {
        v19 = v93;
        goto LABEL_27;
      }
      if ( (*a1 & 4) != 0 )
      {
        MiLockPageTableInternal(v91, v6, 0, a4);
        MiUnlockPageTableInternal(v91, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *((_QWORD *)a1 + 6) = v6;
      }
      v57 = 0;
      v58 = MiWalkPageTablesRecursively(a1, (__int64)(v6 << 25) >> 16, (unsigned int)(v7 - 1));
      v19 = v93;
      v9 = v58;
      if ( *v93 != v6 )
      {
        LOBYTE(v57) = (*v93 & 0xFFF) == 0;
        if ( (*a1 & 0x4000) != 0 && v6 < *v93 )
        {
          if ( (a1[1] & 1) == 0 && (unsigned int)MiYieldPageTableWalk(a1, 1LL) == 5 )
            v9 = 5;
          v6 = *v19;
          v12 = 1;
          v92 = 1;
          goto LABEL_22;
        }
        *((_QWORD *)a1 + 8) = v6;
        MiRecomputeWalkHierarchy(a1, v6, v7);
      }
      if ( v9 >= 4 || (a1[1] & 1) != 0 )
        goto LABEL_102;
      if ( v6 > v11 )
      {
LABEL_213:
        v4 = v91;
        break;
      }
      if ( (*a1 & 4) == 0 )
        goto LABEL_27;
      if ( v57 )
      {
        v4 = v91;
      }
      else
      {
        v4 = v91;
        if ( (unsigned int)MiLockPageTableInternal(v91, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1, a4) )
        {
          MiUnlockPageTableInternal(v4, v6);
          *((_QWORD *)a1 + 6) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = v93;
          goto LABEL_28;
        }
      }
      if ( (unsigned int)MiYieldPageTableWalk(a1, 1LL) == 5 )
        v9 = 5;
      v12 = 1;
      v92 = 1;
    }
  }
  v45 = *((_BYTE *)a1 + 4);
  v46 = v45 & 1;
  if ( (_DWORD)v7 == 3 )
  {
    v66 = v45;
    if ( v46 || (*a1 & 0x40) != 0 && v9 == 4 )
    {
LABEL_143:
      if ( (v66 & 1) != 0 )
      {
        if ( (*a1 & 4) != 0 )
        {
          MiLockWorkingSetShared(v4);
        }
        else
        {
          v86 = MiGetSharedVm(v4, v66, a3, a4);
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v86);
          *(_DWORD *)(v86 + 4) = 0;
          if ( (*a1 & 0x400) != 0 )
            ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67024);
        }
        *((_BYTE *)a1 + 4) &= ~1u;
      }
      return (unsigned int)v9;
    }
    v67 = (__int64 (__fastcall *)(unsigned int *))*((_QWORD *)a1 + 20);
    v66 = v45;
    LOBYTE(v66) = v45 | 2;
    *((_BYTE *)a1 + 4) = v45 | 2;
    if ( v67 )
    {
      v68 = v67(a1);
    }
    else
    {
      v68 = 0;
      if ( *((_BYTE *)a1 + 7) == 17 )
        goto LABEL_139;
    }
    v66 = *((unsigned __int8 *)a1 + 4);
LABEL_139:
    v69 = *((_QWORD *)a1 + 6);
    LOBYTE(v66) = v66 & 0xFD;
    *((_BYTE *)a1 + 4) = v66;
    if ( v69 )
    {
      MiUnlockPageTableInternal(v4, v69);
      v66 = *((unsigned __int8 *)a1 + 4);
      *((_QWORD *)a1 + 6) = 0LL;
    }
    if ( v68 == 5 )
      v9 = 5;
    goto LABEL_143;
  }
  if ( v46 )
    return (unsigned int)v9;
  v47 = (__int64 (__fastcall *)(unsigned int *))*((_QWORD *)a1 + 20);
  v48 = v45 | 2;
  *((_BYTE *)a1 + 4) = v48;
  if ( v47 )
  {
    v5 = v47(a1);
    goto LABEL_80;
  }
  if ( *((_BYTE *)a1 + 7) == 17 )
  {
    *((_BYTE *)a1 + 4) = v48 & 0xFD;
    return (unsigned int)v9;
  }
LABEL_80:
  v49 = a1[1] & 0xFD;
  *((_BYTE *)a1 + 4) = v49;
  if ( (v49 & 1) == 0 && v5 < 4 || v5 != 5 )
    return (unsigned int)v9;
  return 5LL;
}
