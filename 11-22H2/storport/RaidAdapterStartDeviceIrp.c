/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C003993C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaForwardIrpSynchronous @ 0x1C0013B1C (RaForwardIrpSynchronous.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(__int64 a1, PIRP Irp)
{
  ULONG v4; // eax
  __int64 Pool; // rax
  _QWORD *v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v10; // rax
  signed int v11; // eax
  unsigned int started; // eax

  if ( StorageAsyncStart
    && (v4 = IoSizeofWorkItem(),
        Pool = RaidAllocatePool(64LL, v4 + 16LL, 1230463314LL, *(_QWORD *)(a1 + 8)),
        (v6 = (_QWORD *)Pool) != 0LL) )
  {
    v7 = Pool + 16;
    IoInitializeWorkItem(*(PVOID *)(a1 + 8), (PIO_WORKITEM)(Pool + 16));
    *v6 = v7;
    v6[1] = Irp;
    v8 = 259;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidPnPAsyncStartComplete;
    v10[-1].Context = v6;
    v10[-1].Control = -32;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), Irp);
  }
  else
  {
    v11 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), Irp);
    v8 = v11;
    if ( v11 >= 0 )
    {
      started = RaidAdapterStartDevice(a1, (__int64)Irp);
      return (unsigned int)RaidCompleteRequestEx(Irp, 0, started);
    }
    else
    {
      RaidCompleteRequestEx(Irp, 0, v11);
    }
  }
  return v8;
}
