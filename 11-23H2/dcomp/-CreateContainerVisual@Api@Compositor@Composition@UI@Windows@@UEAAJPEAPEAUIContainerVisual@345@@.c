/*
 * XREFs of ?CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z @ 0x180059C30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030 (-ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateContainerVisual(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IContainerVisual **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // r14
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  char *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  char *v9; // rax
  int Resource; // esi
  int *v11; // r12
  __int64 v12; // rax
  int v13; // esi
  int v14; // r13d
  DirectComposition::CDevice *v15; // rbp
  _DWORD *v16; // rax
  struct Windows::UI::Composition::IContainerVisual *v17; // rbx
  __int64 v19; // rcx
  int v20; // ebp
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // edx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v28; // [rsp+90h] [rbp+8h] BYREF
  void *v29; // [rsp+98h] [rbp+10h] BYREF
  void *v30; // [rsp+A0h] [rbp+18h] BYREF

  v2 = (struct Windows::UI::Composition::Compositor *)&this[-27];
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v30 = 0LL;
    v28 = 0LL;
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, 0x138uLL);
    v29 = v6;
    if ( v6 )
    {
      v7 = (char *)memset_0(v6, 0, 0x138uLL);
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
        *(_QWORD *)v7 = &Windows::UI::Composition::ContainerVisual::`vftable';
        *((_QWORD *)v7 + 37) = &Windows::UI::Composition::ContainerVisual::Api::`vftable';
      }
      else
      {
        v7 = 0LL;
      }
      v28 = v7;
      *((_QWORD *)v7 + 1) = &Windows::UI::Composition::ContainerVisual::s_InterfaceType;
      v29 = 0LL;
      Resource = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
                   (Windows::UI::Composition::CompositionObject *)v7,
                   v2);
      if ( Resource < 0 )
      {
        v26 = 56;
      }
      else
      {
        v11 = (int *)(v7 + 128);
        Resource = DirectComposition::CDevice::ChannelCreateResource(
                     *(DirectComposition::CDevice **)(*((_QWORD *)v7 + 3) + 456LL),
                     196,
                     0,
                     0,
                     (unsigned int *)v7 + 32);
        if ( Resource >= 0 )
        {
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
            v20 = *v11;
            v21 = *v11;
            v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
            McTemplateU0qqxqttx_EventWriteTransfer(v25, v24, v23, v20, v21, 196, 0, 0, (char)v7);
          }
          if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 104LL))(v7) )
          {
            v12 = *((_QWORD *)v7 + 3);
            v13 = *v11;
            v14 = *((_DWORD *)v7 + 30);
            v15 = *(DirectComposition::CDevice **)(v12 + 456);
            if ( *v11 )
            {
              DirectComposition::CDevice::BeginKernelCommand(*(DirectComposition::CDevice **)(v12 + 456), 0xCu, &v30, 0);
              v16 = v30;
              *(_DWORD *)v30 = 7;
              v16[1] = v13;
              v16[2] = v14;
              DirectComposition::CDevice::NotifyDeviceOwnerOfChange(v15);
            }
          }
          *((_DWORD *)v7 + 65) &= 0xFFFFFE00;
          *((_WORD *)v7 + 132) = 256;
          if ( v7 )
            v17 = (struct Windows::UI::Composition::IContainerVisual *)(v7 + 296);
          else
            v17 = 0LL;
          *a2 = v17;
          goto LABEL_19;
        }
        v26 = 66;
      }
      DoStackCaptureDirect(Resource, v26);
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
    }
    else
    {
      Resource = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v29);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v28);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)Resource);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v30);
    v3 = Resource;
    DoStackCaptureDirect(Resource, 0x321u);
LABEL_19:
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
