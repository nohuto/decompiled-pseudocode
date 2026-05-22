/*
 * XREFs of ??$MakeAndInitialize2@VComponentTransform3D@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform3D@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18005A68C
 * Callers:
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 * Callees:
 *     ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x18005A7E0 (-RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::ComponentTransform3D,Windows::UI::Composition::Visual *>(
        Windows::UI::Composition::ComponentTransform3D **a1,
        struct Windows::UI::Composition::CompositionObject **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::ComponentTransform3D *v6; // rax
  Windows::UI::Composition::ComponentTransform3D *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  struct Windows::UI::Composition::CompositionObject *v9; // rdx
  int v10; // edi
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::ComponentTransform3D *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x120uLL);
  v12 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::ComponentTransform3D *)memset_0(v5, 0, 0x120uLL);
    v7 = v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      v8 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v6 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
      *((_DWORD *)v6 + 4) = 1;
      if ( v8 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
      *((_QWORD *)v7 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
      *((_QWORD *)v7 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v7 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
      *((_QWORD *)v7 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v7 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
      *((_QWORD *)v7 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
      *((_QWORD *)v7 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
      *((_QWORD *)v7 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
      *(_QWORD *)v7 = &Windows::UI::Composition::ComponentTransform3D::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionObject::s_InterfaceType;
    v9 = *a2;
    v13 = v7;
    v10 = Windows::UI::Composition::ComponentTransform3D::RuntimeClassInitialize(v7, v9);
    if ( v10 >= 0 )
    {
      *a1 = v7;
      return 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return (unsigned int)v10;
}
