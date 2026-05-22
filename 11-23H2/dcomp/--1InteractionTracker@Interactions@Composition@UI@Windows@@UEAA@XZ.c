/*
 * XREFs of ??1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x1801363D8
 * Callers:
 *     ??_EInteractionTracker@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180136750 (--_EInteractionTracker@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Destroy_range@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAXPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135604 (--$_Destroy_range@V-$allocator@UManipulationListEntry@InteractionTracker@Interactions@Compositio.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::~InteractionTracker(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  void *v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v4; // rcx
  __int64 v5; // rdx

  `vector destructor iterator'(
    (char *)this + 384,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>);
  v2 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 47);
  if ( v2 )
  {
    *((_QWORD *)this + 47) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v2);
  }
  `vector destructor iterator'(
    (char *)this + 344,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 31);
  v3 = (void *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 30) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 25);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>>(
      v4,
      *((Microsoft::WRL2::NestableRuntimeClass ***)this + 26));
    std::_Deallocate<16,0>(
      *((void **)this + 25),
      (*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}
