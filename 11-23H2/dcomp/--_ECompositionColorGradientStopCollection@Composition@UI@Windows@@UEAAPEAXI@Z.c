/*
 * XREFs of ??_ECompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180012510
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC (--$_Destroy_range@V-$allocator@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Mi.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionColorGradientStopCollection *__fastcall Windows::UI::Composition::CompositionColorGradientStopCollection::`vector deleting destructor'(
        Windows::UI::Composition::CompositionColorGradientStopCollection *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
      v4,
      *((_QWORD *)this + 18));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 17),
      (*((_QWORD *)this + 19) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionColorGradientStopCollection *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC8uLL);
    else
      operator delete(this);
  }
  return this;
}
