/*
 * XREFs of ??$MakeAndInitialize2@VCompositionNineGridBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionNineGridBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180045FC0
 * Callers:
 *     ?CreateNineGridBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNineGridBrush@345@@Z @ 0x180045F30 (-CreateNineGridBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNineGr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ProxyObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::ProxyObject *v6; // rax
  Windows::UI::Composition::ProxyObject *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  struct Windows::UI::Composition::Compositor *v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::ProxyObject *v15; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0xD8uLL);
  v14 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::ProxyObject *)memset_0(v5, 0, 0xD8uLL);
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
      *((_QWORD *)v7 + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
      *((_QWORD *)v7 + 19) = &Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
      *(_QWORD *)v7 = &Windows::UI::Composition::CompositionNineGridBrush::`vftable';
      *((_QWORD *)v7 + 21) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    v14 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
    v9 = *a2;
    v15 = v7;
    v10 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v7, v9, 0x71u, 0);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *((_DWORD *)v7 + 45) = 1065353216;
      *((_DWORD *)v7 + 47) = 1065353216;
      *((_DWORD *)v7 + 49) = 1065353216;
      *((_DWORD *)v7 + 51) = 1065353216;
      result = 0LL;
      *a1 = v7;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
  return v11;
}
