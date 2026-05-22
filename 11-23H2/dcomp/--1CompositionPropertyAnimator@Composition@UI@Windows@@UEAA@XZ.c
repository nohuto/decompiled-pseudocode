/*
 * XREFs of ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958
 * Callers:
 *     ??_ECompositionPropertyAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180161A50 (--_ECompositionPropertyAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GConditionalExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180161AA0 (--_GConditionalExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EInjectionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801624F0 (--_EInjectionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStringTuple@@QEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046D78 (--$_Destroy_range@V-$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStri.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1BatchMember@Composition@UI@Windows@@QEAA@XZ @ 0x18008AF28 (--1BatchMember@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122498 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@W.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::~CompositionPropertyAnimator(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  volatile signed __int32 **v2; // rcx
  HSTRING *v3; // rcx
  __int64 v4; // rdx

  v2 = (volatile signed __int32 **)*((_QWORD *)this + 32);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
      v2,
      *((volatile signed __int32 ***)this + 33));
    std::_Deallocate<16,0>(
      *((void **)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  Windows::UI::Composition::BatchMember::~BatchMember((Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 240));
  Windows::UI::Composition::BatchMember::~BatchMember((Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 224));
  v3 = (HSTRING *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<ObjectPropertyStringTuple>>(v3, *((HSTRING **)this + 26));
    std::_Deallocate<16,0>(*((void **)this + 25), 8 * ((__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) >> 3));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v4);
}
