/*
 * XREFs of IopCompleteRequest @ 0x1402AB360
 * Callers:
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     IoRemoveIoCompletion @ 0x1402A9C40 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopAbortRequest @ 0x1409440E0 (IopAbortRequest.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250E00 (KxWaitForSpinLockAndAcquire.c)
 *     IopDequeueIrpFromFileObject @ 0x14028CD6C (IopDequeueIrpFromFileObject.c)
 *     IopFreeIrpExtension @ 0x14028FCF8 (IopFreeIrpExtension.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC270 (IopProcessBufferedIoCompletion.c)
 *     ExReturnPoolQuota @ 0x1402ACCB0 (ExReturnPoolQuota.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF1E0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402AF700 (IopDequeueIrpFromThread.c)
 *     KeInitializeApc @ 0x1402BE6A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 *     KeInsertQueueEx @ 0x14031A8D0 (KeInsertQueueEx.c)
 *     IopInterlockedAdd @ 0x14035E294 (IopInterlockedAdd.c)
 *     Feature_3108017466__private_IsEnabledDeviceUsage @ 0x14040F61C (Feature_3108017466__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045FDD0 (KiAcquireSpinLockInstrumented.c)
 *     IopExceptionFilter @ 0x140555588 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x14055564C (IopFreeReserveIrp.c)
 *     IopIoRingCompleteIrp @ 0x14055957C (IopIoRingCompleteIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405718E8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140AC26D0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(ULONG_PTR *a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v7; // rsi
  unsigned int *v8; // r13
  int v9; // eax
  volatile signed __int64 *v10; // r15
  unsigned int v11; // r14d
  struct _MDL *v12; // rcx
  struct _MDL *Next; // rbx
  _DWORD *v14; // rbx
  void *v15; // rcx
  __int64 v16; // rcx
  struct _KEVENT *v17; // rcx
  ULONG_PTR *v18; // rcx
  volatile signed __int32 *v19; // rbx
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rdx
  ULONG_PTR *v23; // r12
  unsigned __int8 v24; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  ULONG_PTR v29; // rdx
  volatile signed __int64 *v30; // rbx
  signed __int64 v31; // rax
  unsigned __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  struct _KTHREAD *v39; // rax
  __int64 p_Thread; // rbx
  unsigned __int8 v41; // r15
  _DWORD *v42; // r9
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  struct _KTHREAD *v47; // r11
  _DWORD *v48; // r9
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  unsigned __int8 v53; // cl
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  int v57; // ecx
  __int64 *v58; // r10
  int v59; // r8d
  void *v60; // r15
  int v61; // ecx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  struct _KPRCB *v66; // r8
  char v67; // al
  __int16 v68; // r9
  ULONG_PTR v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rcx
  struct _KPRCB *v74; // r8
  char v75; // al
  __int16 v76; // r9
  ULONG_PTR v77; // r9
  __int64 v78; // rbx
  __int64 v79; // rcx
  char v80; // al
  volatile signed __int32 *v81; // rbx
  unsigned __int8 v82; // di
  _DWORD *v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rdx
  signed __int64 v86; // r15
  unsigned __int8 v87; // cl
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  signed __int64 v91; // r12
  bool v92; // cc
  signed __int64 v93; // r12
  PVOID Object; // [rsp+40h] [rbp-88h]
  ULONG_PTR *v95; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *v96; // [rsp+50h] [rbp-78h]
  ULONG_PTR v97; // [rsp+58h] [rbp-70h]
  __int64 BugCheckParameter4; // [rsp+60h] [rbp-68h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  char v101; // [rsp+E0h] [rbp+18h]
  char v102; // [rsp+E8h] [rbp+20h]

  v5 = (ULONG_PTR)(a1 - 15);
  v95 = a1 - 15;
  CurrentThread = KeGetCurrentThread();
  v96 = CurrentThread;
  v7 = *a4;
  if ( !a3 || (v102 = 1, *a3 != 1LL) )
    v102 = 0;
  v8 = (unsigned int *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 16);
  if ( (v9 & 0x200000) != 0 )
  {
    if ( (unsigned int)Feature_3108017466__private_IsEnabledDeviceUsage() )
      *(_QWORD *)(v5 + 152) = CurrentThread;
    IopIoRingCompleteIrp((PIRP)v5);
    return;
  }
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x2000) != 0 )
  {
    v10 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
    v11 = 0;
  }
  else
  {
    v11 = 0;
    v10 = 0LL;
  }
  IopProcessBufferedIoCompletion(v5);
  v12 = *(struct _MDL **)(v5 + 8);
  if ( v12 )
  {
    do
    {
      Next = v12->Next;
      IoFreeMdl(v12);
      v12 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  v14 = (_DWORD *)(v5 + 48);
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v5 + 65) )
  {
    v15 = *(void **)(v5 + 80);
    if ( v15 && v7 && (*v8 & 4) == 0 )
      ObfDereferenceObject(v15);
    goto LABEL_35;
  }
  v16 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v16 + 4) = *((_DWORD *)v95 + 14);
  else
    *(_QWORD *)(v16 + 8) = v95[7];
  *(_DWORD *)v16 = *v14;
  v17 = *(struct _KEVENT **)(v5 + 80);
  if ( !v17 )
  {
    if ( !v7 )
      goto LABEL_35;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
    {
LABEL_34:
      *(_DWORD *)(v7 + 56) = *v14;
      goto LABEL_35;
    }
LABEL_33:
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    goto LABEL_34;
  }
  KeSetEvent(v17, 0, 0);
  if ( v7 )
  {
    if ( (*v8 & 4) == 0 )
      ObfDereferenceObject(*(PVOID *)(v5 + 80));
    if ( (*(_DWORD *)(v7 + 80) & 2) != 0 && (*v8 & 0x1000) == 0 )
      goto LABEL_33;
  }
LABEL_35:
  if ( (*v14 & 0xC0000000) != 0xC0000000
    || *(_BYTE *)(v5 + 65) && (*v8 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
    Object = 0LL;
    v97 = 0LL;
    v101 = 0;
    if ( v7 )
    {
      v18 = *(ULONG_PTR **)(v7 + 176);
      if ( v18 )
      {
        if ( (*v8 & 0x2000) != 0 )
        {
          v29 = *v18;
          Object = (PVOID)*v18;
          v97 = v18[1];
        }
        else
        {
          BugCheckParameter4 = -1LL;
          v19 = (volatile signed __int32 *)(v7 + 184);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 2 )
              LODWORD(v22) = 4;
            else
              v22 = (-1LL << (CurrentIrql + 1)) & 4;
            SchedulerAssist[5] |= v22;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v7 + 184);
          }
          else if ( _interlockedbittestandset64(v19, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184));
          }
          v23 = *(ULONG_PTR **)(v7 + 176);
          if ( v23 )
          {
            BugCheckParameter4 = v23[2];
            v23[2] = BugCheckParameter4 + 1;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          if ( (_DWORD)KiIrqlFlags )
          {
            v24 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v26 = CurrentPrcb->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v28 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(CurrentIrql);
          if ( v23 )
          {
            v101 = 1;
            v29 = *v23;
            Object = (PVOID)*v23;
            v97 = v23[1];
            if ( BugCheckParameter4 < 0 )
              KeBugCheckEx(0x18u, v7, *(_QWORD *)(v7 + 176), 0x81uLL, BugCheckParameter4);
          }
          else
          {
            v101 = 0;
            v29 = 0LL;
            Object = 0LL;
            v97 = 0LL;
          }
          v8 = (unsigned int *)(v5 + 16);
        }
        if ( v29 )
        {
          v30 = (volatile signed __int64 *)(v29 - 48);
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((_DWORD)v30);
            v29 = (ULONG_PTR)Object;
          }
          v31 = _InterlockedIncrement64(v30);
          if ( v31 <= 1 )
            KeBugCheckEx(0x18u, 0LL, v29, 0x10uLL, v31);
        }
      }
    }
    if ( (*v8 & 0x100) != 0 )
    {
      v32 = *((unsigned int *)v95 + 14);
      if ( v10 )
      {
        _InterlockedExchangeAdd64(v10 + 197, *((unsigned int *)v95 + 14));
      }
      else
      {
        v33 = KeGetCurrentThread();
        v33->ReadTransferCount += v32;
      }
      __addgsqword(0x2EE8u, v32);
    }
    else if ( (*v8 & 0x200) != 0 )
    {
      v34 = *((unsigned int *)v95 + 14);
      v35 = (unsigned int)v34;
      if ( v10 )
      {
        _InterlockedExchangeAdd64(v10 + 198, v34);
      }
      else
      {
        v36 = KeGetCurrentThread();
        v36->WriteTransferCount += v35;
      }
      __addgsqword(0x2EF0u, v35);
    }
    else
    {
      v37 = v95[7];
      if ( v37 >= 0 )
      {
        v38 = (unsigned int)v37;
        if ( v10 )
        {
          _InterlockedExchangeAdd64(v10 + 199, (unsigned int)v37);
        }
        else
        {
          v39 = KeGetCurrentThread();
          v39->OtherTransferCount += v38;
        }
        __addgsqword(0x2EF8u, v38);
      }
    }
    if ( (*v8 & 0x2000) != 0 )
    {
      p_Thread = v7 + 184;
      v41 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
      {
        v42 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v41 == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << (v41 + 1)) & 4;
        v42[5] |= v43;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v7 + 184);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)p_Thread, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184));
      }
      v44 = (_QWORD *)(v5 + 32);
      v45 = *(_QWORD *)(v5 + 32);
      v46 = *(_QWORD **)(v5 + 40);
      if ( *(_QWORD *)(v45 + 8) == v5 + 32 && (_QWORD *)*v46 == v44 )
      {
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v44 = v44;
        ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
        *v8 = *v8 & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
          goto LABEL_136;
        }
        goto LABEL_135;
      }
    }
    else
    {
      v47 = v96;
      *(_QWORD *)(v5 + 152) = v96;
      v41 = 0;
      if ( v96 )
      {
        p_Thread = (__int64)&v96[1].WaitBlock[0].Thread;
        v41 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
        {
          v48 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v41 == 2 )
            LODWORD(v49) = 4;
          else
            v49 = (-1LL << (v41 + 1)) & 4;
          v48[5] |= v49;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&v96[1].WaitBlockFill11[24]);
          v47 = v96;
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)p_Thread, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v96[1].WaitBlockFill11[24]);
          v47 = v96;
        }
      }
      else
      {
        p_Thread = 1496LL;
      }
      v50 = (_QWORD *)(v5 + 32);
      v51 = *(_QWORD *)(v5 + 32);
      v52 = *(_QWORD **)(v5 + 40);
      if ( *(_QWORD *)(v51 + 8) == v5 + 32 && (_QWORD *)*v52 == v50 )
      {
        *v52 = v51;
        *(_QWORD *)(v51 + 8) = v52;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v50 = v50;
        if ( !v47 )
          goto LABEL_144;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented(p_Thread, retaddr);
          goto LABEL_136;
        }
LABEL_135:
        _InterlockedAnd64((volatile signed __int64 *)p_Thread, 0LL);
LABEL_136:
        if ( (_DWORD)KiIrqlFlags )
        {
          v53 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v53 <= 0xFu && v41 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v28 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
        LODWORD(v47) = (_DWORD)v96;
        __writecr8(v41);
LABEL_144:
        v57 = *v8 & 0x8000;
        if ( v57 )
        {
          v58 = (__int64 *)(v95 + 11);
        }
        else
        {
          v58 = (__int64 *)(v5 + 88);
          *(_QWORD *)(v5 + 88) &= ~1uLL;
        }
        if ( !v57 && *v58 )
        {
          if ( v102 )
            v59 = *(char *)(v5 + 70);
          else
            v59 = 2;
          KeInitializeApc(
            (_DWORD)a1,
            (_DWORD)v47,
            v59,
            (unsigned int)IopUserRundown,
            (__int64)IopUserRundown,
            *v58,
            *(_BYTE *)(v5 + 64),
            *(_QWORD *)(v5 + 96));
          KeInsertQueueApc(a1, *(_QWORD *)(v5 + 72), 0LL, 2LL);
          v60 = Object;
          goto LABEL_218;
        }
        v60 = Object;
        if ( Object
          && *(_QWORD *)(v5 + 96)
          && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
           || *(_BYTE *)(v5 + 65)
           || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
        {
          *a1 = v97;
          *(_DWORD *)(v5 + 184) = 0;
          v61 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
          if ( v61 == 8 || v61 == 20 )
            v11 = 1;
          KeInsertQueueEx(Object, v5 + 168, v11, 0LL);
          goto LABEL_218;
        }
        if ( v57 )
        {
          v62 = *v58;
          do
          {
            v63 = v62;
            v64 = ((v62 >> 1) & 3) - 1;
            v62 = _InterlockedCompareExchange64(v58, v62 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v64), v62);
          }
          while ( v63 != v62 );
          if ( (_DWORD)v64 )
            goto LABEL_218;
          if ( !IopDispatchFreeIrp )
          {
            if ( *(_WORD *)v5 == 6 )
            {
              *(_WORD *)v5 = 0;
              if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
                IopFreeIrpExtension(v5, -1, 1);
              if ( (*(_BYTE *)(v5 + 71) & 0x21) == 0x21 )
              {
LABEL_171:
                IopFreeReserveIrp(v5);
LABEL_218:
                if ( v60 )
                  ObfDereferenceObject(v60);
                if ( v101 )
                {
                  v81 = (volatile signed __int32 *)(v7 + 184);
                  v82 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v82 <= 0xFu )
                  {
                    v83 = KeGetCurrentPrcb()->SchedulerAssist;
                    if ( v82 == 2 )
                      LODWORD(v84) = 4;
                    else
                      v84 = (-1LL << (v82 + 1)) & 4;
                    v83[5] |= v84;
                  }
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                  {
                    KiAcquireSpinLockInstrumented(v7 + 184);
                  }
                  else if ( _interlockedbittestandset64(v81, 0LL) )
                  {
                    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184));
                  }
                  v85 = *(_QWORD *)(v7 + 176);
                  v86 = *(_QWORD *)(v85 + 16);
                  *(_QWORD *)(v85 + 16) = v86 - 1;
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                    KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
                  else
                    _InterlockedAnd64((volatile signed __int64 *)v81, 0LL);
                  if ( (_DWORD)KiIrqlFlags )
                  {
                    v87 = KeGetCurrentIrql();
                    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v87 <= 0xFu && v82 <= 0xFu && v87 >= 2u )
                    {
                      v88 = KeGetCurrentPrcb();
                      v89 = v88->SchedulerAssist;
                      v90 = ~(unsigned __int16)(-1LL << (v82 + 1));
                      v28 = (v90 & v89[5]) == 0;
                      v89[5] &= v90;
                      if ( v28 )
                        KiRemoveSystemWorkPriorityKick(v88);
                    }
                  }
                  __writecr8(v82);
                  if ( v86 <= 0 )
                    KeBugCheckEx(0x18u, v7, *(_QWORD *)(v7 + 176), 0x82uLL, v86);
                }
                if ( v7 )
                {
                  if ( ObpTraceFlags )
                    ObpPushStackInfo(v7 - 48);
                  v91 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 48), 0xFFFFFFFFFFFFFFFFuLL);
                  v92 = v91 <= 1;
                  v93 = v91 - 1;
                  if ( v92 )
                  {
                    if ( *(_QWORD *)(v7 - 40) )
                      KeBugCheckEx(
                        0x18u,
                        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v7 - 48) >> 8)],
                        v7,
                        3uLL,
                        *(_QWORD *)(v7 - 40));
                    if ( v93 < 0 )
                      KeBugCheckEx(0x18u, 0LL, v7, 4uLL, v93);
                    ObpDeferObjectDeletion(v7 - 48);
                  }
                }
                return;
              }
              v65 = *(unsigned __int16 *)(v5 + 4);
              if ( (unsigned int)v65 >= (unsigned int)KeNumberProcessors_0 )
              {
                v66 = KeGetCurrentPrcb();
              }
              else
              {
                _mm_lfence();
                v66 = (struct _KPRCB *)KiProcessorBlock[v65];
              }
              v67 = *(_BYTE *)(v5 + 71);
              if ( (v67 & 8) != 0 )
              {
                *(_BYTE *)(v5 + 71) = v67 ^ 8;
                _InterlockedIncrement(&v66->LookasideIrpFloat);
              }
              if ( (*(_BYTE *)(v5 + 71) & 4) != 0 )
              {
                if ( (IopIrpStackProfilerFlags & 3) == 0
                  || (v68 = *(_WORD *)(v5 + 2), v68 == 72 * (char)IopLargeIrpStackLocations + 208)
                  || v68 == 72 * (char)IopMediumIrpStackLocations + 208
                  || v68 == 280 )
                {
                  v69 = *(unsigned __int16 *)(v5 + 2);
                  if ( (unsigned __int16)v69 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                  {
                    if ( (unsigned __int16)v69 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                    {
                      v70 = 2048LL;
                      v71 = 2056LL;
                    }
                    else
                    {
                      v70 = 2064LL;
                      v71 = 2072LL;
                    }
                  }
                  else
                  {
                    v70 = 2080LL;
                    v71 = 2088LL;
                  }
                  v95[7] = v69;
                  v72 = *(_QWORD *)((char *)&v66->MxCsr + v70);
                  ++*(_DWORD *)(v72 + 28);
                  if ( *(_WORD *)v72 < *(_WORD *)(v72 + 16) )
                    goto LABEL_214;
                  ++*(_DWORD *)(v72 + 32);
                  v72 = *(_QWORD *)((char *)&v66->MxCsr + v71);
LABEL_211:
                  ++*(_DWORD *)(v72 + 28);
                  if ( *(_WORD *)v72 >= *(_WORD *)(v72 + 16) )
                  {
                    ++*(_DWORD *)(v72 + 32);
                    goto LABEL_213;
                  }
LABEL_214:
                  v80 = *(_BYTE *)(v5 + 71);
                  if ( (v80 & 1) != 0 )
                  {
                    *(_BYTE *)(v5 + 71) = v80 ^ 1;
                    ExReturnPoolQuota(v5);
                  }
                  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v72, (PSLIST_ENTRY)v5);
                  goto LABEL_218;
                }
              }
              goto LABEL_213;
            }
            goto LABEL_253;
          }
        }
        else if ( !IopDispatchFreeIrp )
        {
          if ( *(_WORD *)v5 == 6 )
          {
            *(_WORD *)v5 = 0;
            if ( (*(_BYTE *)(v5 + 71) & 0x40) != 0 )
              IopFreeIrpExtension(v5, -1, 1);
            if ( (*(_BYTE *)(v5 + 71) & 0x21) == 0x21 )
              goto LABEL_171;
            v73 = *(unsigned __int16 *)(v5 + 4);
            if ( (unsigned int)v73 >= (unsigned int)KeNumberProcessors_0 )
            {
              v74 = KeGetCurrentPrcb();
            }
            else
            {
              _mm_lfence();
              v74 = (struct _KPRCB *)KiProcessorBlock[v73];
            }
            v75 = *(_BYTE *)(v5 + 71);
            if ( (v75 & 8) != 0 )
            {
              *(_BYTE *)(v5 + 71) = v75 ^ 8;
              _InterlockedIncrement(&v74->LookasideIrpFloat);
            }
            if ( (*(_BYTE *)(v5 + 71) & 4) != 0 )
            {
              if ( (IopIrpStackProfilerFlags & 3) == 0
                || (v76 = *(_WORD *)(v5 + 2), v76 == 72 * (char)IopLargeIrpStackLocations + 208)
                || v76 == 72 * (char)IopMediumIrpStackLocations + 208
                || v76 == 280 )
              {
                v77 = *(unsigned __int16 *)(v5 + 2);
                if ( (unsigned __int16)v77 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                {
                  if ( (unsigned __int16)v77 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                  {
                    v78 = 2048LL;
                    v79 = 2056LL;
                  }
                  else
                  {
                    v78 = 2064LL;
                    v79 = 2072LL;
                  }
                }
                else
                {
                  v78 = 2080LL;
                  v79 = 2088LL;
                }
                v95[7] = v77;
                v72 = *(_QWORD *)((char *)&v74->MxCsr + v78);
                ++*(_DWORD *)(v72 + 28);
                if ( *(_WORD *)v72 < *(_WORD *)(v72 + 16) )
                  goto LABEL_214;
                ++*(_DWORD *)(v72 + 32);
                v72 = *(_QWORD *)((char *)&v74->MxCsr + v79);
                goto LABEL_211;
              }
            }
LABEL_213:
            ExFreePoolWithTag((PVOID)v5, 0);
            goto LABEL_218;
          }
LABEL_253:
          KeBugCheckEx(0x44u, v5, 0x2762uLL, 0LL, 0LL);
        }
        IovFreeIrpPrivate(v5);
        goto LABEL_218;
      }
    }
    __fastfail(3u);
  }
  if ( (*v8 & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  if ( (*v8 & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd(v5 + 88, -1LL) )
      return;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  IoFreeIrp((PIRP)v5);
}
