/*
 * XREFs of IopfCompleteRequest @ 0x1402C9C40
 * Callers:
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14045FD5E (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140AC147C (IovCompleteRequest.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     PoDeviceReleaseIrp @ 0x14028DBAC (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x14028DC48 (PoDeviceAcquireIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x14028F440 (IopFreeCopyObjectsFromIrp.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402AF4D0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     KeInsertQueueApc @ 0x1402CC8D0 (KeInsertQueueApc.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140302E10 (IopVerifyDeviceObjectOnStack.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460830 (KiAcquireSpinLockInstrumented.c)
 *     IopDoesCompletionNeedsApc @ 0x140555A4C (IopDoesCompletionNeedsApc.c)
 *     IopIoRingCompleteIrp @ 0x140559B9C (IopIoRingCompleteIrp.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140AC16C0 (IovFreeIrpPrivate.c)
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
  ULONG v56; // edi
  ULONG_PTR v57; // rax
  ULONG_PTR v58; // rcx
  PETHREAD v59; // r13
  __int64 *v60; // rax
  __int64 v61; // r12
  unsigned __int8 v62; // r8
  __int64 v63; // rdi
  _DWORD *v64; // r11
  __int64 v65; // rdx
  signed __int64 *v66; // rdx
  char v67; // di
  unsigned int v68; // r10d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r13
  __int64 v70; // rcx
  _DWORD *v71; // r9
  struct _KPRCB *v72; // r15
  _KTHREAD *CurrentThread; // rsi
  unsigned __int8 IsThreadRunning; // al
  unsigned int v75; // edi
  _QWORD *v76; // r8
  _QWORD *v77; // r13
  _QWORD *v78; // r15
  _QWORD *v79; // rax
  char v80; // si
  __int64 v81; // rdi
  char v82; // al
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rdx
  _QWORD *v88; // rcx
  char v89; // al
  __int64 v90; // rcx
  struct _KPRCB *v91; // rdx
  int v92; // edx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v93; // rcx
  __int64 v94; // rax
  unsigned __int8 v95; // cl
  unsigned __int64 v96; // rbx
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r9
  _DWORD *v99; // r8
  int v100; // eax
  ULONG_PTR v101; // rdx
  IRP *v102; // rcx
  volatile signed __int32 *v103; // rsi
  unsigned __int8 v104; // r14
  _DWORD *v105; // r9
  __int64 v106; // rdi
  unsigned __int8 v107; // cl
  struct _KPRCB *v108; // r10
  _DWORD *v109; // r9
  int v110; // eax
  unsigned __int8 v111; // bl
  unsigned __int8 v112; // al
  struct _KPRCB *v113; // r9
  _DWORD *v114; // r8
  int v115; // eax
  PIRP v116; // rax
  CCHAR ApcEnvironment; // cl
  CHAR *v118; // r8
  ULONG_PTR v119; // rdx
  KIRQL v120; // di
  __int64 v121; // rdx
  PETHREAD v122; // r10
  __int64 *v123; // r8
  __int64 **v124; // rax
  signed __int32 v125[6]; // [rsp+8h] [rbp-89h] BYREF
  ULONG_PTR v126; // [rsp+48h] [rbp-49h] BYREF
  __int128 v127; // [rsp+50h] [rbp-41h] BYREF
  __int64 v128; // [rsp+60h] [rbp-31h]
  CHAR *AuxiliaryBuffer; // [rsp+68h] [rbp-29h] BYREF
  struct _KPRCB *v130; // [rsp+70h] [rbp-21h]
  _QWORD v131[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v132; // [rsp+88h] [rbp-9h]
  __int64 v133; // [rsp+90h] [rbp-1h] BYREF
  __int64 v134; // [rsp+98h] [rbp+7h] BYREF
  __int64 v135; // [rsp+A0h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  PIRP Irp; // [rsp+F8h] [rbp+67h] BYREF
  int v138; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned int v139; // [rsp+108h] [rbp+77h]
  int v140; // [rsp+110h] [rbp+7Fh] BYREF

  LOBYTE(v138) = a2;
  Irp = BugCheckParameter1;
  CurrentIrql = 0;
  v3 = BugCheckParameter1;
  StackCount = BugCheckParameter1->StackCount;
  v5 = a2;
  v126 = 0LL;
  AuxiliaryBuffer = 0LL;
  CurrentLocation = v3->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v3->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v3, 0x1345uLL, 0LL, 0LL);
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
        v5 = v138;
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
                      LOBYTE(v138) = 1;
                    }
                    else
                    {
                      v5 = v138;
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
      v5 = v138;
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
LABEL_301:
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
  v126 = v58;
  if ( (v56 & 0x200000) != 0 )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v10) && (!v10->Cancel || (v56 & 0x2000) != 0) )
    {
      IopIoRingCompleteIrp(v10);
      return;
    }
    goto LABEL_252;
  }
  if ( (v56 & 0x2000) == 0
    || (v133 = 0LL, v131[0] = 0LL, !v10->PendingReturned)
    && ((v10->IoStatus.Status & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(v58 + 80) & 0x2000000) != 0 && v10->IoStatus.Status >= 0) )
  {
LABEL_252:
    if ( v59 )
    {
      v103 = (volatile signed __int32 *)&v59[1].WaitBlockFill11[24];
      v104 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v104 <= 0xFu )
      {
        v105 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v104 == 2 )
          LODWORD(v106) = 4;
        else
          v106 = (-1LL << (v104 + 1)) & 4;
        v105[5] |= v106;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v59[1].WaitBlockFill11[24]);
      }
      else if ( _interlockedbittestandset64(v103, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v59[1].WaitBlockFill11[24]);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&v59[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v103, 0LL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v107 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v107 <= 0xFu && v104 <= 0xFu && v107 >= 2u )
        {
          v108 = KeGetCurrentPrcb();
          v109 = v108->SchedulerAssist;
          v110 = ~(unsigned __int16)(-1LL << (v104 + 1));
          v54 = (v110 & v109[5]) == 0;
          v109[5] &= v110;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v108);
        }
      }
      __writecr8(v104);
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
        v116 = Irp;
        ApcEnvironment = Irp->ApcEnvironment;
        Irp->Tail.Apc.Type = 18;
        v116->Tail.Apc.Size = 88;
        if ( ApcEnvironment == 2 )
          ApcEnvironment = v59->ApcStateIndex;
        v116->Tail.Apc.ApcStateIndex = ApcEnvironment;
        v118 = AuxiliaryBuffer;
        v116->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        v116->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        v119 = v126;
        v116->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v59;
        v116->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&v116->Tail.CompletionKey + 81) = 0;
        v116->Tail.Overlay.ListEntry.Blink = 0LL;
        v116->Tail.Apc.SpareByte0 = 0;
        KeInsertQueueApc(&Irp->Tail, v119, v118, v37);
      }
      else
      {
        v135 = 0LL;
        v134 = 1LL;
        v111 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((char **)&Irp->Tail, (__int64)&v135, &v134, &v126, &AuxiliaryBuffer);
        if ( (_DWORD)KiIrqlFlags )
        {
          v112 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v112 <= 0xFu && v111 <= 0xFu && v112 >= 2u )
          {
            v113 = KeGetCurrentPrcb();
            v114 = v113->SchedulerAssist;
            v115 = ~(unsigned __int16)(-1LL << (v111 + 1));
            v54 = (v115 & v114[5]) == 0;
            v114[5] &= v115;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v113);
          }
        }
        __writecr8(v111);
      }
      return;
    }
    v120 = KeAcquireQueuedSpinLock(0xBuLL);
    v121 = IopDeadIrps;
    v122 = Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_295:
      if ( v122 )
      {
        KeInitializeApc(
          (__int64)&Irp->Tail,
          (__int64)v122,
          Irp->ApcEnvironment,
          (__int64)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v126, AuxiliaryBuffer, v37);
        KeReleaseQueuedSpinLock(0xBuLL, v120);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v123 = *(__int64 **)v121;
        if ( (PIRP)(v121 - 32) == Irp )
          break;
        v121 = *(_QWORD *)v121;
        if ( v123 == &IopDeadIrps )
          goto LABEL_295;
      }
      v124 = *(__int64 ***)(v121 + 8);
      if ( v123[1] != v121 || *v124 != (__int64 *)v121 )
        goto LABEL_301;
      *v124 = v123;
      v123[1] = (__int64)v124;
      *(_QWORD *)(v121 + 8) = v121;
      *(_QWORD *)v121 = v121;
      ObfDereferenceObject(v122);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v120);
    v101 = v126;
    v102 = Irp;
LABEL_248:
    IopDropIrp(v102, v101);
    return;
  }
  v60 = *(__int64 **)(v126 + 176);
  if ( !v60 )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v10) )
    {
      IopCompleteRequest(
        (char **)&v10->Tail,
        (__int64)&v133,
        v131,
        (ULONG_PTR *)&v10->Tail.Overlay.OriginalFileObject,
        v131);
      return;
    }
    goto LABEL_252;
  }
  v127 = 0LL;
  v128 = 0LL;
  v61 = *v60;
  v10->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v60[1];
  v10->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v127 = 0LL;
  *((_QWORD *)&v127 + 1) = v61 + 64;
  v62 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v63) = 4;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
  {
    v64 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v62 == 2 )
      LODWORD(v65) = 4;
    else
      v65 = (-1LL << (v62 + 1)) & 4;
    v64[5] |= v65;
  }
  LOBYTE(v128) = v62;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v127, v61 + 64);
  }
  else
  {
    v66 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(v61 + 64), (__int64)&v127);
    if ( v66 )
      KxWaitForLockOwnerShip((signed __int64)&v127, v66);
  }
  v10->Flags |= 0x10000u;
  if ( *(_BYTE *)(v61 + 72) )
  {
    v67 = 1;
    goto LABEL_231;
  }
  v68 = (char)v138;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v10->Tail.Overlay.ListEntry;
  v139 = (char)v138;
  v70 = KeGetCurrentIrql();
  v132 = v70;
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)v70 <= 0xFu )
  {
    v71 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)v70 != 2 )
    {
      v70 = (unsigned int)(unsigned __int8)v70 + 1;
      v63 = (-1LL << v70) & 4;
    }
    v71[5] |= v63;
  }
  v72 = KeGetCurrentPrcb();
  v130 = v72;
  CurrentThread = v72->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(v72->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, &v10->Tail.CompletionKey + 6, IsThreadRunning);
    v68 = (char)v138;
  }
  if ( v68 )
  {
    if ( (*(_BYTE *)(v61 + 1) & 2) != 0 )
      v68 = 0;
    v139 = v68;
  }
  v75 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)v61, 7u) )
  {
    do
    {
      if ( (++v75 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70) )
      {
        HvlNotifyLongSpinWait(v75);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)v61 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v61, 7u) );
  }
  v76 = (_QWORD *)(v61 + 8);
  if ( (_QWORD *)*v76 != v76
    && *(_DWORD *)(v61 + 40) < *(_DWORD *)(v61 + 44)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v61 || CurrentThread->WaitReason != 15) )
  {
    v77 = (_QWORD *)*v76;
    while ( 1 )
    {
      v78 = v77;
      v77 = (_QWORD *)*v77;
      if ( *((_BYTE *)v78 + 16) != 3 )
      {
LABEL_225:
        v72 = v130;
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v10->Tail.Overlay.ListEntry;
        break;
      }
      v79 = (_QWORD *)v78[1];
      if ( (_QWORD *)v77[1] != v78 || (_QWORD *)*v79 != v78 )
        goto LABEL_301;
      *v79 = v77;
      v80 = 0;
      v77[1] = v79;
      v81 = v78[3];
      v138 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v81 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v138);
        while ( *(_QWORD *)(v81 + 64) );
      }
      if ( *(_BYTE *)(v81 + 388) == 5 )
      {
        v82 = *(_BYTE *)(v81 + 112);
        v83 = v82 & 7;
        if ( v83 == 1 || v83 == 4 )
        {
          v84 = *(_QWORD *)(v81 + 232);
          if ( v84 )
          {
            if ( (*(_BYTE *)v84 & 0x7F) == 0x15 )
            {
              v85 = (unsigned __int8)*(_DWORD *)(v81 + 540);
              *(_DWORD *)(v81 + 540) = v85;
              _InterlockedIncrement((volatile signed __int32 *)(v84 + 4 * v85 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v84 + 40));
            }
          }
          v86 = *(_QWORD *)(v81 + 712);
          if ( v86 )
          {
            v140 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 32464), 0LL) )
            {
              do
                KeYieldProcessorEx(&v140);
              while ( *(_QWORD *)(v86 + 32464) );
            }
            if ( *(_QWORD *)(v81 + 712) )
            {
              v87 = *(_QWORD *)(v81 + 216);
              v88 = *(_QWORD **)(v81 + 224);
              if ( *(_QWORD *)(v87 + 8) != v81 + 216 || *v88 != v81 + 216 )
                goto LABEL_301;
              *v88 = v87;
              *(_QWORD *)(v87 + 8) = v88;
              *(_QWORD *)(v81 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v86 + 32464), 0LL);
          }
          v89 = *(_BYTE *)(v81 + 388);
          if ( v89 == 1 )
          {
            *(_DWORD *)(v81 + 116) |= 2u;
          }
          else if ( v89 == 5 )
          {
            v90 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v81 + 436));
            if ( *(_BYTE *)(v81 + 391) )
              *(_QWORD *)(v81 + 1000) += v90;
            else
              *(_QWORD *)(v81 + 992) += v90;
          }
          v91 = v130;
          *(_BYTE *)(v81 + 388) = 7;
          *(_QWORD *)(v81 + 216) = v91->DeferredReadyListHead.Next;
          v91->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v81 + 216);
          *(_QWORD *)(v81 + 200) = &v10->Tail.Overlay.ListEntry;
          *(_QWORD *)(v81 + 976) = 0LL;
          goto LABEL_222;
        }
        if ( (*(_BYTE *)(v81 + 112) & 7) == 0 )
        {
          *(_BYTE *)(v81 + 112) = v82 & 0xF8 | 2;
          *(_QWORD *)(v81 + 200) = &v10->Tail.Overlay.ListEntry;
          *(_QWORD *)(v81 + 976) = 0LL;
          *((_BYTE *)v78 + 17) = 0;
LABEL_222:
          v80 = 1;
          goto LABEL_223;
        }
        if ( v83 == 5 )
        {
          *(_BYTE *)(v81 + 112) = v82 & 0xF8 | 6;
        }
        else if ( v83 == 3 )
        {
          *((_BYTE *)v78 + 17) = 2;
        }
      }
LABEL_223:
      *(_QWORD *)(v81 + 64) = 0LL;
      ++*((_BYTE *)v78 + 17);
      if ( v80 )
      {
        v72 = v130;
        v10->Tail.Overlay.ListEntry.Flink = 0LL;
        goto LABEL_230;
      }
      v76 = (_QWORD *)(v61 + 8);
      if ( v77 == (_QWORD *)(v61 + 8) )
        goto LABEL_225;
    }
  }
  v92 = *(_DWORD *)(v61 + 4);
  *(_DWORD *)(v61 + 4) = v92 + 1;
  v93 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v61 + 32);
  if ( *v93 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v61 + 24) )
    goto LABEL_301;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v61 + 24);
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v93;
  *v93 = p_ListEntry;
  *(_QWORD *)(v61 + 32) = p_ListEntry;
  if ( !v92 && (_QWORD *)*v76 != v76 )
    KiWakeOtherQueueWaiters(v72, v61);
LABEL_230:
  _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
  KiExitDispatcher((__int64)v72, 0, (_PROCESSOR_NUMBER)1, v139, v132);
  v67 = 0;
LABEL_231:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v127, retaddr);
  }
  else
  {
    _m_prefetchw(&v127);
    v94 = v127;
    if ( !(_QWORD)v127 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v127 + 1),
                         0LL,
                         (signed __int64)&v127) == &v127 )
        goto LABEL_239;
      v94 = KxWaitForLockChainValid(&v127);
    }
    *(_QWORD *)&v127 = 0LL;
    v95 = BYTE8(v127);
    if ( ((v95 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v94 + 8), *((__int64 *)&v127 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v125, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v94 + 8) >> 5) & 0x7F], 0LL));
    }
  }
LABEL_239:
  v96 = (unsigned __int8)v128;
  if ( (_DWORD)KiIrqlFlags )
  {
    v97 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v97 <= 0xFu && (unsigned __int8)v128 <= 0xFu && v97 >= 2u )
    {
      v98 = KeGetCurrentPrcb();
      v99 = v98->SchedulerAssist;
      v100 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v128 + 1));
      v54 = (v100 & v99[5]) == 0;
      v99[5] &= v100;
      if ( v54 )
        KiRemoveSystemWorkPriorityKick(v98);
    }
  }
  __writecr8(v96);
  if ( v67 )
  {
    v101 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
    v102 = v10;
    goto LABEL_248;
  }
}
