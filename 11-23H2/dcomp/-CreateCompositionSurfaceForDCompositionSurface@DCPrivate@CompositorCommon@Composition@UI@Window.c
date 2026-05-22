/*
 * XREFs of ?CreateCompositionSurfaceForDCompositionSurface@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@PEAPEAUICompositionSurface@345@@Z @ 0x18002A450
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x18002A71C (-SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreateCompositionSurfaceForDCompositionSurface(
        Windows::UI::Composition::CompositorCommon::DCPrivate *this,
        struct IDCompositionSurface *a2,
        struct Windows::UI::Composition::ICompositionSurface **a3)
{
  volatile signed __int32 *v3; // rsi
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  volatile signed __int32 *v8; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  char v14; // al
  int v15; // eax
  struct Windows::UI::Composition::ICompositionSurface *v16; // rdi
  signed __int32 v17; // ebp
  Microsoft::WRL2::NestableRuntimeClass *v18; // rbx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v24; // [rsp+80h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v25; // [rsp+90h] [rbp+18h] BYREF
  void *v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = (volatile signed __int32 *)((char *)this - 328);
  *a3 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 328));
  if ( (v3[8] & 2) != 0 )
  {
    v22 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, 0xC0uLL);
    v26 = v7;
    if ( v7 )
    {
      v8 = (volatile signed __int32 *)memset_0(v7, 0, 0xC0uLL);
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
        *((_QWORD *)v8 + 16) = 0LL;
        *((_QWORD *)v8 + 17) = 0LL;
        *((_QWORD *)v8 + 18) = 0LL;
        *(_QWORD *)v8 = &Windows::UI::Composition::CompositionSurfaceWrapper::`vftable';
        *((_QWORD *)v8 + 19) = &Windows::UI::Composition::CompositionSurfaceWrapper::Api::`vftable';
        *((_QWORD *)v8 + 21) = &Windows::UI::Composition::CompositionSurfaceWrapper::Partner::`vftable';
        *((_QWORD *)v8 + 23) = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v24 = (char *)v8;
      *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionSurfaceWrapper::s_InterfaceType;
      *((_QWORD *)v8 + 3) = v3;
      v26 = 0LL;
      if ( v3 != v8 && !_InterlockedExchangeAdd(v3 + 4, 1u) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 80LL))(v3);
      v10 = v8[8] & 0xFFFFFF00 | 0x1F;
      *((_DWORD *)v8 + 8) = v10;
      *((_DWORD *)v8 + 8) = v10 ^ (*((_DWORD *)v3 + 8) ^ v10) & 0x100;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, volatile signed __int32 *, char *))(**(_QWORD **)(*((_QWORD *)v3 + 53) + 32LL)
                                                                                         + 24LL))(
              *(_QWORD *)(*((_QWORD *)v3 + 53) + 32LL),
              *(unsigned int *)(*((_QWORD *)v3 + 53) + 64LL),
              v8,
              (char *)v8 + 120);
      v13 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
          (const char *)(unsigned int)v11);
        v20 = v13;
        v21 = 48LL;
      }
      else
      {
        v14 = *((_BYTE *)v3 + 452);
        if ( (v14 & 1) == 0 )
        {
          *((_BYTE *)v3 + 452) = v14 | 1;
          if ( !*((_DWORD *)v3 + 112) )
            Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
              (Windows::UI::Composition::CompositorCommon *)v3,
              v12);
        }
        *((_DWORD *)v8 + 31) |= 1u;
        if ( !a2
          || (v15 = Windows::UI::Composition::CompositionSurfaceWrapper::SetDCompSurface(
                      (Windows::UI::Composition::CompositionSurfaceWrapper *)v8,
                      a2),
              v13 = v15,
              v15 >= 0) )
        {
          v25 = (Microsoft::WRL2::NestableRuntimeClass *)v8;
          v16 = 0LL;
          if ( v8 )
          {
            v16 = (struct Windows::UI::Composition::ICompositionSurface *)(v8 + 38);
            v17 = _InterlockedExchangeAdd(v8 + 4, 1u);
            v18 = v25;
            if ( !v17 )
              (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v25 + 80LL))(v25);
            if ( v18 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 4, 0xFFFFFFFF) == 1 )
              {
                LOBYTE(v12) = 1;
                (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)v25 + 64LL))(
                  v25,
                  v12);
              }
            }
          }
          *a3 = v16;
          v13 = 0;
          goto LABEL_21;
        }
        v20 = (unsigned int)v15;
        v21 = 52LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacewrapper.cpp",
        (const char *)v20);
    }
    else
    {
      v13 = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v26);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x515,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v25);
    DoStackCaptureDirect(v13, 0x16FFu);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v22);
LABEL_21:
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
    return v13;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return 2147483667LL;
}
