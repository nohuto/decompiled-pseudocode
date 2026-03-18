/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00859BC
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0085470 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000309C (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C003F6DC (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?AcquireRemoveLockForClose@FxPkgGeneral@@AEAAEPEAVFxIrp@@@Z @ 0x1C0084E50 (-AcquireRemoveLockForClose@FxPkgGeneral@@AEAAEPEAVFxIrp@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008543C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rdi
  unsigned __int64 ObjectHandleUnchecked; // r12
  char v6; // r15
  unsigned __int8 v7; // r13
  _FILE_OBJECT *FileObject; // r8
  unsigned int v9; // ebp
  int FileObjectFromWdm; // eax
  FxFileObject *v11; // rdx
  _LIST_ENTRY *m_PkgContext; // rcx
  _LIST_ENTRY *i; // rdi
  _LIST_ENTRY *Flink; // rcx
  __int64 v15; // rdx
  _LIST_ENTRY *v16; // rcx
  _IRP *v17; // rax
  FxFileObject *pFxFO; // [rsp+60h] [rbp+8h] BYREF
  _IRP *v20; // [rsp+68h] [rbp+10h]

  m_Irp = FxIrp->m_Irp;
  pFxFO = 0LL;
  v20 = m_Irp;
  ObjectHandleUnchecked = 0LL;
  v6 = 0;
  v7 = 0;
  FileObject = m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( FileObject && (FileObject->Flags & 0x100) != 0 )
  {
    v6 = 1;
    v9 = 0;
  }
  else
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          FileObject,
                          &pFxFO);
    v11 = pFxFO;
    v9 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 )
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pFxFO);
      m_PkgContext = (_LIST_ENTRY *)v11->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      for ( m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
            m_PkgContext != &this->m_FileObjectInfoHeadList;
            m_PkgContext = m_PkgContext->Blink )
      {
        if ( !LODWORD(m_PkgContext[9].Flink) && m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          break;
        }
      }
    }
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      if ( i[4].Blink )
      {
        Flink = i[4].Flink;
        LOBYTE(pFxFO) = 0;
        if ( Flink )
          ((void (__fastcall *)(_LIST_ENTRY *, FxFileObject **))Flink->Flink[1].Flink)(Flink, &pFxFO);
        ((void (__fastcall *)(unsigned __int64))i[4].Blink)(ObjectHandleUnchecked);
        v16 = i[4].Flink;
        if ( v16 )
        {
          LOBYTE(v15) = (_BYTE)pFxFO;
          ((void (__fastcall *)(_LIST_ENTRY *, __int64))v16->Flink[1].Blink)(v16, v15);
        }
      }
    }
    FxFileObject::_DestroyFileObject(
      this->m_Device,
      (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
    m_Irp = v20;
  }
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    v17 = FxIrp->m_Irp;
    ++v17->CurrentLocation;
    ++v17->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v7 = FxPkgGeneral::AcquireRemoveLockForClose(this, FxIrp);
    FxIrp->m_Irp->IoStatus.Status = v9;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v6 )
    FxPkgGeneral::DecrementOpenHandleCount(this);
  if ( v7 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v9;
}
