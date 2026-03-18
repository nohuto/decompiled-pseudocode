/*
 * XREFs of IopfCompleteRequest @ 0x1402B59D0
 * Callers:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x140559770 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140A805EC (IovCompleteRequest.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     EtwTiLogInsertQueueUserApc @ 0x14024BD24 (EtwTiLogInsertQueueUserApc.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402A2260 (IopVerifyDeviceObjectOnStack.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KiSignalThread @ 0x1402F6ED0 (KiSignalThread.c)
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 *     IopCompleteIrpInFileObjectList @ 0x1403117B0 (IopCompleteIrpInFileObjectList.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140348640 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     PoDeviceReleaseIrp @ 0x1403A38BC (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1403A39B8 (PoDeviceAcquireIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     MiFreeMdlTracker @ 0x140584374 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140A80820 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  PIRP v2; // rsi
  unsigned __int8 v3; // r13
  __int64 v4; // rdx
  CHAR StackCount; // cl
  char CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v8; // r12
  int Flink; // r14d
  PIRP v10; // rdi
  UCHAR *p_Control; // rbx
  PIRP v12; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v14; // al
  unsigned __int8 v15; // r15
  PIRP v16; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  __int64 v21; // r8
  unsigned __int64 Information; // rax
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rbx
  __int64 v25; // rbx
  PVPB v26; // rbx
  _QWORD *FileObjectExtension; // rax
  __int64 *v28; // rsi
  __int64 v29; // rsi
  char v30; // al
  __int64 i; // rax
  int v32; // eax
  __int64 v33; // rcx
  char v34; // al
  __int64 (__fastcall *v35)(); // rax
  ULONG Flags; // esi
  int v37; // esi
  PIRP v38; // r13
  unsigned __int8 CurrentIrql; // di
  PETHREAD Thread; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  struct _LIST_ENTRY *v47; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  ULONG_PTR v57; // r13
  unsigned int v58; // r15d
  __int64 *v59; // rsi
  unsigned __int64 v60; // rdi
  __int64 v61; // r14
  __int64 *v62; // rdi
  ULONG_PTR v63; // r12
  _DWORD *v64; // r8
  unsigned __int64 v65; // r11
  ULONG_PTR v66; // rbx
  __int64 v67; // r9
  unsigned __int64 v68; // r10
  __int64 *v69; // r8
  __int64 v70; // rcx
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // edx
  unsigned __int8 v74; // cl
  _DWORD *v75; // r9
  __int64 v76; // rbx
  __int64 v77; // r12
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  BOOL v80; // eax
  int v81; // r14d
  unsigned __int64 v82; // rdi
  __int64 v83; // r15
  __int64 v84; // rsi
  __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  int IsZero; // eax
  __int64 v88; // rdx
  signed __int32 v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // edx
  ULONG v94; // eax
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  ULONG_PTR v97; // rdx
  PETHREAD v98; // r14
  unsigned __int8 v99; // r13
  volatile signed __int32 *v100; // rbx
  unsigned __int8 v101; // si
  _DWORD *v102; // r9
  struct _KPRCB *v103; // rdi
  _DWORD *v104; // rcx
  int v105; // eax
  _DWORD *v106; // rcx
  int v107; // eax
  struct _KPRCB *v108; // rcx
  _DWORD *v109; // rdx
  int v110; // eax
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  unsigned __int8 v115; // bl
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r9
  _DWORD *v118; // r8
  int v119; // eax
  PIRP v120; // rax
  CCHAR ApcEnvironment; // cl
  int v122; // r10d
  struct _FILE_OBJECT *v123; // rsi
  PIRP v124; // rdi
  __int64 v125; // rcx
  bool v126; // dl
  KPROCESSOR_MODE ApcMode; // cl
  __int64 v128; // rax
  __int64 v129; // r14
  char v130; // r9
  struct _KTHREAD *CurrentThread; // r8
  bool v132; // zf
  char v133; // r13
  unsigned __int8 v134; // r12
  _DWORD *v135; // r8
  struct _KPRCB *v136; // r15
  _DWORD *v137; // rcx
  int v138; // eax
  _DWORD *v139; // rcx
  int v140; // eax
  struct _LIST_ENTRY *v141; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v143; // rax
  __int64 (__fastcall *v144)(int, int, int, int, __int64); // r8
  PVOID *v145; // rcx
  char *v146; // r8
  _QWORD *v147; // rax
  PVOID ***v148; // rdx
  PVOID **j; // rax
  PVOID *v150; // rcx
  PVOID *v151; // r8
  PVOID **v152; // rax
  PVOID **v153; // rcx
  PVOID *v154; // rdx
  PVOID *v155; // rcx
  _KTHREAD *v156; // rbx
  __int64 v157; // rdx
  char v158; // bl
  volatile unsigned __int8 State; // al
  __int64 NextProcessor; // rcx
  struct _KPRCB *v161; // rax
  _KWAIT_STATUS_REGISTER v162; // al
  int v163; // ecx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  PVOID SystemArgument1; // rdi
  struct _KPRCB *v166; // rsi
  _DWORD *v167; // rcx
  int v168; // eax
  _DWORD *v169; // rcx
  int v170; // eax
  struct _LIST_ENTRY *v171; // rdx
  struct _LIST_ENTRY *v172; // rcx
  struct _KPRCB *v173; // rcx
  _DWORD *v174; // rdx
  int v175; // eax
  volatile unsigned __int8 v176; // al
  __int64 v177; // rcx
  _KWAIT_STATUS_REGISTER v178; // cl
  struct _KPRCB *v179; // rcx
  _DWORD *v180; // rdx
  int v181; // eax
  KIRQL v182; // al
  __int64 v183; // rcx
  KIRQL v184; // bl
  PETHREAD v185; // r10
  __int64 *v186; // rdx
  __int64 **v187; // r8
  signed __int32 v188[6]; // [rsp+8h] [rbp-89h] BYREF
  __int64 v189; // [rsp+38h] [rbp-59h]
  ULONG_PTR v190; // [rsp+48h] [rbp-49h]
  ULONG_PTR v191; // [rsp+50h] [rbp-41h] BYREF
  CHAR *AuxiliaryBuffer; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR v193; // [rsp+60h] [rbp-31h]
  int v194; // [rsp+68h] [rbp-29h] BYREF
  int v195; // [rsp+6Ch] [rbp-25h] BYREF
  int v196; // [rsp+70h] [rbp-21h] BYREF
  __int64 v197; // [rsp+78h] [rbp-19h]
  unsigned __int64 v198; // [rsp+80h] [rbp-11h]
  __int64 v199; // [rsp+88h] [rbp-9h] BYREF
  __int64 v200; // [rsp+90h] [rbp-1h] BYREF
  __int64 v201; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  PIRP Irp; // [rsp+F8h] [rbp+67h] BYREF
  unsigned __int8 v204; // [rsp+100h] [rbp+6Fh]
  int v205; // [rsp+108h] [rbp+77h]
  int v206; // [rsp+110h] [rbp+7Fh] BYREF

  v204 = a2;
  Irp = BugCheckParameter1;
  v2 = BugCheckParameter1;
  v3 = a2;
  v4 = 0LL;
  v191 = 0LL;
  AuxiliaryBuffer = 0LL;
  StackCount = BugCheckParameter1->StackCount;
  CurrentLocation = v2->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v2->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v2, 0x126BuLL, 0LL, 0LL);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(v2, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
    v2 = Irp;
    v4 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( (v2[1].Size & 0x200) != 0 )
    Flink = (int)v2[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v2->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v10 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    do
    {
      v10->PendingReturned = *p_Control & 1;
      v12 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v2[1].Size) |= 2u;
        v2[1].ThreadListEntry.Flink = Status;
        v12 = Irp;
      }
      v14 = *p_Control;
      if ( v12->IoStatus.Status < 0 )
      {
        if ( v14 < 0 )
          goto LABEL_21;
      }
      else if ( (v14 & 0x40) != 0 )
      {
        goto LABEL_21;
      }
      if ( !v12->Cancel || (v14 = *p_Control, (*p_Control & 0x20) == 0) )
      {
        if ( v12->PendingReturned && v12->CurrentLocation <= v12->StackCount )
          v12->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        *p_Control &= 2u;
        *((_WORD *)p_Control - 1) = 0;
        *(_QWORD *)(p_Control + 5) = 0LL;
        *(_QWORD *)(p_Control + 13) = 0LL;
        *(_QWORD *)(p_Control + 21) = 0LL;
        *(_QWORD *)(p_Control + 45) = 0LL;
        goto LABEL_30;
      }
LABEL_21:
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
        PoDeviceAcquireIrp(Irp, v15, DeviceObject);
        v16 = Irp;
      }
      if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD))(p_Control + 53))(
             DeviceObject,
             v16,
             *(_QWORD *)(p_Control + 61)) == -1073741802 )
        return;
      if ( v8 )
        PoDeviceReleaseIrp(Irp, v15, DeviceObject);
      v4 = 0LL;
LABEL_30:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v10 = Irp;
    }
    while ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) );
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
      IofCompleteRequest(MasterIrp, v3);
    return;
  }
  v21 = 4194817LL;
  if ( v10->IoStatus.Status == 260 )
  {
    Information = v10->IoStatus.Information;
    if ( Information > 2 )
    {
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v21, Information - 2684354563u) )
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
  if ( !v3 )
  {
    OriginalFileObject = v10->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v10->Flags & 0x400) == 0 )
      {
        Vpb = OriginalFileObject->Vpb;
        if ( (!Vpb || (v25 = (__int64)Vpb->DeviceObject) == 0)
          && ((OriginalFileObject->Flags & 0x800) != 0
           || (v26 = OriginalFileObject->DeviceObject->Vpb) == 0LL
           || (v25 = (__int64)v26->DeviceObject) == 0) )
        {
          v25 = (__int64)OriginalFileObject->DeviceObject;
        }
        if ( *(_QWORD *)(v25 + 24) )
        {
          FileObjectExtension = OriginalFileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            if ( FileObjectExtension != IopRevocationExtension )
            {
              v28 = (__int64 *)FileObjectExtension[2];
              if ( v28 )
              {
                v29 = *v28;
                if ( v29 )
                {
                  v30 = IopVerifyDeviceObjectOnStack(v25, v29, 0);
                  v10 = Irp;
                  if ( v30 )
                  {
LABEL_66:
                    v32 = *(_DWORD *)(v29 + 72);
                    if ( v32 == 8 || v32 == 20 )
                    {
                      v3 = 1;
                      v204 = 1;
                    }
                    goto LABEL_69;
                  }
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v25 + 24); i; i = *(_QWORD *)(i + 24) )
            v25 = i;
        }
        v29 = v25;
        goto LABEL_66;
      }
    }
  }
LABEL_69:
  v33 = (__int64)v10->Tail.Overlay.AuxiliaryBuffer;
  if ( v33 )
  {
    ExFreePoolWithTag((PVOID)v33, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v10 = Irp;
  }
  if ( EnableFeatureServicing_40851744 == 1
    || EnableFeatureServicing_40851744 && (v34 = FeatureServicing_40851744_EnableKey(v33, v4, v21), v10 = Irp, v34) )
  {
    v35 = IopFreeIrpExtension((__int64)v10, -1, 1);
    if ( v35
      && ((unsigned __int8 (__fastcall *)(PIRP *, PFILE_OBJECT, _QWORD))v35)(
           &Irp,
           Irp->Tail.Overlay.OriginalFileObject,
           v3) )
    {
      return;
    }
  }
  else
  {
    if ( (v10->AllocationFlags & 0x40) == 0 )
      goto LABEL_79;
    IopFreeIrpExtension((__int64)v10, -1, 1);
  }
  v10 = Irp;
LABEL_79:
  Flags = v10->Flags;
  if ( (Flags & 0x402) != 0 )
  {
    if ( (Flags & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(v10, v4, v21);
      KeInitializeApc(
        (_DWORD)Irp + 120,
        Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v3);
      return;
    }
    *(_OWORD *)&v10->UserIosb->Status = *(_OWORD *)&v10->IoStatus.Status;
    v37 = Flags & 0x42;
    if ( !v37 )
      goto LABEL_117;
    v38 = Irp;
    CurrentIrql = 0;
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[24]);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = v43[6];
            v43[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)&Thread[1].WaitBlockFill11[24], 0LL) )
        {
          v45 = CurrentPrcb->SchedulerAssist;
          if ( v45 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v45[6] - 1;
              v45[6] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Thread[1].WaitBlockFill11[24]);
        }
      }
    }
    v47 = v38->ThreadListEntry.Flink;
    p_ThreadListEntry = &v38->ThreadListEntry;
    Blink = v38->ThreadListEntry.Blink;
    if ( v47->Blink == &v38->ThreadListEntry && Blink->Flink == p_ThreadListEntry )
    {
      Blink->Flink = v47;
      v47->Blink = Blink;
      v38->ThreadListEntry.Blink = &v38->ThreadListEntry;
      p_ThreadListEntry->Flink = p_ThreadListEntry;
      if ( Thread )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread, 0LL);
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        if ( v51 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v52 = v51[6] - 1;
            v51[6] = v52;
            if ( !v52 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v53 = KeGetCurrentIrql();
            if ( v53 <= 0xFu && CurrentIrql <= 0xFu && v53 >= 2u )
            {
              v54 = KeGetCurrentPrcb();
              v55 = v54->SchedulerAssist;
              v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v132 = (v56 & v55[5]) == 0;
              v55[5] &= v56;
              if ( v132 )
                KiRemoveSystemWorkPriorityKick(v54);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeSetEvent(Irp->UserEvent, v204, 0);
LABEL_118:
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate((ULONG_PTR)Irp);
        else
          IopFreeIrp((ULONG_PTR)Irp);
        return;
      }
LABEL_117:
      KeSetEvent(Irp->UserEvent, v204, 0);
      if ( !v37 )
        return;
      goto LABEL_118;
    }
LABEL_422:
    __fastfail(3u);
  }
  v57 = (ULONG_PTR)v10->MdlAddress;
  v190 = v57;
  if ( v57 )
  {
    v33 = 512LL;
    do
    {
      v58 = *(__int16 *)(v57 + 10);
      if ( (*(_WORD *)(v57 + 10) & 2) != 0 )
      {
        v59 = (__int64 *)(v57 + 48);
        v197 = *(_QWORD *)(v57 + 16);
        if ( (v58 & 0x200) != 0 )
          MiRetardMdl(v57);
        v60 = (((*(_DWORD *)(v57 + 32) + *(_DWORD *)(v57 + 44)) & 0xFFF)
             + (unsigned __int64)*(unsigned int *)(v57 + 40)
             + 4095) >> 12;
        v198 = v60;
        if ( (v58 & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(v57 + 24), (PMDL)v57);
        if ( (MmTrackLockedPages & 1) != 0 )
          MiFreeMdlTracker(v57);
        v61 = 0LL;
        v199 = 0x3FFFFFFFFFLL;
        v21 = 1LL;
        v62 = (__int64 *)(v57 + 8 * v60 + 48);
        v206 = 1;
        v63 = KeGetCurrentIrql();
        v193 = v63;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v63 <= 0xFu )
        {
          v64 = KeGetCurrentPrcb()->SchedulerAssist;
          v64[5] |= (-1 << (v63 + 1)) & 4;
          v21 = 1LL;
        }
        v205 = (unsigned __int8)v63 + 1;
        do
        {
          v65 = *v59;
          if ( *v59 == -1 )
            break;
          v66 = 1LL;
          if ( v65 <= qword_140C50840 && _bittest64((const signed __int64 *)(48 * v65 - 0x21FFFFFFFFD8LL), 0x36u) )
          {
            MiProbeUnlockPage(48 * v65 - 0x220000000000LL, v58, &v199, &v206);
          }
          else
          {
            v67 = *v59;
            v68 = 512 - (*v59 & 0x1FF);
            if ( v68 > 1 )
            {
              v69 = v59 + 1;
              do
              {
                if ( v69 == v62 )
                  break;
                v70 = *v69;
                if ( *v69 == -1 )
                  break;
                if ( v70 != v67 + 1 )
                  break;
                ++v66;
                ++v69;
                v67 = v70;
              }
              while ( v66 < v68 );
            }
            MiDereferenceIoPages(0, *v59, v66);
          }
          ++v61;
          v59 += v66;
          if ( (v61 & 0x3F) == 0 && (unsigned __int8)v63 < 2u )
          {
            if ( v59 >= v62 )
              break;
            if ( KeShouldYieldProcessor() )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  v71 = KeGetCurrentPrcb();
                  v72 = v71->SchedulerAssist;
                  v73 = ~(unsigned __int16)(-1LL << v205);
                  v132 = (v73 & v72[5]) == 0;
                  v72[5] &= v73;
                  if ( v132 )
                    KiRemoveSystemWorkPriorityKick(v71);
                }
              }
              __writecr8((unsigned __int8)v63);
              v74 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v74 <= 0xFu )
              {
                v75 = KeGetCurrentPrcb()->SchedulerAssist;
                v75[5] |= (-1 << (v74 + 1)) & 4;
              }
            }
          }
          v21 = 1LL;
        }
        while ( v59 < v62 );
        v57 = v190;
        if ( v199 != 0x3FFFFFFFFFLL )
        {
          v76 = 48 * v199 - 0x220000000000LL;
          v77 = 0LL;
          v21 = 0x3FFFFFFFFFFFFFFFLL;
          if ( v206 == 2 )
          {
            v80 = 0;
            if ( (*(_BYTE *)(v76 + 34) & 7) == 6 && (*(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
            {
              v78 = *(_QWORD *)(v76 + 8) | 0x8000000000000000uLL;
              if ( v78 >= 0xFFFFF68000000000uLL && v78 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v79 = (__int64)(v78 << 25) >> 16;
                if ( v79 >= 0xFFFFF68000000000uLL && v79 <= 0xFFFFF6FFFFFFFFFFuLL )
                  v80 = 1;
              }
            }
            v81 = 3;
            if ( !v80 )
LABEL_424:
              KeBugCheckEx(
                0x1Au,
                0x41791uLL,
                48 * v199 - 0x220000000000LL,
                *(_QWORD *)(v76 + 8) | 0x8000000000000000uLL,
                *(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          }
          else
          {
            v81 = 1;
            if ( !v206 )
              v81 = 4;
          }
          if ( (*(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            goto LABEL_424;
          v82 = 0LL;
          v83 = 0LL;
          while ( 1 )
          {
            v84 = *(_QWORD *)(v76 + 40) & 0xFFFFFFFFFFLL;
            v194 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v194);
                while ( *(__int64 *)(v76 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) );
              v21 = 0x3FFFFFFFFFFFFFFFLL;
            }
            v85 = *(_QWORD *)(v76 + 24) ^ ((*(_QWORD *)(v76 + 24) - 0x10000LL) ^ *(_QWORD *)(v76 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v76 + 24) = v85;
            v86 = v85 & 0x3FFFFFFFFFFFFFFFLL;
            if ( v86 >= 0x10000 )
              break;
            if ( !v77 )
              v77 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v76 + 40) >> 43) & 0x3FFLL));
            ++v82;
            if ( !v86 )
            {
              IsZero = MiPfnShareCountIsZero(v76);
              v21 = 0x3FFFFFFFFFFFFFFFLL;
              if ( IsZero != 3 )
                ++v83;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v81 )
              goto LABEL_190;
            v76 = 48 * v84 - 0x220000000000LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_190:
          if ( v82 )
          {
            if ( (ULONG_PTR *)v77 != &MiSystemPartition )
              goto LABEL_202;
            v21 = (__int64)KeGetCurrentPrcb();
            v88 = *(int *)(v21 + 34460);
            if ( (_DWORD)v88 == -1 )
              goto LABEL_202;
            if ( v82 + v88 <= 0x100 )
            {
              do
              {
                if ( v82 >= 0x80000 )
                  break;
                v89 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 34460), v88 + v82, v88);
                v132 = (_DWORD)v88 == v89;
                LODWORD(v88) = v89;
                if ( v132 )
                  goto LABEL_203;
              }
              while ( v89 != -1 && v82 + v89 <= 0x100 );
            }
            if ( (int)v88 > 192
              && (_DWORD)v88 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 34460), 192, v88) )
            {
              v82 += (int)v88 - 192;
            }
            if ( v82 )
LABEL_202:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 16960), v82);
          }
LABEL_203:
          if ( v83 )
            MiReturnCommit(v77, v83);
          LOBYTE(v63) = v193;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v90 = KeGetCurrentIrql();
            if ( v90 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v90 >= 2u )
            {
              v91 = KeGetCurrentPrcb();
              v92 = v91->SchedulerAssist;
              v93 = ~(unsigned __int16)(-1LL << v205);
              v132 = (v93 & v92[5]) == 0;
              v21 = (unsigned int)v93 & v92[5];
              v92[5] = v21;
              if ( v132 )
                KiRemoveSystemWorkPriorityKick(v91);
            }
          }
        }
        __writecr8((unsigned __int8)v63);
        if ( v197 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v197 + 1280), -(__int64)v198);
        v33 = 512LL;
        *(_WORD *)(v57 + 10) &= 0xF6FDu;
      }
      v57 = *(_QWORD *)v57;
      v190 = v57;
    }
    while ( v57 );
    v10 = Irp;
  }
  if ( (v10->Flags & 0x2000) != 0 )
  {
    ObfDereferenceObject(v10->Tail.Overlay.Thread);
    v10 = Irp;
  }
  v94 = v10->Flags;
  if ( (v94 & 0x800) != 0 && !v10->PendingReturned )
  {
    if ( v10->IoStatus.Status == 260 )
    {
      v95 = v10->IoStatus.Information - 2684354563u;
      if ( v95 <= 0x16 )
      {
        v96 = 4194817LL;
        if ( _bittest64(&v96, v95) )
          v10->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
      }
    }
    return;
  }
  if ( (v94 & 0x200000) != 0 )
  {
    IopIoRingCompleteIrp(v10);
    return;
  }
  v97 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
  v98 = v10->Tail.Overlay.Thread;
  v191 = v97;
  if ( (unsigned int)EnableFeatureServicing_40851744 >= 2 )
  {
    FeatureServicing_40851744_EnableKey(v33, v97, v21);
    v10 = Irp;
  }
  v99 = v204;
  if ( (v10->Flags & 0x2000) != 0 )
  {
    if ( (unsigned __int8)IopCompleteIrpInFileObjectList(v10) )
      return;
    v10 = Irp;
  }
  if ( v98 )
  {
    v100 = (volatile signed __int32 *)&v98[1].WaitBlockFill11[24];
    v101 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v101 <= 0xFu )
    {
      v102 = KeGetCurrentPrcb()->SchedulerAssist;
      v102[5] |= (-1 << (v101 + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&v98[1].WaitBlockFill11[24]);
    }
    else
    {
      v103 = KeGetCurrentPrcb();
      v104 = v103->SchedulerAssist;
      if ( v104 )
      {
        if ( v103->NestingLevel <= 1u )
        {
          v105 = v104[6];
          v104[6] = v105 + 1;
          if ( v105 == -1 )
            KiRemoveSystemWorkPriorityKick(v103);
        }
      }
      if ( _interlockedbittestandset64(v100, 0LL) )
      {
        v106 = v103->SchedulerAssist;
        if ( v106 )
        {
          if ( v103->NestingLevel <= 1u )
          {
            v107 = v106[6] - 1;
            v106[6] = v107;
            if ( !v107 )
              KiRemoveSystemWorkPriorityKick(v103);
          }
        }
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v98[1].WaitBlockFill11[24]);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&v98[1].WaitBlockFill11[24], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v100, 0LL);
    v108 = KeGetCurrentPrcb();
    v109 = v108->SchedulerAssist;
    if ( v109 )
    {
      if ( v108->NestingLevel <= 1u )
      {
        v110 = v109[6] - 1;
        v109[6] = v110;
        if ( !v110 )
          KiRemoveSystemWorkPriorityKick(v108);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v111 = KeGetCurrentIrql();
        if ( v111 <= 0xFu && v101 <= 0xFu && v111 >= 2u )
        {
          v112 = KeGetCurrentPrcb();
          v113 = v112->SchedulerAssist;
          v114 = ~(unsigned __int16)(-1LL << (v101 + 1));
          v132 = (v114 & v113[5]) == 0;
          v113[5] &= v114;
          if ( v132 )
            KiRemoveSystemWorkPriorityKick(v112);
        }
      }
    }
    __writecr8(v101);
    v10 = Irp;
  }
  if ( v10->Cancel )
  {
    v182 = KeAcquireQueuedSpinLock(0xBuLL);
    v183 = IopDeadIrps;
    v184 = v182;
    v185 = Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_416:
      if ( v185 )
      {
        KeInitializeApc(
          (_DWORD)Irp + 120,
          (_DWORD)v185,
          Irp->ApcEnvironment,
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v191, AuxiliaryBuffer, v99);
        KeReleaseQueuedSpinLock(0xBuLL, v184);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v186 = *(__int64 **)v183;
        if ( (PIRP)(v183 - 32) == Irp )
          break;
        v183 = *(_QWORD *)v183;
        if ( v186 == &IopDeadIrps )
          goto LABEL_416;
      }
      v187 = *(__int64 ***)(v183 + 8);
      if ( v186[1] != v183 || *v187 != (__int64 *)v183 )
        goto LABEL_422;
      *v187 = v186;
      v186[1] = (__int64)v187;
      *(_QWORD *)(v183 + 8) = v183;
      *(_QWORD *)v183 = v183;
      ObfDereferenceObject(v185);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v184);
    IopDropIrp(Irp, v191);
    return;
  }
  if ( v98 == KeGetCurrentThread()
    && !KeGetCurrentThread()->SpecialApcDisable
    && KeAreInterruptsEnabled()
    && !KeGetCurrentIrql()
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v201 = 0LL;
    v200 = 1LL;
    v115 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(
      (_DWORD)Irp + 120,
      (unsigned int)&v201,
      (unsigned int)&v200,
      (unsigned int)&v191,
      (__int64)&AuxiliaryBuffer);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v116 = KeGetCurrentIrql();
        if ( v116 <= 0xFu && v115 <= 0xFu && v116 >= 2u )
        {
          v117 = KeGetCurrentPrcb();
          v118 = v117->SchedulerAssist;
          v119 = ~(unsigned __int16)(-1LL << (v115 + 1));
          v132 = (v119 & v118[5]) == 0;
          v118[5] &= v119;
          if ( v132 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
    }
    __writecr8(v115);
    return;
  }
  v120 = Irp;
  ApcEnvironment = Irp->ApcEnvironment;
  Irp->Tail.Apc.Type = 18;
  v120->Tail.Apc.Size = 88;
  if ( ApcEnvironment == 2 )
    ApcEnvironment = v98->ApcStateIndex;
  v120->Tail.Apc.ApcStateIndex = ApcEnvironment;
  v122 = 0;
  v120->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
  v120->Tail.Overlay.ListEntry.Flink = 0LL;
  v120->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
  *(_WORD *)((char *)&v120->Tail.CompletionKey + 81) = 0;
  v120->Tail.Overlay.ListEntry.Blink = 0LL;
  v120->Tail.Apc.SpareByte0 = 0;
  v120->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v98;
  v123 = (struct _FILE_OBJECT *)AuxiliaryBuffer;
  v124 = Irp;
  v190 = (ULONG_PTR)AuxiliaryBuffer;
  v193 = v191;
  v126 = 0;
  if ( EtwThreatIntProvRegHandle )
  {
    if ( (v125 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v125 + 96))
      && (*(_DWORD *)(v125 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v125 + 120) & 0x3000LL) == *(_QWORD *)(v125 + 120)
      || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
      && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0LL, 12288LL) )
    {
      v126 = 1;
    }
  }
  ApcMode = v124->Tail.Apc.ApcMode;
  v198 = (unsigned __int64)v124->Tail.Overlay.ListEntry.Blink;
  v128 = (__int64)v124->Tail.Overlay.ListEntry.Flink;
  LOBYTE(v205) = ApcMode != 0;
  v197 = v128;
  if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v124->Tail.Overlay.Thread != KeSpecialUserApcKernelRoutine
    || ApcMode )
  {
    v129 = (__int64)v124->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v130 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( ApcMode )
    {
      v132 = CurrentThread->Process == *(_KPROCESS **)(v129 + 544);
      goto LABEL_293;
    }
  }
  else
  {
    v129 = (__int64)v124->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v130 = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v132 = CurrentThread->ApcState.Process == *(_KPROCESS **)(v129 + 544);
LABEL_293:
  if ( v126 && !v132 && (ApcMode || v130) )
  {
    v133 = 1;
    ObfReferenceObjectWithTag((PVOID)v129, 0x5149654Bu);
    v122 = 0;
  }
  else
  {
    v133 = 0;
  }
  v134 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v134 <= 0xFu )
  {
    v135 = KeGetCurrentPrcb()->SchedulerAssist;
    v135[5] |= (-1 << (v134 + 1)) & 4;
  }
  v136 = KeGetCurrentPrcb();
  v195 = v122;
  while ( 1 )
  {
    v137 = v136->SchedulerAssist;
    if ( v137 )
    {
      if ( v136->NestingLevel <= 1u )
      {
        v138 = v137[6];
        v137[6] = v138 + 1;
        if ( v138 == -1 )
          KiRemoveSystemWorkPriorityKick(v136);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v129 + 64), 0LL) )
      break;
    v139 = v136->SchedulerAssist;
    if ( v139 )
    {
      if ( v136->NestingLevel <= 1u )
      {
        v140 = v139[6] - 1;
        v139[6] = v140;
        if ( !v140 )
          KiRemoveSystemWorkPriorityKick(v136);
      }
    }
    do
      KeYieldProcessorEx(&v195);
    while ( *(_QWORD *)(v129 + 64) );
  }
  if ( (*(_DWORD *)(v129 + 116) & 0x4000) == 0 || v124->Tail.Apc.Inserted )
  {
    v158 = 0;
    goto LABEL_405;
  }
  v132 = v124->Tail.Apc.ApcStateIndex == 0;
  v141 = v124->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
  v124->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v193;
  v124->Tail.Apc.Inserted = 1;
  v124->Tail.Overlay.OriginalFileObject = v123;
  if ( v132 && BYTE2(v141[36].Blink) )
  {
    p_Blink = &v141[37].Blink;
  }
  else
  {
    p_Blink = &v141[9].Blink;
    v124->Tail.Apc.ApcStateIndex = BYTE2(v141[36].Blink);
  }
  v143 = v124->Tail.Apc.ApcMode;
  if ( !v124->Tail.Overlay.ListEntry.Flink )
  {
    v153 = (PVOID **)&p_Blink[2 * v143];
    for ( j = (PVOID **)v153[1]; j != v153; j = (PVOID **)j[1] )
    {
      if ( !j[4] )
        break;
    }
    goto LABEL_337;
  }
  if ( !(_BYTE)v143 )
  {
LABEL_332:
    v150 = &v124->Tail.Overlay.DriverContext[2];
    v151 = (PVOID *)&p_Blink[2 * v143];
    v152 = (PVOID **)v151[1];
    if ( *v152 != v151 )
      goto LABEL_422;
    *v150 = v151;
    v124->Tail.Overlay.DriverContext[3] = v152;
    *v152 = v150;
    v151[1] = v150;
    goto LABEL_339;
  }
  v144 = (__int64 (__fastcall *)(int, int, int, int, __int64))v124->Tail.Overlay.Thread;
  if ( (char *)v144 != (char *)KiSchedulerApcTerminate )
  {
    if ( v144 == KeSpecialUserApcKernelRoutine )
    {
      v148 = (PVOID ***)&p_Blink[2 * v143];
      for ( j = *v148; j != (PVOID **)v148; j = (PVOID **)*j )
        ;
      BYTE2(v141[12].Flink) |= 1u;
LABEL_337:
      v154 = *j;
      v155 = &v124->Tail.Overlay.DriverContext[2];
      if ( (*j)[1] != j )
        goto LABEL_422;
      *v155 = v154;
      v124->Tail.Overlay.DriverContext[3] = j;
      v154[1] = v155;
      *j = v155;
      goto LABEL_339;
    }
    goto LABEL_332;
  }
  BYTE2(v141[12].Flink) |= 2u;
  v145 = &v124->Tail.Overlay.DriverContext[2];
  v146 = (char *)&p_Blink[2 * v143];
  v147 = *(_QWORD **)v146;
  if ( *(char **)(*(_QWORD *)v146 + 8LL) != v146 )
    goto LABEL_422;
  *v145 = v147;
  v124->Tail.Overlay.DriverContext[3] = v146;
  v147[1] = v145;
  *(_QWORD *)v146 = v145;
LABEL_339:
  v156 = v124->Tail.Apc.Thread;
  v157 = (unsigned __int8)v124->Tail.Apc.ApcMode;
  if ( v124->Tail.Apc.ApcStateIndex == v156->ApcStateIndex )
  {
    if ( v156 == v136->CurrentThread )
    {
      if ( !(_BYTE)v157
        && (!v156->WaitBlock[3].SpareLong || !v124->Tail.Overlay.ListEntry.Flink
                                          && !HIWORD(v156->WaitBlock[3].SpareLong)) )
      {
        v156->ApcState.KernelApcPending = 1;
        if ( v134 )
          HalRequestSoftwareInterrupt(1);
        else
          v156->MiscFlags |= 0x40u;
        v158 = 1;
        goto LABEL_405;
      }
    }
    else if ( (_BYTE)v157 )
    {
      if ( v156->WaitBlockFill6[68] == 5 && v156->WaitMode == 1 )
      {
        v178.Flags = (unsigned __int8)v156->WaitRegister;
        if ( (unsigned __int8)((v178.Flags & 7) - 3) > 1u
          && ((v156->MiscFlags & 0x10) != 0 || (v156->ApcState.UserApcPendingAll & 2) != 0) )
        {
          v156->WaitRegister.Flags = v178.Flags | 0x40;
          if ( (unsigned __int8)KiSignalThread(v136, v156, 192LL, 0LL) )
            v156->ApcState.UserApcPendingAll |= 2u;
        }
      }
    }
    else
    {
      v156->ApcState.KernelApcPending = 1;
      _InterlockedOr(v188, 0);
      State = v156->State;
      if ( State == 2 )
      {
        NextProcessor = v156->NextProcessor;
        LOBYTE(v157) = 1;
        LODWORD(NextProcessor) = NextProcessor & 0x7FFFFFFF;
        if ( KeGetPcr()->Prcb.Number == (_DWORD)NextProcessor )
        {
          KiRequestSoftwareInterrupt(0LL, 1);
        }
        else
        {
          v161 = KeGetCurrentPrcb();
          ++v161->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(NextProcessor, v157);
        }
        v158 = 1;
        goto LABEL_405;
      }
      if ( State == 5
        && !v156->WaitIrql
        && !v156->SpecialApcDisable
        && (!v124->Tail.Overlay.ListEntry.Flink || !v156->KernelApcDisable && !v156->ApcState.InProgressFlags) )
      {
        v162.Flags = (unsigned __int8)v156->WaitRegister;
        v163 = v162.Flags & 7;
        if ( v163 == 1 || v163 == 4 )
        {
          Queue = v156->Queue;
          if ( Queue )
          {
            if ( (Queue->Type & 0x7F) == 0x15 )
            {
              v156->QueuePriority = (unsigned __int8)v156->QueuePriority;
              _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (unsigned int)v156->QueuePriority);
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)&Queue[1].WaitListHead.Blink);
            }
          }
          SystemArgument1 = v156->SchedulerApc.SystemArgument1;
          if ( SystemArgument1 )
          {
            v166 = KeGetCurrentPrcb();
            v196 = 0;
            v167 = v166->SchedulerAssist;
            if ( v167 )
            {
              if ( v166->NestingLevel <= 1u )
              {
                v168 = v167[6];
                v167[6] = v168 + 1;
                if ( v168 == -1 )
                  KiRemoveSystemWorkPriorityKick(v166);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 8116, 0LL) )
            {
              v169 = v166->SchedulerAssist;
              if ( v169 )
              {
                if ( v166->NestingLevel <= 1u )
                {
                  v170 = v169[6] - 1;
                  v169[6] = v170;
                  if ( !v170 )
                    KiRemoveSystemWorkPriorityKick(v166);
                }
              }
              do
                KeYieldProcessorEx(&v196);
              while ( *((_QWORD *)SystemArgument1 + 4058) );
              KiSetVpThreadSpinLockCount((__int64)v166, 1);
            }
            if ( v156->SchedulerApc.SystemArgument1 )
            {
              v171 = v156->WaitListEntry.Flink;
              v172 = v156->WaitListEntry.Blink;
              if ( ($F25D3D660AD8E745B7A7BBA7740580AC *)v171->Blink != &v156->216
                || ($F25D3D660AD8E745B7A7BBA7740580AC *)v172->Flink != &v156->216 )
              {
                goto LABEL_422;
              }
              v172->Flink = v171;
              v171->Blink = v172;
              v156->SchedulerApc.SystemArgument1 = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)SystemArgument1 + 4058, 0LL);
            v173 = KeGetCurrentPrcb();
            v174 = v173->SchedulerAssist;
            if ( v174 )
            {
              if ( v173->NestingLevel <= 1u )
              {
                v175 = v174[6] - 1;
                v174[6] = v175;
                if ( !v175 )
                  KiRemoveSystemWorkPriorityKick(v173);
              }
            }
            v123 = (struct _FILE_OBJECT *)v190;
          }
          v176 = v156->State;
          if ( v176 == 1 )
          {
            v156->MiscFlags |= 2u;
          }
          else if ( v176 == 5 )
          {
            v177 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v156->WaitBlock[2].SpareLong);
            if ( v156->WaitMode )
              v156->UserWaitTime += v177;
            else
              v156->KernelWaitTime += v177;
          }
          v156->WaitBlockFill6[68] = 7;
          v156->WaitListEntry.Flink = (struct _LIST_ENTRY *)v136->DeferredReadyListHead.Next;
          v136->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v156->216;
          v156->WaitStatus = 256LL;
          v156->AbWaitObject = 0LL;
          v162.Flags = (unsigned __int8)v156->WaitRegister;
        }
        v156->WaitRegister.Flags = v162.Flags | 0x20;
        v158 = 1;
        goto LABEL_405;
      }
    }
  }
  v158 = 1;
LABEL_405:
  *(_QWORD *)(v129 + 64) = 0LL;
  v179 = KeGetCurrentPrcb();
  v180 = v179->SchedulerAssist;
  if ( v180 )
  {
    if ( v179->NestingLevel <= 1u )
    {
      v181 = v180[6] - 1;
      v180[6] = v181;
      if ( !v181 )
        KiRemoveSystemWorkPriorityKick(v179);
    }
  }
  KiExitDispatcher((__int64)v136, 0, 1, v204, v134);
  if ( v133 )
  {
    if ( v158 )
    {
      LOBYTE(v189) = v205;
      EtwTiLogInsertQueueUserApc(KeGetCurrentThread()->PreviousMode, v129, v197, v198, v193, v123, v189);
    }
    ObfDereferenceObjectWithTag((PVOID)v129, 0x5149654Bu);
  }
}
