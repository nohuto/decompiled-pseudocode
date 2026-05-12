/*
 * XREFs of ?PmDiskRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0027DF4
 * Callers:
 *     ?PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001081C (-PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmDiskRedirect(
        struct _DEVICE_EXTENSION *a1,
        struct _IRP *a2,
        char *a3,
        LARGE_INTEGER a4,
        ULONG Length)
{
  IRP *Irp; // rax
  IRP *v10; // rdi
  int Status; // ebx
  struct _MDL *Mdl; // rax
  struct _MDL *v13; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v15; // rcx

  Irp = IoMakeAssociatedIrp(a2, *(_BYTE *)(*((_QWORD *)a1 + 2) + 76LL) + 1);
  v10 = Irp;
  if ( Irp )
  {
    Mdl = IoAllocateMdl(a3, Length, 0, 0, Irp);
    v13 = Mdl;
    if ( Mdl )
    {
      IoBuildPartialMdl(a2->MdlAddress, Mdl, a3, Length);
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      v15 = v10->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
      v15[-1].FileObject = CurrentStackLocation->FileObject;
      v15[-1].Parameters.Read.Length = Length;
      v15[-1].Parameters.Read.ByteOffset = a4;
      --v10->CurrentLocation;
      --v10->Tail.Overlay.CurrentStackLocation;
      Status = IoPropagateIrpExtensionEx(
                 a2,
                 v10,
                 &a3[-a2->MdlAddress->ByteOffset] - (char *)a2->MdlAddress->StartVa,
                 0xFFFFFFFFLL);
      if ( Status >= 0 )
      {
        IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)a1 + 2), v10);
        Status = v10->IoStatus.Status;
        if ( Status >= 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&a2->IoStatus.Information, v10->IoStatus.Information);
      }
      IoFreeMdl(v13);
    }
    else
    {
      Status = -1073741670;
    }
    IoFreeIrp(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
