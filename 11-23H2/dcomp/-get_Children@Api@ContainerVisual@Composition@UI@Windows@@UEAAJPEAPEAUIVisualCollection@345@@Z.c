/*
 * XREFs of ?get_Children@Api@ContainerVisual@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z @ 0x180053270
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ContainerVisual::Api::get_Children(
        Windows::UI::Composition::ContainerVisual::Api *this,
        struct Windows::UI::Composition::IVisualCollection **a2)
{
  volatile signed __int32 *v2; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  char *v7; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  char v15; // al
  char *v16; // rdi
  struct Windows::UI::Composition::IVisualCollection *v17; // rdi
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = (volatile signed __int32 *)((char *)this - 296);
  *a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[8] & 2) != 0 )
  {
    v21 = 0LL;
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, 0xA0uLL);
    v22 = v6;
    if ( v6 )
    {
      v7 = (char *)memset_0(v6, 0, 0xA0uLL);
      if ( v7 )
      {
        v8 = Microsoft::WRL::Details::ModuleBase::module_;
        *(_QWORD *)v7 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
        *((_DWORD *)v7 + 4) = 1;
        *((_QWORD *)v7 + 1) = 0LL;
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
        *(_QWORD *)v7 = &Windows::UI::Composition::VisualCollection::`vftable';
        *((_QWORD *)v7 + 16) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>'};
        *((_QWORD *)v7 + 17) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualCollection>'};
        *((_QWORD *)v7 + 19) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v21 = v7;
      *((_QWORD *)v7 + 1) = &Windows::UI::Composition::VisualCollection::s_InterfaceType;
      v22 = 0LL;
      if ( *((volatile signed __int32 **)v7 + 19) != v2 )
      {
        if ( !_InterlockedExchangeAdd(v2 + 4, 1u) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 80LL))(v2);
        v9 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v7 + 19);
        *((_QWORD *)v7 + 19) = v2;
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      v10 = *((_QWORD *)v2 + 3);
      *((_QWORD *)v7 + 3) = v10;
      if ( (char *)v10 != v7 && !_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 16), 1u) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
      v11 = *((_DWORD *)v7 + 8) & 0xFFFFFF00 | 0x1F;
      *((_DWORD *)v7 + 8) = v11;
      *((_DWORD *)v7 + 8) = v11 ^ (*(_DWORD *)(v10 + 32) ^ v11) & 0x100;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(**(_QWORD **)(*(_QWORD *)(v10 + 424) + 32LL)
                                                                      + 24LL))(
              *(_QWORD *)(*(_QWORD *)(v10 + 424) + 32LL),
              *(unsigned int *)(*(_QWORD *)(v10 + 424) + 64LL),
              v7,
              v7 + 120);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v15 = *(_BYTE *)(v10 + 452);
        if ( (v15 & 1) == 0 )
        {
          *(_BYTE *)(v10 + 452) = v15 | 1;
          if ( !*(_DWORD *)(v10 + 448) )
          {
            LOBYTE(v13) = 1;
            v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + 432) + 48LL))(
                    *(_QWORD *)(v10 + 432),
                    v13);
            if ( v19 < 0 )
              Microsoft::WRL2::FailFast::ForHR(v19, retaddr);
          }
        }
        *((_DWORD *)v7 + 31) |= 1u;
        v16 = v7 + 128;
        if ( v16 )
          v17 = (struct Windows::UI::Composition::IVisualCollection *)(v16 + 8);
        else
          v17 = 0LL;
        *a2 = v17;
        v14 = 0;
        goto LABEL_20;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
        (const char *)(unsigned int)v12);
    }
    else
    {
      v14 = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v22);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v21);
    DoStackCaptureDirect(v14, 0x5Bu);
LABEL_20:
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v14;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return 2147483667LL;
}
