/*
 * XREFs of ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800488A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030 (-ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z.c)
 *     ?RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ @ 0x1800561E0 (-RegisterConversationWithDCompK@ProxyObject@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateSurfaceBrush(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a2)
{
  char *v2; // r14
  unsigned int v3; // ebp
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  char *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  int Resource; // edi
  char *v10; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v12; // rbx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v22; // [rsp+90h] [rbp+8h] BYREF
  void *v23; // [rsp+98h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+A0h] [rbp+18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v25; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (char *)&this[-27];
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (v2[32] & 2) != 0 )
  {
    v25 = 0LL;
    v24 = 0LL;
    v22 = 0LL;
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, 0x130uLL);
    v23 = v6;
    if ( v6 )
    {
      v7 = (char *)memset_0(v6, 0, 0x130uLL);
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
        *((_QWORD *)v7 + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
        *((_QWORD *)v7 + 19) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
        *((_QWORD *)v7 + 20) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Windows::UI::Composition::ICompositionSurfaceBrush2'};
        *((_QWORD *)v7 + 21) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurfaceBrush3>'};
        *((_QWORD *)v7 + 23) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Internal::`vftable';
        *(_QWORD *)v7 = &Windows::UI::Composition::CompositionSurfaceBrush::`vftable'{for `Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>'};
        *((_QWORD *)v7 + 25) = &Windows::UI::Composition::CompositionSurfaceBrush::`vftable'{for `Windows::UI::Composition::SurfaceBindPoint::IOwner'};
        *((_QWORD *)v7 + 26) = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
        *((_QWORD *)v7 + 27) = 0LL;
        *((_QWORD *)v7 + 29) = 0LL;
        *((_QWORD *)v7 + 30) = 0LL;
        *((_QWORD *)v7 + 31) = 0LL;
        *((_QWORD *)v7 + 32) = 0LL;
        *((_QWORD *)v7 + 33) = 0LL;
        *((_QWORD *)v7 + 36) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v22 = v7;
      *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
      v23 = 0LL;
      Resource = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
                   (Windows::UI::Composition::CompositionObject *)v7,
                   (struct Windows::UI::Composition::Compositor *)v2);
      if ( Resource < 0 )
      {
        v20 = 56;
      }
      else
      {
        Resource = DirectComposition::CDevice::ChannelCreateResource(
                     *(DirectComposition::CDevice **)(*((_QWORD *)v7 + 3) + 456LL),
                     0xB5u,
                     0,
                     0,
                     (unsigned int *)v7 + 32);
        if ( Resource >= 0 )
        {
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            v15 = *((_DWORD *)v7 + 32);
            v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            McTemplateU0qqxqttx_EventWriteTransfer(v19, v18, v17, v15, v15, 181, 0, 0, (char)v7);
          }
          Windows::UI::Composition::ProxyObject::RegisterConversationWithDCompK((Windows::UI::Composition::ProxyObject *)v7);
          if ( v7 )
            v10 = v7 + 200;
          else
            v10 = 0LL;
          if ( *((char **)v7 + 27) != v2 )
          {
            if ( _InterlockedIncrement((volatile signed __int32 *)v2 + 4) == 1 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 80LL))(v2);
            v11 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v7 + 27);
            *((_QWORD *)v7 + 27) = v2;
            if ( v11 )
              Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
          }
          *((_QWORD *)v7 + 28) = v10;
          *((_DWORD *)v7 + 68) = 1056964608;
          *((_DWORD *)v7 + 69) = 1056964608;
          *((_DWORD *)v7 + 71) = 2;
          *((_DWORD *)v7 + 70) = 1;
          if ( v7 )
            v12 = (struct Windows::UI::Composition::ICompositionSurfaceBrush *)(v7 + 152);
          else
            v12 = 0LL;
          *a2 = v12;
          goto LABEL_21;
        }
        v20 = 66;
      }
      DoStackCaptureDirect(Resource, v20);
      Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v7);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)(unsigned int)Resource);
    }
    else
    {
      Resource = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v23);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)Resource);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v24);
    v3 = Resource;
    DoStackCaptureDirect(Resource, 0x4ACu);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v25);
LABEL_21:
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
