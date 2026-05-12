/*
 * XREFs of PartitionOverlapIo @ 0x1C000F0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall PartitionOverlapIo(int a1, __int64 a2, ULONG a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  PIRP Irp; // rdi
  void *v15; // rbx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v19; // rbx
  struct _FILE_OBJECT *v20; // rax
  struct _IO_STACK_LOCATION *v21; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdi
  struct _LIST_ENTRY *v23; // rsi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **Blink; // rax
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  v25 = 0LL;
  v9 = a5[1];
  v10 = *(_QWORD *)(v9 + 184);
  v11 = a1 - 1;
  if ( !v11 )
    return (unsigned int)-1073741811;
  v12 = v11 - 1;
  if ( !v12 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(*a5 + 8LL) + 76LL) + 1, 0);
    if ( !Irp )
      return (unsigned int)-1073741670;
    v15 = (void *)(a4
                 + *(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL)
                 + *(unsigned int *)(*(_QWORD *)(v9 + 8) + 44LL)
                 - *(_QWORD *)(v10 + 24));
    Mdl = IoAllocateMdl(v15, a3, 0, 0, Irp);
    Irp->MdlAddress = Mdl;
    if ( Mdl )
    {
      IoBuildPartialMdl(*(PMDL *)(v9 + 8), Mdl, v15, a3);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->Flags |= *(_DWORD *)(v9 + 16) & 2;
      v19 = CurrentStackLocation - 1;
      Irp->Tail.Overlay.Thread = *(PETHREAD *)(v9 + 152);
      v20 = *(struct _FILE_OBJECT **)(v9 + 192);
      --Irp->CurrentLocation;
      Irp->Tail.Overlay.OriginalFileObject = v20;
      Irp->Tail.Overlay.CurrentStackLocation = v19;
      *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)v10;
      *(_OWORD *)&v19[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(v10 + 16);
      *(_OWORD *)(&v19[-1].Parameters.SetQuota + 6) = *(_OWORD *)(v10 + 32);
      v19[-1].FileObject = *(PFILE_OBJECT *)(v10 + 48);
      v19[-1].Control = 0;
      v19[-1].Parameters.Read.Length = a3;
      v19[-1].Parameters.Read.ByteOffset.QuadPart = a4 + *(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16);
      if ( (unsigned __int8)IoIsActivityTracingEnabled() && (int)IoGetActivityIdIrp(v9, &v25) >= 0 )
        IoSetActivityIdIrp(Irp, &v25);
      v6 = IoPropagateIrpExtensionEx(v9, Irp, a4 - v19[-1].Parameters.Read.ByteOffset.QuadPart, 0xFFFFFFFFLL);
      if ( (v6 & 0x80000000) == 0 )
      {
        v21 = Irp->Tail.Overlay.CurrentStackLocation;
        p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
        v21[-1].Context = (PVOID)v9;
        v23 = (struct _LIST_ENTRY *)(v9 + 168);
        v21[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PartitionChildIoCompletion;
        v21[-1].Control = -32;
        Blink = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **)v23->Blink;
        if ( *Blink != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)v23 )
          __fastfail(3u);
        p_ListEntry->ListEntry.Flink = v23;
        p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)Blink;
        *Blink = p_ListEntry;
        v23->Blink = &p_ListEntry->ListEntry;
        return v6;
      }
    }
    else
    {
      v6 = -1073741670;
    }
    MdlAddress = Irp->MdlAddress;
    if ( MdlAddress )
      IoFreeMdl(MdlAddress);
    IoFreeIrp(Irp);
    return v6;
  }
  if ( v12 != 2 )
    return (unsigned int)-1073741811;
  return v6;
}
