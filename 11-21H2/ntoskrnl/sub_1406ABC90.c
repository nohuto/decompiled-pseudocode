/*
 * XREFs of sub_1406ABC90 @ 0x1406ABC90
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406AAE50 (FsRtlNotifyFilterChangeDirectory.c)
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     sub_140233104 @ 0x140233104 (sub_140233104.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406ABC90(PIRP Irp, __int64 a2, unsigned int a3, NTSTATUS a4, int a5)
{
  size_t v6; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  const void *v10; // rdx
  void *MasterIrp; // rcx
  PMDL MdlAddress; // rcx
  PVOID MappedSystemVa; // rax
  struct _IRP *v14; // rcx

  v6 = a3;
  if ( sub_140233104((__int64)Irp, a2) || !a5 )
  {
    if ( a4 )
    {
LABEL_21:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Irp->IoStatus.Status = a4;
      IofCompleteRequest(Irp, 1);
      return;
    }
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( !(_DWORD)v6 || CurrentStackLocation->Parameters.Read.Length < (unsigned int)v6 )
    {
      a4 = 268;
      goto LABEL_21;
    }
    v10 = *(const void **)(a2 + 80);
    if ( !v10 )
    {
LABEL_20:
      Irp->IoStatus.Information = (unsigned int)v6;
      *(_QWORD *)(a2 + 88) = 0LL;
      goto LABEL_21;
    }
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( !MasterIrp )
    {
      MdlAddress = Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (MdlAddress->MdlFlags & 5) != 0 )
          MappedSystemVa = MdlAddress->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( !MappedSystemVa )
        {
          a4 = 268;
          LODWORD(v6) = 0;
          goto LABEL_18;
        }
        v10 = *(const void **)(a2 + 80);
        MasterIrp = MappedSystemVa;
      }
      else
      {
        if ( (CurrentStackLocation->Control & 1) != 0 )
        {
          Irp->Flags |= 0x70u;
          Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a2 + 80);
LABEL_18:
          PsReturnProcessPagedPoolQuota(*(_QWORD *)(a2 + 120), *(unsigned int *)(a2 + 100));
          v14 = *(struct _IRP **)(a2 + 80);
          if ( v14 != Irp->AssociatedIrp.MasterIrp )
          {
            if ( v14 )
              ExFreePoolWithTag(v14, 0);
          }
          *(_QWORD *)(a2 + 80) = 0LL;
          *(_DWORD *)(a2 + 100) = 0;
          goto LABEL_20;
        }
        MasterIrp = Irp->UserBuffer;
      }
    }
    memmove(MasterIrp, v10, v6);
    goto LABEL_18;
  }
}
