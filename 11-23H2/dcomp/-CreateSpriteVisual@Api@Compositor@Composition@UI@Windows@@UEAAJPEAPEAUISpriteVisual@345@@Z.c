/*
 * XREFs of ?CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z @ 0x180055CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030 (-ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z.c)
 *     ?RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ @ 0x1800561E0 (-RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateSpriteVisual(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ISpriteVisual **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // r14
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  char *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  char *v9; // rax
  int Resource; // esi
  struct Windows::UI::Composition::ISpriteVisual *v11; // rbx
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v21; // [rsp+80h] [rbp+8h] BYREF
  void *v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  v2 = (struct Windows::UI::Composition::Compositor *)&this[-27];
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v23 = 0LL;
    v21 = 0LL;
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, 0x158uLL);
    v22 = v6;
    if ( v6 )
    {
      v7 = (char *)memset_0(v6, 0, 0x158uLL);
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
        v9 = 0LL;
        if ( v7 != (char *)-136LL )
          v9 = v7;
        *((_QWORD *)v7 + 20) = v9;
        *((_QWORD *)v7 + 21) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual'};
        *((_QWORD *)v7 + 22) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual2,Windows::UI::Composition::IVisual3,Windows::UI::Composition::IVisual4>'};
        *((_QWORD *)v7 + 23) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual3'};
        *((_QWORD *)v7 + 24) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual4>'};
        *((_QWORD *)v7 + 26) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner'};
        *((_QWORD *)v7 + 27) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>'};
        *((_QWORD *)v7 + 28) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::Internal::IVisualInternal'};
        *((_QWORD *)v7 + 29) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::IVisualPrivate>'};
        *((_QWORD *)v7 + 36) = 0LL;
        *((_QWORD *)v7 + 37) = &Windows::UI::Composition::ContainerVisual::Api::`vftable';
        *(_QWORD *)v7 = &Windows::UI::Composition::SpriteVisual::`vftable';
        *((_QWORD *)v7 + 39) = &Windows::UI::Composition::SpriteVisual::Api::`vftable'{for `Windows::UI::Composition::ISpriteVisual'};
        *((_QWORD *)v7 + 40) = &Windows::UI::Composition::SpriteVisual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ISpriteVisual2>'};
        *((_QWORD *)v7 + 42) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v21 = v7;
      *((_QWORD *)v7 + 1) = &Windows::UI::Composition::SpriteVisual::s_InterfaceType;
      v22 = 0LL;
      Resource = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
                   (Windows::UI::Composition::CompositionObject *)v7,
                   v2);
      if ( Resource < 0 )
      {
        v19 = 56;
      }
      else
      {
        Resource = DirectComposition::CDevice::ChannelCreateResource(
                     *(DirectComposition::CDevice **)(*((_QWORD *)v7 + 3) + 456LL),
                     0xB2u,
                     0,
                     0,
                     (unsigned int *)v7 + 32);
        if ( Resource >= 0 )
        {
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            v14 = *((_DWORD *)v7 + 32);
            v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            McTemplateU0qqxqttx_EventWriteTransfer(v18, v17, v16, v14, v14, 178, 0, 0, (char)v7);
          }
          Windows::UI::Composition::ProxyObject::RegisterConversationWithDCompK((Windows::UI::Composition::ProxyObject *)v7);
          *((_DWORD *)v7 + 65) &= 0xFFFFFE00;
          *((_WORD *)v7 + 132) = 256;
          if ( v7 )
            v11 = (struct Windows::UI::Composition::ISpriteVisual *)(v7 + 312);
          else
            v11 = 0LL;
          *a2 = v11;
          goto LABEL_16;
        }
        v19 = 66;
      }
      DoStackCaptureDirect(Resource, v19);
      Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v7);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)Resource);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcontainervisual.cpp",
        (const char *)(unsigned int)Resource);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspritevisual.cpp",
        (const char *)(unsigned int)Resource);
    }
    else
    {
      Resource = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v22);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v21);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x923,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)Resource);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v23);
    v3 = Resource;
    DoStackCaptureDirect(Resource, 0x491u);
LABEL_16:
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
    return v3;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return 2147483667LL;
}
