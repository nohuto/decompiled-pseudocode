/*
 * XREFs of ??$MakeAndInitialize2@VCompositionShapeCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVShapeContainer@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionShapeCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVShapeContainer@456@@Z @ 0x18005CFD8
 * Callers:
 *     ?RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005CE64 (-RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005D6B4 (-RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::CompositionShapeCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::ShapeContainer *>(
        Windows::UI::Composition::CompositorCommon **a1,
        Windows::UI::Composition::CompositorCommon **a2,
        __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  Windows::UI::Composition::CompositorCommon *v8; // rax
  Windows::UI::Composition::CompositorCommon *v9; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  Windows::UI::Composition::CompositorCommon *v11; // rdi
  __int64 v12; // rbp
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // esi
  char v17; // al
  __int64 result; // rax
  bool v19; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v21; // [rsp+50h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositorCommon *v22; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v22 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0xC0uLL);
  v21 = v7;
  if ( !v7 )
  {
    v16 = -2147024882;
LABEL_15:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v21);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v22);
    return v16;
  }
  v8 = (Windows::UI::Composition::CompositorCommon *)memset_0(v7, 0, 0xC0uLL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v8 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
    *((_DWORD *)v8 + 4) = 1;
    if ( v10 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v9 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
    *((_QWORD *)v9 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v9 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
    *((_QWORD *)v9 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v9 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
    *((_QWORD *)v9 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v9 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
    *((_QWORD *)v9 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
    *((_QWORD *)v9 + 17) = 0LL;
    *((_QWORD *)v9 + 18) = 0LL;
    *((_QWORD *)v9 + 19) = 0LL;
    *(_QWORD *)v9 = &Windows::UI::Composition::CompositionShapeCollection::`vftable'{for `Windows::UI::Composition::CompositionObject'};
    *((_QWORD *)v9 + 16) = &Windows::UI::Composition::CompositionShapeCollection::`vftable'{for `Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>>'};
    *((_QWORD *)v9 + 20) = &Windows::UI::Composition::CompositionShapeCollection::Api::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>'};
    *((_QWORD *)v9 + 21) = &Windows::UI::Composition::CompositionShapeCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionShape *>>'};
  }
  else
  {
    v9 = 0LL;
  }
  v21 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::CompositionShapeCollection::s_InterfaceType;
  v11 = *a2;
  v12 = *a3;
  v22 = v9;
  *((_QWORD *)v9 + 3) = v11;
  if ( v11 != v9 && _InterlockedIncrement((volatile signed __int32 *)v11 + 4) == 1 )
    (*(void (__fastcall **)(Windows::UI::Composition::CompositorCommon *))(*(_QWORD *)v11 + 80LL))(v11);
  v13 = *((_DWORD *)v9 + 8) & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)v9 + 8) = v13;
  *((_DWORD *)v9 + 8) = v13 ^ (*((_DWORD *)v11 + 8) ^ v13) & 0x100;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Windows::UI::Composition::CompositorCommon *, _QWORD *))(**(_QWORD **)(*((_QWORD *)v11 + 53) + 32LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)v11 + 53) + 32LL),
          *(unsigned int *)(*((_QWORD *)v11 + 53) + 64LL),
          v9,
          (_QWORD *)v9 + 15);
  v16 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshapecollection.cpp",
      (const char *)v16);
    goto LABEL_15;
  }
  v17 = *((_BYTE *)v11 + 452);
  if ( (v17 & 1) == 0 )
  {
    v19 = *((_DWORD *)v11 + 112) == 0;
    *((_BYTE *)v11 + 452) = v17 | 1;
    if ( v19 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(v11, v15);
  }
  *((_DWORD *)v9 + 31) |= 1u;
  *((_QWORD *)v9 + 23) = v12;
  result = 0LL;
  *a1 = v9;
  return result;
}
