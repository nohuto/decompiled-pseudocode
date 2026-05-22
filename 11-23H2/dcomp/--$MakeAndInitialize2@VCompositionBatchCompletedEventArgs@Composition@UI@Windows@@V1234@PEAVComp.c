/*
 * XREFs of ??$MakeAndInitialize2@VCompositionBatchCompletedEventArgs@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18002C6C4
 * Callers:
 *     ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ @ 0x18002C400 (-FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionBatchCompletedEventArgs,Windows::UI::Composition::CompositionBatchCompletedEventArgs,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::CompositionObject *v6; // rax
  Windows::UI::Composition::CompositionObject *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  struct Windows::UI::Composition::Compositor *v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionObject *v15; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x90uLL);
  v14 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::CompositionObject *)memset_0(v5, 0, 0x90uLL);
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
      *(_QWORD *)v7 = &Windows::UI::Composition::CompositionBatchCompletedEventArgs::`vftable';
      *((_QWORD *)v7 + 16) = &Windows::UI::Composition::Scenes::SceneBoundingBox::ApiSceneObject::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v14 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionBatchCompletedEventArgs::s_InterfaceType;
    v9 = *a2;
    v15 = v7;
    v10 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v7, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatchcompletedeventargs.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
      return v11;
    }
    else
    {
      *a1 = v7;
      return 0LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return 2147942414LL;
  }
}
