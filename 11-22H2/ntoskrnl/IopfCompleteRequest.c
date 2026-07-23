/*
 * XREFs of IopfCompleteRequest @ 0x1402C9980
 * Callers:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14045F2FE (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140AC248C (IovCompleteRequest.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250E00 (KxWaitForSpinLockAndAcquire.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     IopDropIrp @ 0x14028CCA8 (IopDropIrp.c)
 *     PoDeviceReleaseIrp @ 0x14028D7FC (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x14028D898 (PoDeviceAcquireIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14028F090 (IopFreeCopyObjectsFromIrp.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF1E0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402AF210 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402AF700 (IopDequeueIrpFromThread.c)
 *     KeInitializeApc @ 0x1402BE6A0 (KeInitializeApc.c)
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140302B80 (IopVerifyDeviceObjectOnStack.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     Feature_3108017466__private_IsEnabledDeviceUsage @ 0x14040F61C (Feature_3108017466__private_IsEnabledDeviceUsage.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045FDD0 (KiAcquireSpinLockInstrumented.c)
 *     IopDoesCompletionNeedsApc @ 0x14055542C (IopDoesCompletionNeedsApc.c)
 *     IopIoRingCompleteIrp @ 0x14055957C (IopIoRingCompleteIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056EE70 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405718E8 (KiReleaseSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140AC26D0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  unsigned __int8 CurrentIrql; // bl
  PIRP v3; // rsi
  CHAR StackCount; // cl
  unsigned __int8 v5; // r15
  char CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v8; // r13
  int Flink; // r12d
  PIRP v10; // r14
  UCHAR *p_Control; // rdi
  PIRP v12; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v14; // al
  char v15; // r15
  PIRP v16; // rcx
  PDEVICE_OBJECT DeviceObject; // r14
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rdi
  struct _MDL *Next; // rbx
  unsigned __int64 Information; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rdi
  PDEVICE_OBJECT v26; // rdi
  PVPB v27; // rdi
  _QWORD *FileObjectExtension; // rax
  PDEVICE_OBJECT *v29; // rsi
  PDEVICE_OBJECT v30; // rsi
  char v31; // al
  struct _DEVICE_OBJECT *i; // rax
  ULONG DeviceType; // eax
  PCHAR v34; // rcx
  char (__fastcall *v35)(__int64 *, __int64, unsigned int); // rdi
  __int64 v36; // rsi
  unsigned int v37; // r12d
  ULONG v38; // esi
  int v39; // esi
  PIRP v40; // r13
  PETHREAD Thread; // r14
  _DWORD *SchedulerAssist; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  ULONG Flags; // eax
  __int64 p_Thread; // rdi
  struct _LIST_ENTRY *v47; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v50; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v52; // r8
  int v53; // eax
  bool v54; // zf
  PMDL v55; // rdi
  ULONG v56; // eax
  ULONG_PTR v57; // rax
  ULONG_PTR v58; // rdi
  PETHREAD v59; // r13
  int IsEnabledDeviceUsage; // eax
  __int64 *v61; // rax
  __int64 v62; // r12
  unsigned __int8 v63; // r8
  __int64 v64; // rdi
  _DWORD *v65; // r11
  __int64 v66; // rdx
  signed __int64 *v67; // rdx
  char v68; // di
  unsigned int v69; // r10d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r13
  __int64 v71; // rcx
  _DWORD *v72; // r9
  struct _KPRCB *v73; // r15
  _KTHREAD *CurrentThread; // rsi
  unsigned __int8 IsThreadRunning; // al
  unsigned int v76; // edi
  _QWORD *v77; // r8
  _QWORD *v78; // r13
  _QWORD *v79; // r15
  _QWORD *v80; // rax
  char v81; // si
  __int64 v82; // rdi
  char v83; // al
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdx
  _QWORD *v89; // rcx
  char v90; // al
  __int64 v91; // rcx
  struct _KPRCB *v92; // rdx
  int v93; // edx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v94; // rcx
  __int64 v95; // rax
  unsigned __int8 v96; // cl
  unsigned __int64 v97; // rbx
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r9
  _DWORD *v100; // r8
  int v101; // eax
  ULONG_PTR v102; // rdx
  IRP *v103; // rcx
  volatile signed __int32 *v104; // rsi
  unsigned __int8 v105; // r14
  _DWORD *v106; // r9
  __int64 v107; // rdi
  unsigned __int8 v108; // cl
  struct _KPRCB *v109; // r10
  _DWORD *v110; // r9
  int v111; // eax
  unsigned __int8 v112; // bl
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r9
  _DWORD *v115; // r8
  int v116; // eax
  PIRP v117; // rax
  CCHAR ApcEnvironment; // cl
  CHAR *v119; // r8
  ULONG_PTR v120; // rdx
  KIRQL v121; // di
  __int64 v122; // rdx
  PETHREAD v123; // r10
  __int64 *v124; // r8
  __int64 **v125; // rax
  signed __int32 v126[6]; // [rsp+8h] [rbp-89h] BYREF
  ULONG_PTR v127; // [rsp+48h] [rbp-49h] BYREF
  __int128 v128; // [rsp+50h] [rbp-41h] BYREF
  __int64 v129; // [rsp+60h] [rbp-31h]
  CHAR *AuxiliaryBuffer; // [rsp+68h] [rbp-29h] BYREF
  struct _KPRCB *v131; // [rsp+70h] [rbp-21h]
  _QWORD v132[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v133; // [rsp+88h] [rbp-9h]
  __int64 v134; // [rsp+90h] [rbp-1h] BYREF
  __int64 v135; // [rsp+98h] [rbp+7h] BYREF
  __int64 v136; // [rsp+A0h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  PIRP Irp; // [rsp+F8h] [rbp+67h] BYREF
  int v139; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned int v140; // [rsp+108h] [rbp+77h]
  int v141; // [rsp+110h] [rbp+7Fh] BYREF

  LOBYTE(v139) = a2;
  Irp = BugCheckParameter1;
  CurrentIrql = 0;
  v3 = BugCheckParameter1;
  StackCount = BugCheckParameter1->StackCount;
  v5 = a2;
  v127 = 0LL;
  AuxiliaryBuffer = 0LL;
  CurrentLocation = v3->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v3->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v3, 0x1346uLL, 0LL, 0LL);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp((__int64)v3, CurrentStackLocation->MinorFunction, (__int64)CurrentStackLocation->DeviceObject);
    v3 = Irp;
  }
  else
  {
    v8 = 0;
  }
  if ( (v3[1].Size & 0x200) != 0 )
    Flink = (int)v3[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v3->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v10 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v10->PendingReturned = *p_Control & 1;
      v12 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v3[1].Size) |= 2u;
        v3[1].ThreadListEntry.Flink = Status;
        v12 = Irp;
      }
      v14 = *p_Control;
      if ( v12->IoStatus.Status < 0 )
      {
        if ( v14 < 0 )
          goto LABEL_17;
      }
      else if ( (v14 & 0x40) != 0 )
      {
        goto LABEL_17;
      }
      if ( v12->Cancel )
      {
        v14 = *p_Control;
        if ( (*p_Control & 0x20) != 0 )
        {
LABEL_17:
          v15 = *(p_Control - 2);
          *p_Control = v14 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v16 = Irp;
          if ( Irp->CurrentLocation == Irp->StackCount + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v8 )
          {
            PoDeviceAcquireIrp((__int64)Irp, v15, (__int64)DeviceObject);
            v16 = Irp;
          }
          if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD))(p_Control + 53))(
                 DeviceObject,
                 v16,
                 *(_QWORD *)(p_Control + 61)) == -1073741802 )
            return;
          if ( v8 )
            PoDeviceReleaseIrp((__int64)Irp, v15, (__int64)DeviceObject);
          goto LABEL_32;
        }
      }
      if ( v12->PendingReturned && v12->CurrentLocation <= v12->StackCount )
        v12->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_32:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v10 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v5 = v139;
        break;
      }
    }
  }
  if ( (v10->Flags & 8) != 0 )
  {
    MdlAddress = v10->MdlAddress;
    MasterIrp = v10->AssociatedIrp.MasterIrp;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    IoFreeIrp(v10);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v5);
    return;
  }
  if ( v10->IoStatus.Status == 260 )
  {
    Information = v10->IoStatus.Information;
    if ( Information > 2 )
    {
      v22 = Information - 2684354563u;
      if ( Information - 2684354563u <= 0x16 && (v23 = 4194817LL, _bittest64(&v23, v22)) )
      {
        AuxiliaryBuffer = v10->Tail.Overlay.AuxiliaryBuffer;
        v10->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v10->IoStatus.Status = -1073741191;
      }
      v10 = Irp;
    }
  }
  if ( !v5 )
  {
    OriginalFileObject = v10->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v10->Flags & 0x400) == 0 )
      {
        Vpb = OriginalFileObject->Vpb;
        if ( (!Vpb || (v26 = Vpb->DeviceObject) == 0LL)
          && ((OriginalFileObject->Flags & 0x800) != 0
           || (v27 = OriginalFileObject->DeviceObject->Vpb) == 0LL
           || (v26 = v27->DeviceObject) == 0LL) )
        {
          v26 = OriginalFileObject->DeviceObject;
        }
        if ( v26->AttachedDevice )
        {
          FileObjectExtension = OriginalFileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            if ( FileObjectExtension != IopRevocationExtension )
            {
              v29 = (PDEVICE_OBJECT *)FileObjectExtension[2];
              if ( v29 )
              {
                v30 = *v29;
                if ( v30 )
                {
                  v31 = IopVerifyDeviceObjectOnStack(v26, v30, 0LL);
                  v10 = Irp;
                  if ( v31 )
                  {
LABEL_64:
                    DeviceType = v30->DeviceType;
                    if ( DeviceType == 8 || DeviceType == 20 )
                    {
                      v5 = 1;
                      LOBYTE(v139) = 1;
                    }
                    else
                    {
                      v5 = v139;
                    }
                    goto LABEL_68;
                  }
                }
              }
            }
          }
          for ( i = v26->AttachedDevice; i; i = i->AttachedDevice )
            v26 = i;
        }
        v30 = v26;
        goto LABEL_64;
      }
    }
  }
LABEL_68:
  v34 = v10->Tail.Overlay.AuxiliaryBuffer;
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v10 = Irp;
  }
  v35 = 0LL;
  v36 = *((_QWORD *)&v10->Tail.CompletionKey + 10);
  if ( (v10->AllocationFlags & 0x80u) != 0 )
  {
    v10->AllocationFlags &= ~0x80u;
    *((_QWORD *)&v10->Tail.CompletionKey + 10) = 0LL;
    goto LABEL_72;
  }
  if ( !v36 )
    goto LABEL_73;
  if ( (v10->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v36 + 2) & 0x20) != 0 )
    *(_QWORD *)(v36 + 40) = 0LL;
  v44 = *((_QWORD *)&v10->Tail.CompletionKey + 10);
  if ( (v10->AllocationFlags & 0x80u) == 0 && v44 && _bittest16((const signed __int16 *)(v44 + 2), 9u) )
  {
    Flags = v10->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      IopFreeCopyObjectsFromIrp((__int64)v10);
      v10->PendingReturned = 1;
    }
    else if ( (Flags & 0x100) != 0 )
    {
      v35 = IopCopyCompleteReadIrp;
    }
  }
  *(_WORD *)(v36 + 2) = 0;
  if ( (v10->AllocationFlags & 0x40) != 0 )
  {
    ExFreePoolWithTag((PVOID)v36, 0x58707249u);
    v10->AllocationFlags &= ~0x40u;
    *((_QWORD *)&v10->Tail.CompletionKey + 10) = 0LL;
  }
  if ( !v35 )
  {
LABEL_72:
    v10 = Irp;
LABEL_73:
    v37 = v5;
    goto LABEL_74;
  }
  v37 = v5;
  if ( v35((__int64 *)&Irp, (__int64)Irp->Tail.Overlay.OriginalFileObject, v5) )
    return;
  v10 = Irp;
LABEL_74:
  v38 = v10->Flags;
  if ( (v38 & 0x402) != 0 )
  {
    if ( (v38 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(v10);
      KeInitializeApc(
        (__int64)&Irp->Tail,
        (__int64)Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v37);
      return;
    }
    *(_OWORD *)&v10->UserIosb->Status = *(_OWORD *)&v10->IoStatus.Status;
    v39 = v38 & 0x42;
    if ( !v39 )
      goto LABEL_117;
    v40 = Irp;
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v43) = 4;
        else
          v43 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v43;
      }
      p_Thread = (__int64)&Thread[1].WaitBlock[0].Thread;
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
      v5 = v139;
    }
    else
    {
      p_Thread = 1496LL;
    }
    v47 = v40->ThreadListEntry.Flink;
    p_ThreadListEntry = &v40->ThreadListEntry;
    Blink = v40->ThreadListEntry.Blink;
    if ( v47->Blink == &v40->ThreadListEntry && Blink->Flink == p_ThreadListEntry )
    {
      Blink->Flink = v47;
      v47->Blink = Blink;
      v40->ThreadListEntry.Blink = &v40->ThreadListEntry;
      p_ThreadListEntry->Flink = p_ThreadListEntry;
      if ( Thread )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(p_Thread, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)p_Thread, 0LL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v50 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v50 <= 0xFu && CurrentIrql <= 0xFu && v50 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v52 = CurrentPrcb->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v54 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        KeSetEvent(Irp->UserEvent, v5, 0);
LABEL_118:
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate((ULONG_PTR)Irp);
        else
          IopFreeIrp((ULONG_PTR)Irp);
        return;
      }
LABEL_117:
      KeSetEvent(Irp->UserEvent, v5, 0);
      if ( !v39 )
        return;
      goto LABEL_118;
    }
LABEL_304:
    __fastfail(3u);
  }
  v55 = v10->MdlAddress;
  if ( v55 )
  {
    do
    {
      if ( (v55->MdlFlags & 2) != 0 )
        MmUnlockPages(v55);
      v55 = v55->Next;
    }
    while ( v55 );
    v10 = Irp;
  }
  if ( (v10->Flags & 0x2000) != 0 )
  {
    ObfDereferenceObject(v10->Tail.Overlay.Thread);
    v10 = Irp;
  }
  v56 = v10->Flags;
  if ( (v56 & 0x800) != 0 && !v10->PendingReturned )
  {
    if ( v10->IoStatus.Status == 260 )
    {
      v57 = v10->IoStatus.Information;
      if ( v57 == 2684354563 || v57 == 2684354572 || v57 == 2684354585 )
        v10->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
    }
    return;
  }
  v58 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
  v59 = v10->Tail.Overlay.Thread;
  v127 = v58;
  if ( (v56 & 0x200000) != 0 )
  {
    IsEnabledDeviceUsage = Feature_3108017466__private_IsEnabledDeviceUsage();
    v10 = Irp;
    if ( IsEnabledDeviceUsage )
    {
      if ( !(unsigned __int8)IopDoesCompletionNeedsApc(Irp) && (!v10->Cancel || (v10->Flags & 0x2000) != 0) )
        goto LABEL_139;
    }
    else if ( !(unsigned __int8)IopDoesCompletionNeedsApc(Irp) )
    {
LABEL_139:
      IopIoRingCompleteIrp(v10);
      return;
    }
    goto LABEL_255;
  }
  if ( (v56 & 0x2000) == 0
    || (v134 = 0LL, v132[0] = 0LL, !v10->PendingReturned)
    && ((v10->IoStatus.Status & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(v58 + 80) & 0x2000000) != 0 && v10->IoStatus.Status >= 0) )
  {
LABEL_255:
    if ( v59 )
    {
      v104 = (volatile signed __int32 *)&v59[1].WaitBlockFill11[24];
      v105 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v105 <= 0xFu )
      {
        v106 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v105 == 2 )
          LODWORD(v107) = 4;
        else
          v107 = (-1LL << (v105 + 1)) & 4;
        v106[5] |= v107;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v59[1].WaitBlockFill11[24]);
      }
      else if ( _interlockedbittestandset64(v104, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v59[1].WaitBlockFill11[24]);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&v59[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v104, 0LL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v108 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v108 <= 0xFu && v105 <= 0xFu && v108 >= 2u )
        {
          v109 = KeGetCurrentPrcb();
          v110 = v109->SchedulerAssist;
          v111 = ~(unsigned __int16)(-1LL << (v105 + 1));
          v54 = (v111 & v110[5]) == 0;
          v110[5] &= v111;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v109);
        }
      }
      __writecr8(v105);
      v10 = Irp;
    }
    if ( !v10->Cancel )
    {
      if ( v59 != KeGetCurrentThread()
        || KeGetCurrentThread()->SpecialApcDisable
        || !KeAreInterruptsEnabled()
        || KeGetCurrentIrql()
        || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        v117 = Irp;
        ApcEnvironment = Irp->ApcEnvironment;
        Irp->Tail.Apc.Type = 18;
        v117->Tail.Apc.Size = 88;
        if ( ApcEnvironment == 2 )
          ApcEnvironment = v59->ApcStateIndex;
        v117->Tail.Apc.ApcStateIndex = ApcEnvironment;
        v119 = AuxiliaryBuffer;
        v117->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        v117->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        v120 = v127;
        v117->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v59;
        v117->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&v117->Tail.CompletionKey + 81) = 0;
        v117->Tail.Overlay.ListEntry.Blink = 0LL;
        v117->Tail.Apc.SpareByte0 = 0;
        KeInsertQueueApc(&Irp->Tail, v120, v119, v37);
      }
      else
      {
        v136 = 0LL;
        v135 = 1LL;
        v112 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((ULONG_PTR *)&Irp->Tail, (__int64)&v136, &v135, &v127, &AuxiliaryBuffer);
        if ( (_DWORD)KiIrqlFlags )
        {
          v113 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v113 <= 0xFu && v112 <= 0xFu && v113 >= 2u )
          {
            v114 = KeGetCurrentPrcb();
            v115 = v114->SchedulerAssist;
            v116 = ~(unsigned __int16)(-1LL << (v112 + 1));
            v54 = (v116 & v115[5]) == 0;
            v115[5] &= v116;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v114);
          }
        }
        __writecr8(v112);
      }
      return;
    }
    v121 = KeAcquireQueuedSpinLock(0xBuLL);
    v122 = IopDeadIrps;
    v123 = Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_298:
      if ( v123 )
      {
        KeInitializeApc(
          (__int64)&Irp->Tail,
          (__int64)v123,
          Irp->ApcEnvironment,
          (__int64)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v127, AuxiliaryBuffer, v37);
        KeReleaseQueuedSpinLock(0xBuLL, v121);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v124 = *(__int64 **)v122;
        if ( (PIRP)(v122 - 32) == Irp )
          break;
        v122 = *(_QWORD *)v122;
        if ( v124 == &IopDeadIrps )
          goto LABEL_298;
      }
      v125 = *(__int64 ***)(v122 + 8);
      if ( v124[1] != v122 || *v125 != (__int64 *)v122 )
        goto LABEL_304;
      *v125 = v124;
      v124[1] = (__int64)v125;
      *(_QWORD *)(v122 + 8) = v122;
      *(_QWORD *)v122 = v122;
      ObfDereferenceObject(v123);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v121);
    v102 = v127;
    v103 = Irp;
LABEL_251:
    IopDropIrp(v103, v102);
    return;
  }
  v61 = *(__int64 **)(v127 + 176);
  if ( !v61 )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v10) )
    {
      IopCompleteRequest(
        (ULONG_PTR *)&v10->Tail,
        (__int64)&v134,
        v132,
        (ULONG_PTR *)&v10->Tail.Overlay.OriginalFileObject,
        v132);
      return;
    }
    goto LABEL_255;
  }
  v128 = 0LL;
  v129 = 0LL;
  v62 = *v61;
  v10->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v61[1];
  v10->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v128 = 0LL;
  *((_QWORD *)&v128 + 1) = v62 + 64;
  v63 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v64) = 4;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v63 <= 0xFu )
  {
    v65 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v63 == 2 )
      LODWORD(v66) = 4;
    else
      v66 = (-1LL << (v63 + 1)) & 4;
    v65[5] |= v66;
  }
  LOBYTE(v129) = v63;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v128, v62 + 64);
  }
  else
  {
    v67 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v62 + 64), (__int64)&v128);
    if ( v67 )
      KxWaitForLockOwnerShip((signed __int64)&v128, v67);
  }
  v10->Flags |= 0x10000u;
  if ( *(_BYTE *)(v62 + 72) )
  {
    v68 = 1;
    goto LABEL_234;
  }
  v69 = (char)v139;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v10->Tail.Overlay.ListEntry;
  v140 = (char)v139;
  v71 = KeGetCurrentIrql();
  v133 = v71;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v71 <= 0xFu )
  {
    v72 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)v71 != 2 )
    {
      v71 = (unsigned int)(unsigned __int8)v71 + 1;
      v64 = (-1LL << v71) & 4;
    }
    v72[5] |= v64;
  }
  v73 = KeGetCurrentPrcb();
  v131 = v73;
  CurrentThread = v73->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(v73->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, &v10->Tail.CompletionKey + 6, IsThreadRunning);
    v69 = (char)v139;
  }
  if ( v69 )
  {
    if ( (*(_BYTE *)(v62 + 1) & 2) != 0 )
      v69 = 0;
    v140 = v69;
  }
  v76 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)v62, 7u) )
  {
    do
    {
      if ( (++v76 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v71) )
      {
        HvlNotifyLongSpinWait(v76);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)v62 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v62, 7u) );
  }
  v77 = (_QWORD *)(v62 + 8);
  if ( (_QWORD *)*v77 != v77
    && *(_DWORD *)(v62 + 40) < *(_DWORD *)(v62 + 44)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v62 || CurrentThread->WaitReason != 15) )
  {
    v78 = (_QWORD *)*v77;
    while ( 1 )
    {
      v79 = v78;
      v78 = (_QWORD *)*v78;
      if ( *((_BYTE *)v79 + 16) != 3 )
      {
LABEL_228:
        v73 = v131;
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v10->Tail.Overlay.ListEntry;
        break;
      }
      v80 = (_QWORD *)v79[1];
      if ( (_QWORD *)v78[1] != v79 || (_QWORD *)*v80 != v79 )
        goto LABEL_304;
      *v80 = v78;
      v81 = 0;
      v78[1] = v80;
      v82 = v79[3];
      v139 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v82 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v139);
        while ( *(_QWORD *)(v82 + 64) );
      }
      if ( *(_BYTE *)(v82 + 388) == 5 )
      {
        v83 = *(_BYTE *)(v82 + 112);
        v84 = v83 & 7;
        if ( v84 == 1 || v84 == 4 )
        {
          v85 = *(_QWORD *)(v82 + 232);
          if ( v85 )
          {
            if ( (*(_BYTE *)v85 & 0x7F) == 0x15 )
            {
              v86 = (unsigned __int8)*(_DWORD *)(v82 + 540);
              *(_DWORD *)(v82 + 540) = v86;
              _InterlockedIncrement((volatile signed __int32 *)(v85 + 4 * v86 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v85 + 40));
            }
          }
          v87 = *(_QWORD *)(v82 + 712);
          if ( v87 )
          {
            v141 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 32464), 0LL) )
            {
              do
                KeYieldProcessorEx(&v141);
              while ( *(_QWORD *)(v87 + 32464) );
            }
            if ( *(_QWORD *)(v82 + 712) )
            {
              v88 = *(_QWORD *)(v82 + 216);
              v89 = *(_QWORD **)(v82 + 224);
              if ( *(_QWORD *)(v88 + 8) != v82 + 216 || *v89 != v82 + 216 )
                goto LABEL_304;
              *v89 = v88;
              *(_QWORD *)(v88 + 8) = v89;
              *(_QWORD *)(v82 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v87 + 32464), 0LL);
          }
          v90 = *(_BYTE *)(v82 + 388);
          if ( v90 == 1 )
          {
            *(_DWORD *)(v82 + 116) |= 2u;
          }
          else if ( v90 == 5 )
          {
            v91 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v82 + 436));
            if ( *(_BYTE *)(v82 + 391) )
              *(_QWORD *)(v82 + 1000) += v91;
            else
              *(_QWORD *)(v82 + 992) += v91;
          }
          v92 = v131;
          *(_BYTE *)(v82 + 388) = 7;
          *(_QWORD *)(v82 + 216) = v92->DeferredReadyListHead.Next;
          v92->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v82 + 216);
          *(_QWORD *)(v82 + 200) = &v10->Tail.Overlay.ListEntry;
          *(_QWORD *)(v82 + 976) = 0LL;
          goto LABEL_225;
        }
        if ( (*(_BYTE *)(v82 + 112) & 7) == 0 )
        {
          *(_BYTE *)(v82 + 112) = v83 & 0xF8 | 2;
          *(_QWORD *)(v82 + 200) = &v10->Tail.Overlay.ListEntry;
          *(_QWORD *)(v82 + 976) = 0LL;
          *((_BYTE *)v79 + 17) = 0;
LABEL_225:
          v81 = 1;
          goto LABEL_226;
        }
        if ( v84 == 5 )
        {
          *(_BYTE *)(v82 + 112) = v83 & 0xF8 | 6;
        }
        else if ( v84 == 3 )
        {
          *((_BYTE *)v79 + 17) = 2;
        }
      }
LABEL_226:
      *(_QWORD *)(v82 + 64) = 0LL;
      ++*((_BYTE *)v79 + 17);
      if ( v81 )
      {
        v73 = v131;
        v10->Tail.Overlay.ListEntry.Flink = 0LL;
        goto LABEL_233;
      }
      v77 = (_QWORD *)(v62 + 8);
      if ( v78 == (_QWORD *)(v62 + 8) )
        goto LABEL_228;
    }
  }
  v93 = *(_DWORD *)(v62 + 4);
  *(_DWORD *)(v62 + 4) = v93 + 1;
  v94 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v62 + 32);
  if ( *v94 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v62 + 24) )
    goto LABEL_304;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v62 + 24);
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v94;
  *v94 = p_ListEntry;
  *(_QWORD *)(v62 + 32) = p_ListEntry;
  if ( !v93 && (_QWORD *)*v77 != v77 )
    KiWakeOtherQueueWaiters(v73, v62);
LABEL_233:
  _InterlockedAnd((volatile signed __int32 *)v62, 0xFFFFFF7F);
  KiExitDispatcher((__int64)v73, 0, (_PROCESSOR_NUMBER)1, v140, v133);
  v68 = 0;
LABEL_234:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v128, retaddr);
  }
  else
  {
    _m_prefetchw(&v128);
    v95 = v128;
    if ( !(_QWORD)v128 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v128 + 1),
                         0LL,
                         (signed __int64)&v128) == &v128 )
        goto LABEL_242;
      v95 = KxWaitForLockChainValid(&v128);
    }
    *(_QWORD *)&v128 = 0LL;
    v96 = BYTE8(v128);
    if ( ((v96 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v95 + 8), *((__int64 *)&v128 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v126, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v95 + 8) >> 5) & 0x7F], 0LL));
    }
  }
LABEL_242:
  v97 = (unsigned __int8)v129;
  if ( (_DWORD)KiIrqlFlags )
  {
    v98 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v98 <= 0xFu && (unsigned __int8)v129 <= 0xFu && v98 >= 2u )
    {
      v99 = KeGetCurrentPrcb();
      v100 = v99->SchedulerAssist;
      v101 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v129 + 1));
      v54 = (v101 & v100[5]) == 0;
      v100[5] &= v101;
      if ( v54 )
        KiRemoveSystemWorkPriorityKick(v99);
    }
  }
  __writecr8(v97);
  if ( v68 )
  {
    v102 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
    v103 = v10;
    goto LABEL_251;
  }
}
