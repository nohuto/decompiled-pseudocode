/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00101E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0010358 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C6D78 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 */

int __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        WDFQUEUE__ *Queue,
        unsigned int Flags)
{
  _FX_DRIVER_GLOBALS *v5; // r14
  FxIoInCallerContext *p_IoInCallerContextCallback; // rbx
  _FX_DRIVER_GLOBALS *v9; // rsi
  unsigned int v10; // r14d
  FxIoQueue *v11; // r9
  void *v12; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v14; // rcx
  int v16; // eax
  int v17; // esi
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  void *retaddr; // [rsp+58h] [rbp+28h]
  void *PPObject; // [rsp+60h] [rbp+30h] BYREF
  FxIoQueue *v21; // [rsp+70h] [rbp+40h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  p_IoInCallerContextCallback = 0LL;
  PPObject = 0LL;
  v21 = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, &PPObject);
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
  if ( v9->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v9;
  FxObjectHandleGetPtr(v5, (unsigned __int64)Queue, 0x1003u, (void **)&v21);
  if ( !Irp )
    FxVerifierNullBugCheck(v9, retaddr);
  v10 = Flags;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( v9->FxVerifierOn
    && (v16 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(v9, (FxDevice *)PPObject, Irp, v21, v10), v17 = v16, v16 < 0) )
  {
    Irp->IoStatus.Status = v16;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return v17;
  }
  else
  {
    v11 = v21;
    v12 = PPObject;
    if ( (FxDeviceBase *)*((_QWORD *)PPObject + 28) == v21->m_DeviceBase )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      --Irp->CurrentLocation;
      v14 = --Irp->Tail.Overlay.CurrentStackLocation;
      PPObject = (void *)*((_QWORD *)PPObject + 28);
      v14->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
      v11 = v21;
      v12 = PPObject;
    }
    if ( (v10 & 1) != 0 )
    {
      m_CxDeviceInfo = v11->m_CxDeviceInfo;
      if ( m_CxDeviceInfo )
        p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
      else
        p_IoInCallerContextCallback = (FxIoInCallerContext *)(*((_QWORD *)v12 + 80) + 392LL);
    }
    return FxPkgIo::DispatchStep2(*((FxPkgIo **)v12 + 80), Irp, p_IoInCallerContextCallback, v11);
  }
}
