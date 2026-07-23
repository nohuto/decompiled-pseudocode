/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1402512D0
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x140251610 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403C4280 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9B95C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B9BB50 (SbpStartLanman.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IopAllocateMdl @ 0x1402FC37C (IopAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x140371F74 (IopProbeAndLockPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  size_t v9; // r14
  int v11; // r13d
  __int64 Irp; // rax
  int v14; // r9d
  IRP *v15; // rbx
  __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // rdx
  struct _IRP *v19; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *p_SystemCallNumber; // rsi
  LIST_ENTRY *p_ThreadListEntry; // rdi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int64 *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  __int64 v26; // rdx
  _DWORD *v27; // r8
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v31; // r10
  struct _IRP *Pool2; // rax
  int v33; // eax
  int v34; // r14d
  __int64 Mdl; // rax
  int v36; // edx
  unsigned __int8 v37; // cl
  int v38; // eax
  bool v39; // zf

  v9 = a4;
  v11 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v16 - 64) = a6;
  *(_DWORD *)(v16 - 56) = v9;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 != 1 && v17 != 2 )
    {
      *(_QWORD *)(Irp + 112) = a5;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(74LL, v9, 1112764233LL);
      v15->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_37;
      memmove(Pool2, a3, v9);
      v33 = 48;
      v34 = 0;
    }
    else
    {
      v34 = 0;
      v33 = 0;
    }
    v15->Flags = v33;
    if ( !a5 )
      goto LABEL_12;
    Mdl = IopAllocateMdl((_DWORD)a5, a6, 0, v14, 0LL, 0);
    v15->MdlAddress = (PMDL)Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v34 = 1;
      IopProbeAndLockPages(Mdl, v36, v34, v11, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
LABEL_37:
    IoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v9 || a6 )
  {
    v18 = (unsigned int)v9;
    if ( (unsigned int)v9 <= a6 )
      v18 = a6;
    v19 = (struct _IRP *)ExAllocatePool2(72LL, v18, 1112764233LL);
    v15->AssociatedIrp.MasterIrp = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v9);
      v15->Flags = 48;
      v15->UserBuffer = a5;
      if ( a5 )
        v15->Flags = 112;
      goto LABEL_12;
    }
    goto LABEL_37;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v15->Tail.Overlay.Thread = CurrentThread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&CurrentThread[1].SystemCallNumber;
  p_ThreadListEntry = &v15->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v31) = 4;
    else
      v31 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v31;
  }
  p_Thread = (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread;
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v15->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock(p_Thread);
  if ( (_DWORD)KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v39 = (v38 & v27[5]) == 0;
      v26 = (unsigned int)v38 & v27[5];
      v27[5] = v26;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v15->Flags = v15->Flags & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(
                                                           v15->Tail.Overlay.Thread,
                                                           v26,
                                                           v27,
                                                           CurrentPrcb)
                                         + 1) << 17);
  return v15;
}
