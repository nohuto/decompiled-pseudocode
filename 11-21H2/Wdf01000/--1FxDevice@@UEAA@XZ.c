/*
 * XREFs of ??1FxDevice@@UEAA@XZ @ 0x1C002B720
 * Callers:
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C002B690 (--_GFxDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C002BAA0 (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C002BAE4 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C002BB4C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C002BB80 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C0068E84 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1C0069498 (--1FxCxDeviceInfo@@QEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDevice::~FxDevice(FxDevice *this)
{
  unsigned int v2; // edx
  FxPkgIo *m_PkgIo; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgGeneral *m_PkgGeneral; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  FxIrpPreprocessInfo *Flink; // rcx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *v11; // rdi
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rcx
  FxDevice *m_ParentDevice; // rcx
  const void *_a2; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rax

  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)FxDevice::`vftable'{for `FxNonPagedObject'};
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  if ( !FxObject::IsDisposed(this) )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x12u, 0xAu, WPP_FxDevice_cpp_Traceguids, this, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, ObjectHandleUnchecked, (unsigned __int64)this);
  }
  m_PkgIo = this->m_PkgIo;
  if ( m_PkgIo )
  {
    m_PkgIo->Release(m_PkgIo, 0LL, 295, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgIo = 0LL;
  }
  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_PkgPnp->Release(m_PkgPnp, 0LL, 300, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgPnp = 0LL;
  }
  m_PkgGeneral = this->m_PkgGeneral;
  if ( m_PkgGeneral )
  {
    m_PkgGeneral->Release(m_PkgGeneral, 0LL, 305, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgGeneral = 0LL;
  }
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
  {
    m_PkgWmi->Release(m_PkgWmi, 0LL, 310, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgWmi = 0LL;
  }
  m_PkgDefault = this->m_PkgDefault;
  if ( m_PkgDefault )
  {
    m_PkgDefault->Release(m_PkgDefault, 0LL, 315, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgDefault = 0LL;
  }
  p_m_PreprocessInfoListHead = &this->m_PreprocessInfoListHead;
  while ( 1 )
  {
    Flink = (FxIrpPreprocessInfo *)p_m_PreprocessInfoListHead->Flink;
    if ( p_m_PreprocessInfoListHead->Flink == p_m_PreprocessInfoListHead )
      break;
    if ( Flink->ListEntry.Blink != p_m_PreprocessInfoListHead
      || (v17 = Flink->ListEntry.Flink, (FxIrpPreprocessInfo *)Flink->ListEntry.Flink->Blink != Flink) )
    {
LABEL_32:
      __fastfail(3u);
    }
    p_m_PreprocessInfoListHead->Flink = v17;
    v17->Blink = p_m_PreprocessInfoListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    FxIrpPreprocessInfo::`scalar deleting destructor'(Flink, v2);
  }
  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  while ( 1 )
  {
    v11 = (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead->Flink;
    if ( p_m_CxDeviceInfoListHead->Flink == p_m_CxDeviceInfoListHead )
      break;
    if ( v11->ListEntry.Blink != p_m_CxDeviceInfoListHead )
      goto LABEL_32;
    v18 = v11->ListEntry.Flink;
    if ( (FxCxDeviceInfo *)v11->ListEntry.Flink->Blink != v11 )
      goto LABEL_32;
    p_m_CxDeviceInfoListHead->Flink = v18;
    v18->Blink = p_m_CxDeviceInfoListHead;
    v11->ListEntry.Blink = (_LIST_ENTRY *)v11;
    v11->ListEntry.Flink = (_LIST_ENTRY *)v11;
    FxCxDeviceInfo::~FxCxDeviceInfo(v11);
    FxPoolFree((FX_POOL_TRACKER *)v11);
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_DeviceName = 0LL;
  }
  FxDevice::DeleteSymbolicLink(this);
  v13 = this->m_MofResourceName.Buffer;
  if ( v13 )
  {
    FxPoolFree((FX_POOL_TRACKER *)v13);
    this->m_MofResourceName = 0LL;
  }
  if ( this->m_RequestLookasideListElementSize )
  {
    ExDeleteNPagedLookasideList(&this->m_RequestLookasideList);
    this->m_RequestLookasideListElementSize = 0LL;
  }
  m_ParentDevice = this->m_ParentDevice;
  if ( m_ParentDevice )
    m_ParentDevice->Release(m_ParentDevice, this, 360, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(&this->m_IoTargetsList);
  FxDeviceBase::~FxDeviceBase(this);
}
