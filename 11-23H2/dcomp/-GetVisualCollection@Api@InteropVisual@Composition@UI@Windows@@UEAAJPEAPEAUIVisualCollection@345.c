/*
 * XREFs of ?GetVisualCollection@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAPEAUIVisualCollection@345@@Z @ 0x1800557C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::GetVisualCollection(
        Windows::UI::Composition::InteropVisual::Api *this,
        struct Windows::UI::Composition::IVisualCollection **a2)
{
  volatile signed __int32 *v2; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  volatile signed __int32 *v8; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  volatile signed __int32 *v11; // r14
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // esi
  char v16; // al
  char *v17; // rdi
  struct Windows::UI::Composition::IVisualCollection *v18; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v21; // [rsp+60h] [rbp+8h] BYREF
  void *v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = (volatile signed __int32 *)((char *)this - 296);
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[8] & 2) != 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v15 = -2147024891;
      DoStackCaptureDirect(-2147024891, 0x2C5u);
    }
    else
    {
      v21 = 0LL;
      ProcessHeap = GetProcessHeap();
      v7 = HeapAlloc(ProcessHeap, 0, 0xA0uLL);
      v22 = v7;
      if ( v7 )
      {
        v8 = (volatile signed __int32 *)memset_0(v7, 0, 0xA0uLL);
        if ( v8 )
        {
          v9 = Microsoft::WRL::Details::ModuleBase::module_;
          *(_QWORD *)v8 = &Microsoft::WRL2::NestableRuntimeClass::`vftable';
          *((_DWORD *)v8 + 4) = 1;
          *((_QWORD *)v8 + 1) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
          *((_QWORD *)v8 + 5) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject'};
          *((_QWORD *)v8 + 6) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject2,Windows::UI::Composition::ICompositionObject3,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
          *((_QWORD *)v8 + 7) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::ICompositionObject3'};
          *((_QWORD *)v8 + 8) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject4,Windows::UI::Composition::IAnimationObject,Windows::UI::Composition::ICompositionObject5>'};
          *((_QWORD *)v8 + 9) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Windows::UI::Composition::IAnimationObject'};
          *((_QWORD *)v8 + 10) = &Windows::UI::Composition::CompositionObject::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionObject5>'};
          *((_QWORD *)v8 + 12) = &Windows::UI::Composition::CompositionObject::Partner::`vftable';
          *((_QWORD *)v8 + 14) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
          *(_QWORD *)v8 = &Windows::UI::Composition::VisualCollection::`vftable';
          *((_QWORD *)v8 + 16) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>'};
          *((_QWORD *)v8 + 17) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualCollection>'};
          *((_QWORD *)v8 + 19) = 0LL;
        }
        else
        {
          v8 = 0LL;
        }
        v21 = (char *)v8;
        *((_QWORD *)v8 + 1) = &Windows::UI::Composition::VisualCollection::s_InterfaceType;
        v22 = 0LL;
        if ( *((volatile signed __int32 **)v8 + 19) != v2 )
        {
          if ( !_InterlockedExchangeAdd(v2 + 4, 1u) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 80LL))(v2);
          v10 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v8 + 19);
          *((_QWORD *)v8 + 19) = v2;
          if ( v10 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
        }
        v11 = (volatile signed __int32 *)*((_QWORD *)v2 + 3);
        *((_QWORD *)v8 + 3) = v11;
        if ( v11 != v8 && !_InterlockedExchangeAdd(v11 + 4, 1u) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 80LL))(v11);
        v12 = v8[8] & 0xFFFFFF00 | 0x1F;
        *((_DWORD *)v8 + 8) = v12;
        *((_DWORD *)v8 + 8) = v12 ^ (*((_DWORD *)v11 + 8) ^ v12) & 0x100;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, volatile signed __int32 *, char *))(**(_QWORD **)(*((_QWORD *)v11 + 53) + 32LL)
                                                                                           + 24LL))(
                *(_QWORD *)(*((_QWORD *)v11 + 53) + 32LL),
                *(unsigned int *)(*((_QWORD *)v11 + 53) + 64LL),
                v8,
                (char *)v8 + 120);
        v15 = v13;
        if ( v13 >= 0 )
        {
          v16 = *((_BYTE *)v11 + 452);
          if ( (v16 & 1) == 0 )
          {
            *((_BYTE *)v11 + 452) = v16 | 1;
            if ( !*((_DWORD *)v11 + 112) )
              Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
                (Windows::UI::Composition::CompositorCommon *)v11,
                v14);
          }
          *((_DWORD *)v8 + 31) |= 1u;
          v17 = (char *)(v8 + 32);
          if ( v17 )
            v18 = (struct Windows::UI::Composition::IVisualCollection *)(v17 + 8);
          else
            v18 = 0LL;
          *a2 = v18;
          v15 = 0;
          goto LABEL_21;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
          (const char *)(unsigned int)v13);
      }
      else
      {
        v15 = -2147024882;
      }
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v22);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v21);
      DoStackCaptureDirect(v15, 0x2C9u);
    }
LABEL_21:
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return v15;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return 2147483667LL;
}
