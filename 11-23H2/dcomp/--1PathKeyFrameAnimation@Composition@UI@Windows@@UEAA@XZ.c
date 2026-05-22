/*
 * XREFs of ??1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x18012318C
 * Callers:
 *     ??_GPathKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124310 (--_GPathKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x1800089CC (--$_Destroy_range@V-$allocator@V-$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Mi.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::PathKeyFrameAnimation::~PathKeyFrameAnimation(
        Windows::UI::Composition::PathKeyFrameAnimation *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  v2 = (void *)*((_QWORD *)this + 67);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 69) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  v3 = *((_QWORD *)this + 64);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>>(
      v3,
      *((_QWORD *)this + 65));
    std::_Deallocate<16,0>(
      *((void **)this + 64),
      (*((_QWORD *)this + 66) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 61);
  Windows::UI::Composition::CompositionAnimation::~CompositionAnimation(this);
}
