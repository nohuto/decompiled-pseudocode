/*
 * XREFs of ?CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z @ 0x180016554
 * Callers:
 *     ?CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionScopedBatch@345@@Z @ 0x180016480 (-CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ??$?4VCompositionScopedBatch@Composition@UI@Windows@@@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionScopedBatch@Composition@UI@Windows@@@Z @ 0x18015ADE8 (--$-4VCompositionScopedBatch@Composition@UI@Windows@@@-$RefPtr@VCompositionBatch@Composition@UI@.c)
 */

void __fastcall Windows::UI::Composition::BatchController::CreateScopedBatch(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::CompositionScopedBatch **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  struct Windows::UI::Composition::CompositionScopedBatch *v6; // rax
  struct Windows::UI::Composition::CompositionScopedBatch *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  Windows::UI::Composition::CompositorCommon *v9; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebp
  char v14; // al
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  bool v19; // zf
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::UI::Composition::CompositionScopedBatch *v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v21 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0xD8uLL);
  v22 = v5;
  if ( !v5 )
  {
    v13 = -2147024882;
    goto LABEL_27;
  }
  v6 = (struct Windows::UI::Composition::CompositionScopedBatch *)memset_0(v5, 0, 0xD8uLL);
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
    *(_QWORD *)v7 = &Windows::UI::Composition::CompositionBatch::`vftable';
    *((_QWORD *)v7 + 19) = 0LL;
    InitializeSRWLock((PSRWLOCK)v7 + 20);
    InitializeSRWLock((PSRWLOCK)v7 + 21);
    *((_QWORD *)v7 + 23) = 0LL;
    *((_QWORD *)v7 + 24) = 0LL;
    *(_QWORD *)v7 = &Windows::UI::Composition::CompositionScopedBatch::`vftable';
    *((_QWORD *)v7 + 25) = &Windows::UI::Composition::CompositionScopedBatch::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v22 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionScopedBatch::s_InterfaceType;
  v9 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
  *((_QWORD *)v7 + 22) = this;
  *((_BYTE *)v7 + 130) = 1;
  v21 = v7;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v7 + 36) = 0;
  *((_DWORD *)v7 + 33) = 0;
  *((_DWORD *)v7 + 34) = CurrentThreadId;
  *((_BYTE *)v7 + 129) = 0;
  *((_QWORD *)v7 + 3) = v9;
  if ( v9 != v7 && _InterlockedIncrement((volatile signed __int32 *)v9 + 4) == 1 )
    (*(void (__fastcall **)(Windows::UI::Composition::CompositorCommon *))(*(_QWORD *)v9 + 80LL))(v9);
  v11 = *((_DWORD *)v7 + 8) & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)v7 + 8) = v11;
  *((_DWORD *)v7 + 8) = v11 ^ (*((_DWORD *)v9 + 8) ^ v11) & 0x100;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::UI::Composition::CompositionScopedBatch *, __int64))(**(_QWORD **)(*((_QWORD *)v9 + 53) + 32LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)v9 + 53) + 32LL),
          *(unsigned int *)(*((_QWORD *)v9 + 53) + 64LL),
          v7,
          (__int64)v7 + 120);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
      (const char *)v13);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionscopedbatch.cpp",
      (const char *)v13);
LABEL_27:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v22);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v21);
    Microsoft::WRL2::FailFast::ForHR(v13, retaddr);
  }
  v14 = *((_BYTE *)v9 + 452);
  if ( (v14 & 1) == 0 )
  {
    v19 = *((_DWORD *)v9 + 112) == 0;
    *((_BYTE *)v9 + 452) = v14 | 1;
    if ( v19 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(v9);
  }
  *((_DWORD *)v7 + 31) |= 1u;
  if ( *((_DWORD *)v7 + 34) == *(_DWORD *)(*((_QWORD *)v7 + 3) + 104LL) )
  {
    v15 = (_DWORD *)*((_QWORD *)this + 1);
    if ( v15 )
    {
      --*v15;
      *((_QWORD *)this + 1) = 0LL;
    }
  }
  v16 = *((_QWORD *)this + 4);
  if ( v16 )
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=<Windows::UI::Composition::CompositionScopedBatch>(
      v16 + 184,
      v7);
  v17 = *((_QWORD *)this + 4);
  if ( *((_QWORD *)v7 + 24) != v17 )
  {
    if ( v17 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*((Microsoft::WRL2::NestableRuntimeClass **)this + 4));
    v23 = *((_QWORD *)v7 + 24);
    *((_QWORD *)v7 + 24) = v17;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v23);
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)v7 + 4) == 1 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionScopedBatch *))(*(_QWORD *)v7 + 80LL))(v7);
  v18 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  if ( v18 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
  *a2 = v7;
}
