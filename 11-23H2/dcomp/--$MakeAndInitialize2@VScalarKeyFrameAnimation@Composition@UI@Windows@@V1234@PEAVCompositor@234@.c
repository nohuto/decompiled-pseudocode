/*
 * XREFs of ??$MakeAndInitialize2@VScalarKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVScalarKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005F6F0
 * Callers:
 *     ?CreateScalarKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIScalarKeyFrameAnimation@345@@Z @ 0x18005F660 (-CreateScalarKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIScalarKeyFram.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ScalarKeyFrameAnimation,Windows::UI::Composition::ScalarKeyFrameAnimation,Windows::UI::Composition::Compositor *>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  volatile signed __int32 *v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // esi
  char v13; // al
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v16; // [rsp+50h] [rbp+8h] BYREF
  char *v17; // [rsp+60h] [rbp+18h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x200uLL);
  v16 = v5;
  if ( !v5 )
  {
    v12 = -2147024882;
LABEL_17:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
    return v12;
  }
  v6 = (volatile signed __int32 *)memset_0(v5, 0, 0x200uLL);
  if ( v6 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v6 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
    *((_DWORD *)v6 + 4) = 1;
    *((_QWORD *)v6 + 1) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v6 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
    *((_QWORD *)v6 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
    *((_QWORD *)v6 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
    *((_QWORD *)v6 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
    *((_QWORD *)v6 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
    *((_QWORD *)v6 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
    *(_QWORD *)v6 = &Windows::UI::Composition::CompositionAnimation::`vftable';
    *((_QWORD *)v6 + 16) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimation'};
    *((_QWORD *)v6 + 17) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
    *((_QWORD *)v6 + 18) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimation3'};
    *((_QWORD *)v6 + 19) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
    *((_QWORD *)v6 + 20) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimationBase'};
    *((_QWORD *)v6 + 21) = &Windows::UI::Composition::CompositionAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimationBaseInternal>'};
    RtlInitializeGenericTable(
      (PRTL_GENERIC_TABLE)(v6 + 48),
      CGenericTableMap<HSTRING__ *,ParameterEntry>::CompareTableData,
      CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::AllocTableData,
      CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::FreeTableData,
      0LL);
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 34) = 0LL;
    *((_BYTE *)v6 + 336) &= 0xFCu;
    *((_QWORD *)v6 + 39) = 0LL;
    *((_QWORD *)v6 + 40) = 0LL;
    *((_QWORD *)v6 + 41) = 0LL;
    *((_DWORD *)v6 + 85) = 0;
    *((_QWORD *)v6 + 43) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable';
    *((_QWORD *)v6 + 44) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Windows::UI::Composition::IKeyFrameAnimation2'};
    *((_QWORD *)v6 + 45) = &Windows::UI::Composition::KeyFrameAnimation::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IKeyFrameAnimation3>'};
    *((_QWORD *)v6 + 47) = &Windows::UI::Composition::KeyFrameAnimation::Partner::`vftable';
    *((_QWORD *)v6 + 49) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Windows::UI::Composition::Internal::ICompositionAnimationTelemetryInternal'};
    *((_QWORD *)v6 + 50) = &Windows::UI::Composition::KeyFrameAnimation::Internal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Internal::IKeyFrameAnimationInternal>'};
    *((_QWORD *)v6 + 61) = 0LL;
    *(_QWORD *)v6 = &Windows::UI::Composition::ScalarKeyFrameAnimation::`vftable';
    *((_QWORD *)v6 + 62) = &Windows::UI::Composition::ScalarKeyFrameAnimation::Api::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  v17 = (char *)v6;
  *((_QWORD *)v6 + 1) = &Windows::UI::Composition::ScalarKeyFrameAnimation::s_InterfaceType;
  v8 = *a2;
  v16 = 0LL;
  *((_QWORD *)v6 + 53) = 0LL;
  *((_QWORD *)v6 + 54) = 0LL;
  *((_QWORD *)v6 + 55) = 2500000LL;
  *((_DWORD *)v6 + 104) = 18;
  *((_QWORD *)v6 + 58) = 0LL;
  *((_DWORD *)v6 + 115) = 0;
  *((_DWORD *)v6 + 118) = 1065353216;
  *((_DWORD *)v6 + 121) = 0;
  *((_QWORD *)v6 + 3) = v8;
  if ( v8 != v6 && _InterlockedIncrement(v8 + 4) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 80LL))(v8);
  v9 = v6[8] & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)v6 + 8) = v9;
  *((_DWORD *)v6 + 8) = v9 ^ (*((_DWORD *)v8 + 8) ^ v9) & 0x100;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, volatile signed __int32 *, char *))(**(_QWORD **)(*((_QWORD *)v8 + 53) + 32LL)
                                                                                     + 24LL))(
          *(_QWORD *)(*((_QWORD *)v8 + 53) + 32LL),
          *(unsigned int *)(*((_QWORD *)v8 + 53) + 64LL),
          v6,
          (char *)v6 + 120);
  v12 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v10);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)v12);
    goto LABEL_17;
  }
  v13 = *((_BYTE *)v8 + 452);
  if ( (v13 & 1) == 0 )
  {
    *((_BYTE *)v8 + 452) = v13 | 1;
    if ( !*((_DWORD *)v8 + 112) )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v8,
        v11);
  }
  *((_DWORD *)v6 + 31) |= 1u;
  *((_DWORD *)v6 + 74) = 1;
  result = 0LL;
  *a1 = v6;
  return result;
}
