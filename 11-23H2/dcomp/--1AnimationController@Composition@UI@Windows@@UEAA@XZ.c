/*
 * XREFs of ??1AnimationController@Composition@UI@Windows@@UEAA@XZ @ 0x18000CCA4
 * Callers:
 *     ??_EAnimationController@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000CC60 (--_EAnimationController@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationController::~AnimationController(
        Windows::UI::Composition::AnimationController *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 25);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 27) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  *((_QWORD *)this + 17) = &DirectComposition::CRebuildableObject::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::AnimationController *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
