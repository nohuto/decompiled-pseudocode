/*
 * XREFs of ??1FxRequestMemory@@UEAA@XZ @ 0x1C006AD30
 * Callers:
 *     ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C006ADE0 (--_EFxRequestMemory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00083A0 (--1FxObject@@UEAA@XZ.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0068854 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C006EECC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestMemory::~FxRequestMemory(FxRequestMemory *this, unsigned int a2, unsigned int a3)
{
  _MDL *m_Mdl; // rcx
  FxRequest *m_Request; // rcx

  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)FxRequestMemory::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxRequestMemory::`vftable'{for `IFxMemory'};
  m_Mdl = this->m_Mdl;
  if ( m_Mdl )
  {
    MmUnlockPages(m_Mdl);
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, this->m_Mdl);
    else
      IoFreeMdl(this->m_Mdl);
    this->m_Mdl = 0LL;
  }
  m_Request = this->m_Request;
  if ( m_Request )
  {
    FxRequest::ReleaseIrpReference(m_Request);
    this->m_Request = 0LL;
  }
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
}
