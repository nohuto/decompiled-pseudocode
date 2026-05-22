/*
 * XREFs of ??1ContextSession@WRL2@Microsoft@@UEAA@XZ @ 0x18003E0B4
 * Callers:
 *     ??1CompositorCommon@Composition@UI@Windows@@MEAA@XZ @ 0x18003DE20 (--1CompositorCommon@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??_EContextSession@WRL2@Microsoft@@UEAAPEAXI@Z @ 0x1801089B0 (--_EContextSession@WRL2@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::~ContextSession(struct _RTL_CRITICAL_SECTION *this)
{
  LONG *p_LockCount; // rdi

  p_LockCount = &this[3].LockCount;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL2::ContextSession::`vftable';
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&this[3].LockCount);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&this[3]);
  if ( this[3].OwningThread )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession deferred operations");
  if ( LODWORD(this[1].OwningThread) )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession owning lock");
  DeleteCriticalSection(this + 1);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(p_LockCount);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&this[3]);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this);
}
