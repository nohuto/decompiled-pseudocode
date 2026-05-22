/*
 * XREFs of ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ @ 0x18007E120
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ @ 0x18003CE98 (-ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 *     ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z @ 0x18008C0BC (-ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionPropertySet@234@XZ @ 0x180109704 (-GetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEBAPEAVCompositionP.c)
 *     ?SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVCompositionPropertySet@234@@Z @ 0x1801098F0 (-SetSparse_CompositionPropertySet@CompositionObject@Composition@UI@Windows@@AEAAXPEAVComposition.c)
 */

void __fastcall Windows::UI::Composition::CompositionSurfaceWrapper::Destroy(
        Windows::UI::Composition::CompositionSurfaceWrapper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  Microsoft::WRL2::ContextRuntimeClass *Sparse_CompositionPropertySet; // rax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rax

  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 17);
    if ( *((_QWORD *)this + 16) == v3 )
      break;
    Windows::UI::Composition::SurfaceBindPoint::SetSurface(
      *(Windows::UI::Composition::SurfaceBindPoint **)(v3 - 8),
      0LL);
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x10000000) != 0 )
  {
    Sparse_CompositionPropertySet = Windows::UI::Composition::CompositionObject::GetSparse_CompositionPropertySet(this);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(Sparse_CompositionPropertySet);
    v5 = Windows::UI::Composition::CompositionObject::GetSparse_CompositionPropertySet(this);
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet(this, 0LL);
  }
  CSparseStorage::AllocatedStorage::ReleaseAllReferences(*((CSparseStorage::AllocatedStorage **)this + 14));
  if ( (*((_BYTE *)this + 124) & 2) != 0 )
  {
    Windows::UI::Composition::CompositorCommon::ClearWeakReference(
      *((Windows::UI::Composition::CompositorCommon **)this + 3),
      this);
    *((_DWORD *)this + 31) &= ~2u;
  }
  *((_DWORD *)this + 8) &= ~2u;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    Microsoft::WRL2::FailFast::Unexpected("Destroy preconditions");
}
