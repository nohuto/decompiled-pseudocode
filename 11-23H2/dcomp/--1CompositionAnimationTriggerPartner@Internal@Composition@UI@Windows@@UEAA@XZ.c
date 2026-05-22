/*
 * XREFs of ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C
 * Callers:
 *     ??_ECompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123780 (--_ECompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122454 (--$_Destroy_range@V-$allocator@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122498 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@W.c)
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180122DE4 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Com.c)
 */

void __fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::~CompositionAnimationTriggerPartner(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this,
        volatile int *a2)
{
  volatile signed __int32 **v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v5; // rcx
  __int64 v6; // rdx

  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
    (__int64 *)this + 28,
    a2);
  v3 = (volatile signed __int32 **)*((_QWORD *)this + 25);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
      v3,
      *((volatile signed __int32 ***)this + 26));
    std::_Deallocate<16,0>(
      *((void **)this + 25),
      (*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  v5 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 21);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>>(
      v5,
      *((Microsoft::WRL2::NestableRuntimeClass ***)this + 22));
    std::_Deallocate<16,0>(
      *((void **)this + 21),
      (*((_QWORD *)this + 23) - *((_QWORD *)this + 21)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 20);
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v6);
}
