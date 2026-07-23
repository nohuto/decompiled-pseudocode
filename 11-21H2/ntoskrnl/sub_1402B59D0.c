/*
 * XREFs of sub_1402B59D0 @ 0x1402B59D0
 * Callers:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140559770 @ 0x140559770 (sub_140559770.c)
 *     sub_140A805EC @ 0x140A805EC (sub_140A805EC.c)
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_14024BD24 @ 0x14024BD24 (sub_14024BD24.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402A2260 @ 0x1402A2260 (sub_1402A2260.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 *     sub_1403117B0 @ 0x1403117B0 (sub_1403117B0.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_140348640 @ 0x140348640 (sub_140348640.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_1403A38BC @ 0x1403A38BC (sub_1403A38BC.c)
 *     sub_1403A39B8 @ 0x1403A39B8 (sub_1403A39B8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_140584374 @ 0x140584374 (sub_140584374.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A80820 @ 0x140A80820 (sub_140A80820.c)
 */

void __fastcall sub_1402B59D0(IRP *BugCheckParameter1, unsigned __int8 a2)
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
  ULONG Flags; // esi
  int v36; // esi
  PIRP v37; // r13
  unsigned __int8 CurrentIrql; // di
  PETHREAD Thread; // r14
  __int64 v40; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  struct _LIST_ENTRY *v46; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  __int64 v54; // r8
  int v55; // eax
  ULONG_PTR v56; // r13
  unsigned int v57; // r15d
  __int64 *v58; // rsi
  unsigned __int64 v59; // rdi
  __int64 v60; // r14
  __int64 *v61; // rdi
  ULONG_PTR v62; // r12
  __int64 v63; // r8
  unsigned __int64 v64; // r11
  ULONG_PTR v65; // rbx
  __int64 v66; // r9
  unsigned __int64 v67; // r10
  __int64 *v68; // r8
  __int64 v69; // rcx
  struct _KPRCB *v70; // r10
  __int64 v71; // r9
  int v72; // edx
  unsigned __int8 v73; // cl
  __int64 v74; // r9
  __int64 v75; // rbx
  __int64 v76; // r12
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rcx
  BOOL v79; // eax
  int v80; // r14d
  unsigned __int64 v81; // rdi
  __int64 v82; // r15
  __int64 v83; // rsi
  __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  signed __int32 v88; // eax
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  __int64 v91; // r9
  int v92; // edx
  ULONG v93; // eax
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  ULONG_PTR v96; // rdx
  PETHREAD v97; // r14
  unsigned __int8 v98; // r13
  volatile signed __int32 *v99; // rbx
  unsigned __int8 v100; // si
  __int64 v101; // r9
  struct _KPRCB *v102; // rdi
  __int64 v103; // rcx
  int v104; // eax
  __int64 v105; // rcx
  int v106; // eax
  struct _KPRCB *v107; // rcx
  __int64 v108; // rdx
  int v109; // eax
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  __int64 v112; // r9
  int v113; // eax
  unsigned __int8 v114; // bl
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r9
  __int64 v117; // r8
  int v118; // eax
  PIRP v119; // rax
  CCHAR ApcEnvironment; // cl
  int v121; // r10d
  struct _FILE_OBJECT *v122; // rsi
  PIRP v123; // rdi
  __int64 v124; // rcx
  bool v125; // dl
  KPROCESSOR_MODE ApcMode; // cl
  __int64 v127; // rax
  __int64 v128; // r14
  char v129; // r9
  struct _KTHREAD *CurrentThread; // r8
  bool v131; // zf
  char v132; // r13
  unsigned __int8 v133; // r12
  __int64 v134; // r8
  struct _KPRCB *v135; // r15
  __int64 v136; // rcx
  int v137; // eax
  __int64 v138; // rcx
  int v139; // eax
  struct _LIST_ENTRY *v140; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v142; // rax
  __int64 (__fastcall *v143)(int, int, int, int, __int64); // r8
  PVOID *v144; // rcx
  char *v145; // r8
  _QWORD *v146; // rax
  PVOID ***v147; // rdx
  PVOID **j; // rax
  PVOID *v149; // rcx
  PVOID *v150; // r8
  PVOID **v151; // rax
  PVOID **v152; // rcx
  PVOID *v153; // rdx
  PVOID *v154; // rcx
  struct _LIST_ENTRY *v155; // rbx
  __int64 v156; // rdx
  char v157; // bl
  char v158; // al
  __int64 Blink_low; // rcx
  struct _KPRCB *v160; // rax
  char v161; // al
  int v162; // ecx
  struct _LIST_ENTRY *v163; // rcx
  struct _LIST_ENTRY *v164; // rdi
  struct _KPRCB *v165; // rsi
  __int64 v166; // rcx
  int v167; // eax
  __int64 v168; // rcx
  int v169; // eax
  struct _LIST_ENTRY *v170; // rdx
  struct _LIST_ENTRY *v171; // rcx
  struct _KPRCB *v172; // rcx
  __int64 v173; // rdx
  int v174; // eax
  char v175; // al
  __int64 v176; // rcx
  char v177; // cl
  struct _KPRCB *v178; // rcx
  __int64 v179; // rdx
  int v180; // eax
  KIRQL v181; // al
  __int64 v182; // rcx
  KIRQL v183; // bl
  PETHREAD v184; // r10
  __int64 *v185; // rdx
  __int64 **v186; // r8
  signed __int32 v187[6]; // [rsp+8h] [rbp-89h] BYREF
  __int64 v188; // [rsp+38h] [rbp-59h]
  ULONG_PTR v189; // [rsp+48h] [rbp-49h]
  ULONG_PTR v190; // [rsp+50h] [rbp-41h] BYREF
  CHAR *AuxiliaryBuffer; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR v192; // [rsp+60h] [rbp-31h]
  int v193; // [rsp+68h] [rbp-29h] BYREF
  int v194; // [rsp+6Ch] [rbp-25h] BYREF
  int v195; // [rsp+70h] [rbp-21h] BYREF
  __int64 v196; // [rsp+78h] [rbp-19h]
  unsigned __int64 v197; // [rsp+80h] [rbp-11h]
  __int64 v198; // [rsp+88h] [rbp-9h] BYREF
  __int64 v199; // [rsp+90h] [rbp-1h] BYREF
  __int64 v200; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  PIRP Irp; // [rsp+F8h] [rbp+67h] BYREF
  unsigned __int8 v203; // [rsp+100h] [rbp+6Fh]
  int v204; // [rsp+108h] [rbp+77h]
  int v205; // [rsp+110h] [rbp+7Fh] BYREF

  v203 = a2;
  Irp = BugCheckParameter1;
  v2 = BugCheckParameter1;
  v3 = a2;
  v4 = 0LL;
  v190 = 0LL;
  AuxiliaryBuffer = 0LL;
  StackCount = BugCheckParameter1->StackCount;
  CurrentLocation = v2->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v2->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v2, 0x126BuLL, 0LL, 0LL);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v8 = 1;
    sub_1403A38BC(v2, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
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
        sub_1403A39B8(Irp, v15, DeviceObject);
        v16 = Irp;
      }
      if ( (unsigned int)sub_14042A5E0(DeviceObject, v16) == -1073741802 )
        return;
      if ( v8 )
        sub_1403A38BC(Irp, v15, DeviceObject);
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
            if ( FileObjectExtension != off_140C06A80 )
            {
              v28 = (__int64 *)FileObjectExtension[2];
              if ( v28 )
              {
                v29 = *v28;
                if ( v29 )
                {
                  v30 = sub_1402A2260(v25, v29, 0);
                  v10 = Irp;
                  if ( v30 )
                  {
LABEL_66:
                    v32 = *(_DWORD *)(v29 + 72);
                    if ( v32 == 8 || v32 == 20 )
                    {
                      v3 = 1;
                      v203 = 1;
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
  if ( dword_140C0959C == 1 || dword_140C0959C && (v34 = sub_14065863C(v33, v4, v21), v10 = Irp, v34) )
  {
    if ( sub_14020B888((__int64)v10, -1, 1)
      && (unsigned __int8)sub_14042A5E0(&Irp, Irp->Tail.Overlay.OriginalFileObject) )
    {
      return;
    }
  }
  else
  {
    if ( (v10->AllocationFlags & 0x40) == 0 )
      goto LABEL_79;
    sub_14020B888((__int64)v10, -1, 1);
  }
  v10 = Irp;
LABEL_79:
  Flags = v10->Flags;
  if ( (Flags & 0x402) != 0 )
  {
    if ( (Flags & 0x440) == 0 )
    {
      sub_1403489B0(v10, v4, v21);
      KeInitializeApc(
        (_DWORD)Irp + 120,
        Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (unsigned int)sub_14025A250,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v3);
      return;
    }
    *(_OWORD *)&v10->UserIosb->Status = *(_OWORD *)&v10->IoStatus.Status;
    v36 = Flags & 0x42;
    if ( !v36 )
      goto LABEL_117;
    v37 = Irp;
    CurrentIrql = 0;
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v40 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v40 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A310((char *)Thread + 1496);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v42 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v42 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v43 = *(_DWORD *)(v42 + 24);
            *(_DWORD *)(v42 + 24) = v43 + 1;
            if ( v43 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)Thread + 374, 0LL) )
        {
          v44 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v44 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v45 = *(_DWORD *)(v44 + 24) - 1;
              *(_DWORD *)(v44 + 24) = v45;
              if ( !v45 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140211E70((volatile signed __int32 *)Thread + 374);
        }
      }
    }
    v46 = v37->ThreadListEntry.Flink;
    p_ThreadListEntry = &v37->ThreadListEntry;
    Blink = v37->ThreadListEntry.Blink;
    if ( v46->Blink == &v37->ThreadListEntry && Blink->Flink == p_ThreadListEntry )
    {
      Blink->Flink = v46;
      v46->Blink = Blink;
      v37->ThreadListEntry.Blink = &v37->ThreadListEntry;
      p_ThreadListEntry->Flink = p_ThreadListEntry;
      if ( Thread )
      {
        if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          sub_14056E8CC((char *)Thread + 1496, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)Thread + 187, 0LL);
        v49 = KeGetCurrentPrcb();
        v50 = *((_QWORD *)v49 + 4375);
        if ( v50 )
        {
          if ( *((_BYTE *)v49 + 32) <= 1u )
          {
            v51 = *(_DWORD *)(v50 + 24) - 1;
            *(_DWORD *)(v50 + 24) = v51;
            if ( !v51 )
              sub_140418E4C(v49);
          }
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = *((_QWORD *)v53 + 4375);
              v55 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v131 = (v55 & *(_DWORD *)(v54 + 20)) == 0;
              *(_DWORD *)(v54 + 20) &= v55;
              if ( v131 )
                sub_140418E4C(v53);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeSetEvent(Irp->UserEvent, v203, 0);
LABEL_118:
        if ( dword_140D06C3C )
          sub_140A80820((ULONG_PTR)Irp);
        else
          sub_140348640((ULONG_PTR)Irp);
        return;
      }
LABEL_117:
      KeSetEvent(Irp->UserEvent, v203, 0);
      if ( !v36 )
        return;
      goto LABEL_118;
    }
LABEL_422:
    __fastfail(3u);
  }
  v56 = (ULONG_PTR)v10->MdlAddress;
  v189 = v56;
  if ( v56 )
  {
    v33 = 512LL;
    do
    {
      v57 = *(__int16 *)(v56 + 10);
      if ( (*(_WORD *)(v56 + 10) & 2) != 0 )
      {
        v58 = (__int64 *)(v56 + 48);
        v196 = *(_QWORD *)(v56 + 16);
        if ( (v57 & 0x200) != 0 )
          sub_140584530(v56);
        v59 = (((*(_DWORD *)(v56 + 32) + *(_DWORD *)(v56 + 44)) & 0xFFF)
             + (unsigned __int64)*(unsigned int *)(v56 + 40)
             + 4095) >> 12;
        v197 = v59;
        if ( (v57 & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(v56 + 24), (PMDL)v56);
        if ( (dword_140D06994 & 1) != 0 )
          sub_140584374(v56);
        v60 = 0LL;
        v198 = 0x3FFFFFFFFFLL;
        v21 = 1LL;
        v61 = (__int64 *)(v56 + 8 * v59 + 48);
        v205 = 1;
        v62 = KeGetCurrentIrql();
        v192 = v62;
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v62 <= 0xFu )
        {
          v63 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v63 + 20) |= (-1 << (v62 + 1)) & 4;
          v21 = 1LL;
        }
        v204 = (unsigned __int8)v62 + 1;
        do
        {
          v64 = *v58;
          if ( *v58 == -1 )
            break;
          v65 = 1LL;
          if ( v64 <= qword_140C50840 && _bittest64((const signed __int64 *)(48 * v64 - 0x21FFFFFFFFD8LL), 0x36u) )
          {
            sub_1402B7320(48 * v64 - 0x220000000000LL, v57, &v198, &v205);
          }
          else
          {
            v66 = *v58;
            v67 = 512 - (*v58 & 0x1FF);
            if ( v67 > 1 )
            {
              v68 = v58 + 1;
              do
              {
                if ( v68 == v61 )
                  break;
                v69 = *v68;
                if ( *v68 == -1 )
                  break;
                if ( v69 != v66 + 1 )
                  break;
                ++v65;
                ++v68;
                v66 = v69;
              }
              while ( v65 < v67 );
            }
            sub_140215AA8(0, *v58, v65);
          }
          ++v60;
          v58 += v65;
          if ( (v60 & 0x3F) == 0 && (unsigned __int8)v62 < 2u )
          {
            if ( v58 >= v61 )
              break;
            if ( KeShouldYieldProcessor() )
            {
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  v70 = KeGetCurrentPrcb();
                  v71 = *((_QWORD *)v70 + 4375);
                  v72 = ~(unsigned __int16)(-1LL << v204);
                  v131 = (v72 & *(_DWORD *)(v71 + 20)) == 0;
                  *(_DWORD *)(v71 + 20) &= v72;
                  if ( v131 )
                    sub_140418E4C(v70);
                }
              }
              __writecr8((unsigned __int8)v62);
              v73 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v73 <= 0xFu )
              {
                v74 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v74 + 20) |= (-1 << (v73 + 1)) & 4;
              }
            }
          }
          v21 = 1LL;
        }
        while ( v58 < v61 );
        v56 = v189;
        if ( v198 != 0x3FFFFFFFFFLL )
        {
          v75 = 48 * v198 - 0x220000000000LL;
          v76 = 0LL;
          v21 = 0x3FFFFFFFFFFFFFFFLL;
          if ( v205 == 2 )
          {
            v79 = 0;
            if ( (*(_BYTE *)(v75 + 34) & 7) == 6 && (*(_QWORD *)(v75 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
            {
              v77 = *(_QWORD *)(v75 + 8) | 0x8000000000000000uLL;
              if ( v77 >= 0xFFFFF68000000000uLL && v77 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v78 = (__int64)(v77 << 25) >> 16;
                if ( v78 >= 0xFFFFF68000000000uLL && v78 <= 0xFFFFF6FFFFFFFFFFuLL )
                  v79 = 1;
              }
            }
            v80 = 3;
            if ( !v79 )
LABEL_424:
              KeBugCheckEx(
                0x1Au,
                0x41791uLL,
                48 * v198 - 0x220000000000LL,
                *(_QWORD *)(v75 + 8) | 0x8000000000000000uLL,
                *(_QWORD *)(v75 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          }
          else
          {
            v80 = 1;
            if ( !v205 )
              v80 = 4;
          }
          if ( (*(_QWORD *)(v75 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
            goto LABEL_424;
          v81 = 0LL;
          v82 = 0LL;
          while ( 1 )
          {
            v83 = *(_QWORD *)(v75 + 40) & 0xFFFFFFFFFFLL;
            v193 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  sub_1402F32E0(&v193);
                while ( *(__int64 *)(v75 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) );
              v21 = 0x3FFFFFFFFFFFFFFFLL;
            }
            v84 = *(_QWORD *)(v75 + 24) ^ ((*(_QWORD *)(v75 + 24) - 0x10000LL) ^ *(_QWORD *)(v75 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v75 + 24) = v84;
            v85 = v84 & 0x3FFFFFFFFFFFFFFFLL;
            if ( v85 >= 0x10000 )
              break;
            if ( !v76 )
              v76 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v75 + 40) >> 43) & 0x3FFLL));
            ++v81;
            if ( !v85 )
            {
              v86 = sub_1402BF640(v75);
              v21 = 0x3FFFFFFFFFFFFFFFLL;
              if ( v86 != 3 )
                ++v82;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v80 )
              goto LABEL_190;
            v75 = 48 * v83 - 0x220000000000LL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_190:
          if ( v81 )
          {
            if ( (ULONG_PTR *)v76 != &StartContext )
              goto LABEL_202;
            v21 = (__int64)KeGetCurrentPrcb();
            v87 = *(int *)(v21 + 34460);
            if ( (_DWORD)v87 == -1 )
              goto LABEL_202;
            if ( v81 + v87 <= 0x100 )
            {
              do
              {
                if ( v81 >= 0x80000 )
                  break;
                v88 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 34460), v87 + v81, v87);
                v131 = (_DWORD)v87 == v88;
                LODWORD(v87) = v88;
                if ( v131 )
                  goto LABEL_203;
              }
              while ( v88 != -1 && v81 + v88 <= 0x100 );
            }
            if ( (int)v87 > 192
              && (_DWORD)v87 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 34460), 192, v87) )
            {
              v81 += (int)v87 - 192;
            }
            if ( v81 )
LABEL_202:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 16960), v81);
          }
LABEL_203:
          if ( v82 )
            sub_14028CE10(v76, v82);
          LOBYTE(v62) = v192;
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v89 = KeGetCurrentIrql();
            if ( v89 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v89 >= 2u )
            {
              v90 = KeGetCurrentPrcb();
              v91 = *((_QWORD *)v90 + 4375);
              v92 = ~(unsigned __int16)(-1LL << v204);
              v131 = (v92 & *(_DWORD *)(v91 + 20)) == 0;
              v21 = (unsigned int)v92 & *(_DWORD *)(v91 + 20);
              *(_DWORD *)(v91 + 20) = v21;
              if ( v131 )
                sub_140418E4C(v90);
            }
          }
        }
        __writecr8((unsigned __int8)v62);
        if ( v196 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v196 + 1280), -(__int64)v197);
        v33 = 512LL;
        *(_WORD *)(v56 + 10) &= 0xF6FDu;
      }
      v56 = *(_QWORD *)v56;
      v189 = v56;
    }
    while ( v56 );
    v10 = Irp;
  }
  if ( (v10->Flags & 0x2000) != 0 )
  {
    ObfDereferenceObject(v10->Tail.Overlay.Thread);
    v10 = Irp;
  }
  v93 = v10->Flags;
  if ( (v93 & 0x800) != 0 && !v10->PendingReturned )
  {
    if ( v10->IoStatus.Status == 260 )
    {
      v94 = v10->IoStatus.Information - 2684354563u;
      if ( v94 <= 0x16 )
      {
        v95 = 4194817LL;
        if ( _bittest64(&v95, v94) )
          v10->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
      }
    }
    return;
  }
  if ( (v93 & 0x200000) != 0 )
  {
    sub_140559FA8(v10);
    return;
  }
  v96 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
  v97 = v10->Tail.Overlay.Thread;
  v190 = v96;
  if ( (unsigned int)dword_140C0959C >= 2 )
  {
    sub_14065863C(v33, v96, v21);
    v10 = Irp;
  }
  v98 = v203;
  if ( (v10->Flags & 0x2000) != 0 )
  {
    if ( (unsigned __int8)sub_1403117B0(v10) )
      return;
    v10 = Irp;
  }
  if ( v97 )
  {
    v99 = (volatile signed __int32 *)((char *)v97 + 1496);
    v100 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v100 <= 0xFu )
    {
      v101 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v101 + 20) |= (-1 << (v100 + 1)) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A310((char *)v97 + 1496);
    }
    else
    {
      v102 = KeGetCurrentPrcb();
      v103 = *((_QWORD *)v102 + 4375);
      if ( v103 )
      {
        if ( *((_BYTE *)v102 + 32) <= 1u )
        {
          v104 = *(_DWORD *)(v103 + 24);
          *(_DWORD *)(v103 + 24) = v104 + 1;
          if ( v104 == -1 )
            sub_140418E4C(v102);
        }
      }
      if ( _interlockedbittestandset64(v99, 0LL) )
      {
        v105 = *((_QWORD *)v102 + 4375);
        if ( v105 )
        {
          if ( *((_BYTE *)v102 + 32) <= 1u )
          {
            v106 = *(_DWORD *)(v105 + 24) - 1;
            *(_DWORD *)(v105 + 24) = v106;
            if ( !v106 )
              sub_140418E4C(v102);
          }
        }
        sub_140211E70((volatile signed __int32 *)v97 + 374);
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14056E8CC((char *)v97 + 1496, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v99, 0LL);
    v107 = KeGetCurrentPrcb();
    v108 = *((_QWORD *)v107 + 4375);
    if ( v108 )
    {
      if ( *((_BYTE *)v107 + 32) <= 1u )
      {
        v109 = *(_DWORD *)(v108 + 24) - 1;
        *(_DWORD *)(v108 + 24) = v109;
        if ( !v109 )
          sub_140418E4C(v107);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v110 = KeGetCurrentIrql();
        if ( v110 <= 0xFu && v100 <= 0xFu && v110 >= 2u )
        {
          v111 = KeGetCurrentPrcb();
          v112 = *((_QWORD *)v111 + 4375);
          v113 = ~(unsigned __int16)(-1LL << (v100 + 1));
          v131 = (v113 & *(_DWORD *)(v112 + 20)) == 0;
          *(_DWORD *)(v112 + 20) &= v113;
          if ( v131 )
            sub_140418E4C(v111);
        }
      }
    }
    __writecr8(v100);
    v10 = Irp;
  }
  if ( v10->Cancel )
  {
    v181 = KeAcquireQueuedSpinLock(0xBuLL);
    v182 = qword_140C471A0;
    v183 = v181;
    v184 = Irp->Tail.Overlay.Thread;
    if ( (__int64 *)qword_140C471A0 == &qword_140C471A0 )
    {
LABEL_416:
      if ( v184 )
      {
        KeInitializeApc(
          (_DWORD)Irp + 120,
          (_DWORD)v184,
          Irp->ApcEnvironment,
          (unsigned int)sub_140347E10,
          (__int64)sub_140933A70,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v190, AuxiliaryBuffer, v98);
        KeReleaseQueuedSpinLock(0xBuLL, v183);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v185 = *(__int64 **)v182;
        if ( (PIRP)(v182 - 32) == Irp )
          break;
        v182 = *(_QWORD *)v182;
        if ( v185 == &qword_140C471A0 )
          goto LABEL_416;
      }
      v186 = *(__int64 ***)(v182 + 8);
      if ( v185[1] != v182 || *v186 != (__int64 *)v182 )
        goto LABEL_422;
      *v186 = v185;
      v185[1] = (__int64)v186;
      *(_QWORD *)(v182 + 8) = v182;
      *(_QWORD *)v182 = v182;
      ObfDereferenceObject(v184);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v183);
    sub_140234D58(Irp, v190);
    return;
  }
  if ( v97 == KeGetCurrentThread()
    && !*((_WORD *)KeGetCurrentThread() + 243)
    && sub_1402ABBD0()
    && !KeGetCurrentIrql()
    && *((_BYTE *)KeGetCurrentThread() + 586) != 1 )
  {
    v200 = 0LL;
    v199 = 1LL;
    v114 = KeGetCurrentIrql();
    __writecr8(1uLL);
    sub_140347E10(
      (_DWORD)Irp + 120,
      (unsigned int)&v200,
      (unsigned int)&v199,
      (unsigned int)&v190,
      (__int64)&AuxiliaryBuffer);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v115 = KeGetCurrentIrql();
        if ( v115 <= 0xFu && v114 <= 0xFu && v115 >= 2u )
        {
          v116 = KeGetCurrentPrcb();
          v117 = *((_QWORD *)v116 + 4375);
          v118 = ~(unsigned __int16)(-1LL << (v114 + 1));
          v131 = (v118 & *(_DWORD *)(v117 + 20)) == 0;
          *(_DWORD *)(v117 + 20) &= v118;
          if ( v131 )
            sub_140418E4C(v116);
        }
      }
    }
    __writecr8(v114);
    return;
  }
  v119 = Irp;
  ApcEnvironment = Irp->ApcEnvironment;
  Irp->Tail.Apc.Type = 18;
  v119->Tail.Apc.Size = 88;
  if ( ApcEnvironment == 2 )
    ApcEnvironment = *((_BYTE *)v97 + 586);
  v119->Tail.Apc.ApcStateIndex = ApcEnvironment;
  v121 = 0;
  v119->Tail.Overlay.AuxiliaryBuffer = (PCHAR)sub_140933A70;
  v119->Tail.Overlay.ListEntry.Flink = 0LL;
  v119->Tail.Overlay.Thread = (PETHREAD)sub_140347E10;
  *(_WORD *)((char *)&v119->Tail.CompletionKey + 81) = 0;
  v119->Tail.Overlay.ListEntry.Blink = 0LL;
  v119->Tail.Apc.SpareByte0 = 0;
  v119->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v97;
  v122 = (struct _FILE_OBJECT *)AuxiliaryBuffer;
  v123 = Irp;
  v189 = (ULONG_PTR)AuxiliaryBuffer;
  v192 = v190;
  v125 = 0;
  if ( qword_140C15E00 )
  {
    if ( (v124 = *(_QWORD *)(qword_140C15E00 + 32), *(_DWORD *)(v124 + 96))
      && (*(_DWORD *)(v124 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v124 + 120) & 0x3000LL) == *(_QWORD *)(v124 + 120)
      || *(_BYTE *)(qword_140C15E00 + 101)
      && (unsigned __int8)sub_1403031F0(*(_QWORD *)(qword_140C15E00 + 40) + 96LL, 0LL, 12288LL) )
    {
      v125 = 1;
    }
  }
  ApcMode = v123->Tail.Apc.ApcMode;
  v197 = (unsigned __int64)v123->Tail.Overlay.ListEntry.Blink;
  v127 = (__int64)v123->Tail.Overlay.ListEntry.Flink;
  LOBYTE(v204) = ApcMode != 0;
  v196 = v127;
  if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v123->Tail.Overlay.Thread != sub_140962BA0 || ApcMode )
  {
    v128 = (__int64)v123->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v129 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( ApcMode )
    {
      v131 = *((_QWORD *)CurrentThread + 68) == *(_QWORD *)(v128 + 544);
      goto LABEL_293;
    }
  }
  else
  {
    v128 = (__int64)v123->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v129 = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v131 = *((_QWORD *)CurrentThread + 23) == *(_QWORD *)(v128 + 544);
LABEL_293:
  if ( v125 && !v131 && (ApcMode || v129) )
  {
    v132 = 1;
    ObfReferenceObjectWithTag((PVOID)v128, 0x5149654Bu);
    v121 = 0;
  }
  else
  {
    v132 = 0;
  }
  v133 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v133 <= 0xFu )
  {
    v134 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v134 + 20) |= (-1 << (v133 + 1)) & 4;
  }
  v135 = KeGetCurrentPrcb();
  v194 = v121;
  while ( 1 )
  {
    v136 = *((_QWORD *)v135 + 4375);
    if ( v136 )
    {
      if ( *((_BYTE *)v135 + 32) <= 1u )
      {
        v137 = *(_DWORD *)(v136 + 24);
        *(_DWORD *)(v136 + 24) = v137 + 1;
        if ( v137 == -1 )
          sub_140418E4C(v135);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v128 + 64), 0LL) )
      break;
    v138 = *((_QWORD *)v135 + 4375);
    if ( v138 )
    {
      if ( *((_BYTE *)v135 + 32) <= 1u )
      {
        v139 = *(_DWORD *)(v138 + 24) - 1;
        *(_DWORD *)(v138 + 24) = v139;
        if ( !v139 )
          sub_140418E4C(v135);
      }
    }
    do
      sub_1402F32E0(&v194);
    while ( *(_QWORD *)(v128 + 64) );
  }
  if ( (*(_DWORD *)(v128 + 116) & 0x4000) == 0 || v123->Tail.Apc.Inserted )
  {
    v157 = 0;
    goto LABEL_405;
  }
  v131 = v123->Tail.Apc.ApcStateIndex == 0;
  v140 = v123->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
  v123->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v192;
  v123->Tail.Apc.Inserted = 1;
  v123->Tail.Overlay.OriginalFileObject = v122;
  if ( v131 && BYTE2(v140[36].Blink) )
  {
    p_Blink = &v140[37].Blink;
  }
  else
  {
    p_Blink = &v140[9].Blink;
    v123->Tail.Apc.ApcStateIndex = BYTE2(v140[36].Blink);
  }
  v142 = v123->Tail.Apc.ApcMode;
  if ( !v123->Tail.Overlay.ListEntry.Flink )
  {
    v152 = (PVOID **)&p_Blink[2 * v142];
    for ( j = (PVOID **)v152[1]; j != v152; j = (PVOID **)j[1] )
    {
      if ( !j[4] )
        break;
    }
    goto LABEL_337;
  }
  if ( !(_BYTE)v142 )
  {
LABEL_332:
    v149 = &v123->Tail.Overlay.DriverContext[2];
    v150 = (PVOID *)&p_Blink[2 * v142];
    v151 = (PVOID **)v150[1];
    if ( *v151 != v150 )
      goto LABEL_422;
    *v149 = v150;
    v123->Tail.Overlay.DriverContext[3] = v151;
    *v151 = v149;
    v150[1] = v149;
    goto LABEL_339;
  }
  v143 = (__int64 (__fastcall *)(int, int, int, int, __int64))v123->Tail.Overlay.Thread;
  if ( (char *)v143 != (char *)sub_1406C2560 )
  {
    if ( v143 == sub_140962BA0 )
    {
      v147 = (PVOID ***)&p_Blink[2 * v142];
      for ( j = *v147; j != (PVOID **)v147; j = (PVOID **)*j )
        ;
      BYTE2(v140[12].Flink) |= 1u;
LABEL_337:
      v153 = *j;
      v154 = &v123->Tail.Overlay.DriverContext[2];
      if ( (*j)[1] != j )
        goto LABEL_422;
      *v154 = v153;
      v123->Tail.Overlay.DriverContext[3] = j;
      v153[1] = v154;
      *j = v154;
      goto LABEL_339;
    }
    goto LABEL_332;
  }
  BYTE2(v140[12].Flink) |= 2u;
  v144 = &v123->Tail.Overlay.DriverContext[2];
  v145 = (char *)&p_Blink[2 * v142];
  v146 = *(_QWORD **)v145;
  if ( *(char **)(*(_QWORD *)v145 + 8LL) != v145 )
    goto LABEL_422;
  *v144 = v146;
  v123->Tail.Overlay.DriverContext[3] = v145;
  v146[1] = v144;
  *(_QWORD *)v145 = v144;
LABEL_339:
  v155 = v123->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
  v156 = (unsigned __int8)v123->Tail.Apc.ApcMode;
  if ( v123->Tail.Apc.ApcStateIndex == BYTE2(v155[36].Blink) )
  {
    if ( v155 == *((struct _LIST_ENTRY **)v135 + 1) )
    {
      if ( !(_BYTE)v156
        && (!HIDWORD(v155[30].Flink) || !v123->Tail.Overlay.ListEntry.Flink && !HIWORD(HIDWORD(v155[30].Flink))) )
      {
        BYTE1(v155[12].Flink) = 1;
        if ( v133 )
          HalRequestSoftwareInterrupt(1);
        else
          HIDWORD(v155[7].Flink) |= 0x40u;
        v157 = 1;
        goto LABEL_405;
      }
    }
    else if ( (_BYTE)v156 )
    {
      if ( BYTE4(v155[24].Flink) == 5 && HIBYTE(v155[24].Flink) == 1 )
      {
        v177 = (char)v155[7].Flink;
        if ( (unsigned __int8)((v177 & 7) - 3) > 1u
          && ((HIDWORD(v155[7].Flink) & 0x10) != 0 || (BYTE2(v155[12].Flink) & 2) != 0) )
        {
          LOBYTE(v155[7].Flink) = v177 | 0x40;
          if ( (unsigned __int8)sub_1402F6ED0(v135, v155, 192LL, 0LL) )
            BYTE2(v155[12].Flink) |= 2u;
        }
      }
    }
    else
    {
      BYTE1(v155[12].Flink) = 1;
      _InterlockedOr(v187, 0);
      v158 = BYTE4(v155[24].Flink);
      if ( v158 == 2 )
      {
        Blink_low = LODWORD(v155[33].Blink);
        LOBYTE(v156) = 1;
        LODWORD(Blink_low) = Blink_low & 0x7FFFFFFF;
        if ( HIDWORD(KeGetPcr()[1].LockArray) == (_DWORD)Blink_low )
        {
          sub_14022BA6C(0LL, 1);
        }
        else
        {
          v160 = KeGetCurrentPrcb();
          ++*((_DWORD *)v160 + 8757);
          HalSendSoftwareInterrupt(Blink_low, v156);
        }
        v157 = 1;
        goto LABEL_405;
      }
      if ( v158 == 5
        && !BYTE6(v155[24].Flink)
        && !HIWORD(v155[30].Flink)
        && (!v123->Tail.Overlay.ListEntry.Flink || !WORD2(v155[30].Flink) && !LOBYTE(v155[12].Flink)) )
      {
        v161 = (char)v155[7].Flink;
        v162 = v161 & 7;
        if ( v162 == 1 || v162 == 4 )
        {
          v163 = v155[14].Blink;
          if ( v163 )
          {
            if ( ((__int64)v163->Flink & 0x7F) == 0x15 )
            {
              HIDWORD(v155[33].Blink) = (unsigned __int8)HIDWORD(v155[33].Blink);
              _InterlockedIncrement((volatile signed __int32 *)&v163[33].Blink + HIDWORD(v155[33].Blink));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)&v163[2].Blink);
            }
          }
          v164 = v155[44].Blink;
          if ( v164 )
          {
            v165 = KeGetCurrentPrcb();
            v195 = 0;
            v166 = *((_QWORD *)v165 + 4375);
            if ( v166 )
            {
              if ( *((_BYTE *)v165 + 32) <= 1u )
              {
                v167 = *(_DWORD *)(v166 + 24);
                *(_DWORD *)(v166 + 24) = v167 + 1;
                if ( v167 == -1 )
                  sub_140418E4C(v165);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v164[2029], 0LL) )
            {
              v168 = *((_QWORD *)v165 + 4375);
              if ( v168 )
              {
                if ( *((_BYTE *)v165 + 32) <= 1u )
                {
                  v169 = *(_DWORD *)(v168 + 24) - 1;
                  *(_DWORD *)(v168 + 24) = v169;
                  if ( !v169 )
                    sub_140418E4C(v165);
                }
              }
              do
                sub_1402F32E0(&v195);
              while ( v164[2029].Flink );
              sub_1402B1050((__int64)v165, 1);
            }
            if ( v155[44].Blink )
            {
              v170 = v155[13].Blink;
              v171 = v155[14].Flink;
              if ( v170->Blink != (struct _LIST_ENTRY *)&v155[13].Blink
                || v171->Flink != (struct _LIST_ENTRY *)&v155[13].Blink )
              {
                goto LABEL_422;
              }
              v171->Flink = v170;
              v170->Blink = v171;
              v155[44].Blink = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)&v164[2029], 0LL);
            v172 = KeGetCurrentPrcb();
            v173 = *((_QWORD *)v172 + 4375);
            if ( v173 )
            {
              if ( *((_BYTE *)v172 + 32) <= 1u )
              {
                v174 = *(_DWORD *)(v173 + 24) - 1;
                *(_DWORD *)(v173 + 24) = v174;
                if ( !v174 )
                  sub_140418E4C(v172);
              }
            }
            v122 = (struct _FILE_OBJECT *)v189;
          }
          v175 = BYTE4(v155[24].Flink);
          if ( v175 == 1 )
          {
            HIDWORD(v155[7].Flink) |= 2u;
          }
          else if ( v175 == 5 )
          {
            v176 = (unsigned int)(MEMORY[0xFFFFF78000000320] - HIDWORD(v155[27].Flink));
            if ( HIBYTE(v155[24].Flink) )
              v155[62].Blink = (struct _LIST_ENTRY *)((char *)v155[62].Blink + v176);
            else
              v155[62].Flink = (struct _LIST_ENTRY *)((char *)v155[62].Flink + v176);
          }
          BYTE4(v155[24].Flink) = 7;
          v155[13].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v135 + 1441);
          *((_QWORD *)v135 + 1441) = (char *)v155 + 216;
          v155[12].Blink = (struct _LIST_ENTRY *)256;
          v155[61].Flink = 0LL;
          v161 = (char)v155[7].Flink;
        }
        LOBYTE(v155[7].Flink) = v161 | 0x20;
        v157 = 1;
        goto LABEL_405;
      }
    }
  }
  v157 = 1;
LABEL_405:
  *(_QWORD *)(v128 + 64) = 0LL;
  v178 = KeGetCurrentPrcb();
  v179 = *((_QWORD *)v178 + 4375);
  if ( v179 )
  {
    if ( *((_BYTE *)v178 + 32) <= 1u )
    {
      v180 = *(_DWORD *)(v179 + 24) - 1;
      *(_DWORD *)(v179 + 24) = v180;
      if ( !v180 )
        sub_140418E4C(v178);
    }
  }
  sub_1402B0820((__int64)v135, 0, 1, v203, v133);
  if ( v132 )
  {
    if ( v157 )
    {
      LOBYTE(v188) = v204;
      sub_14024BD24(*((_BYTE *)KeGetCurrentThread() + 562), v128, v196, v197, v192, v122, v188);
    }
    ObfDereferenceObjectWithTag((PVOID)v128, 0x5149654Bu);
  }
}
