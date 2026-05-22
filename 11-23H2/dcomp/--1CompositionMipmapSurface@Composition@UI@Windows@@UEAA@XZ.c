/*
 * XREFs of ??1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ @ 0x180156980
 * Callers:
 *     ??_ECompositionMipmapSurface@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180156A30 (--_ECompositionMipmapSurface@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

void __fastcall Windows::UI::Composition::CompositionMipmapSurface::~CompositionMipmapSurface(
        Windows::UI::Composition::CompositionMipmapSurface *this)
{
  Windows::UI::Composition::SurfaceBindPoint *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  __int64 v4; // rdx

  v2 = (Windows::UI::Composition::SurfaceBindPoint *)*((_QWORD *)this + 26);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
      v2,
      *((Windows::UI::Composition::SurfaceBindPoint **)this + 27));
    std::_Deallocate<16,0>(*((void **)this + 26), 56 * ((*((_QWORD *)this + 28) - *((_QWORD *)this + 26)) / 56LL));
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    *((_QWORD *)this + 25) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}
