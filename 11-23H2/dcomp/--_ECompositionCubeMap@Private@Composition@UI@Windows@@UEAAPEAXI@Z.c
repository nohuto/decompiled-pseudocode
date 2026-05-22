/*
 * XREFs of ??_ECompositionCubeMap@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

Windows::UI::Composition::Private::CompositionCubeMap *__fastcall Windows::UI::Composition::Private::CompositionCubeMap::`vector deleting destructor'(
        Windows::UI::Composition::Private::CompositionCubeMap *this,
        char a2)
{
  Windows::UI::Composition::SurfaceBindPoint *v4; // rcx
  __int64 v5; // rdx

  v4 = (Windows::UI::Composition::SurfaceBindPoint *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
      v4,
      *((Windows::UI::Composition::SurfaceBindPoint **)this + 21));
    std::_Deallocate<16,0>(*((void **)this + 20), 56 * ((*((_QWORD *)this + 22) - *((_QWORD *)this + 20)) / 56LL));
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
