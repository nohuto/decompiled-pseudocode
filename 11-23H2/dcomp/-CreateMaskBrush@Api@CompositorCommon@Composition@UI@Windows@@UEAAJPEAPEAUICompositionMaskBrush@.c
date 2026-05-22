/*
 * XREFs of ?CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@345@@Z @ 0x180047C70
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
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateMaskBrush(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ICompositionMaskBrush **a2)
{
  struct Windows::UI::Composition::Compositor *v2; // r14
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  char *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  int v9; // esi
  __int64 v10; // rbp
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  struct Windows::UI::Composition::ICompositionMaskBrush *v13; // rbx
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v23; // [rsp+90h] [rbp+8h] BYREF
  char *v24; // [rsp+98h] [rbp+10h] BYREF
  void *v25; // [rsp+A0h] [rbp+18h] BYREF
  void *v26; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (struct Windows::UI::Composition::Compositor *)&this[-4];
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v26 = 0LL;
    v24 = 0LL;
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, 0xB8uLL);
    v25 = v6;
    if ( v6 )
    {
      v7 = (char *)memset_0(v6, 0, 0xB8uLL);
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
        *((_QWORD *)v7 + 19) = &Windows::UI::Composition::CompositionMaskBrushT<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
        *(_QWORD *)v7 = &Windows::UI::Composition::CompositionMaskBrush::`vftable';
        *((_QWORD *)v7 + 21) = 0LL;
        *((_QWORD *)v7 + 22) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v24 = v7;
      *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionMaskBrushT<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
      v25 = 0LL;
      v9 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
             (Windows::UI::Composition::CompositionObject *)v7,
             v2);
      if ( v9 < 0 )
      {
        v21 = 56;
      }
      else
      {
        v10 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL);
        v9 = DirectComposition::CHandleAllocator::AllocateHandle(
               (DirectComposition::CHandleAllocator *)(v10 + 200),
               &v23);
        if ( v9 >= 0 )
        {
          DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v10, 0x10u, &v26, 0);
          v11 = v26;
          v12 = v23;
          *(_DWORD *)v26 = 1;
          v11[1] = v12;
          *((_QWORD *)v11 + 1) = 107LL;
          *((_DWORD *)v7 + 32) = v12;
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            v16 = *((_DWORD *)v7 + 32);
            v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3) + 456LL) + 160LL);
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            McTemplateU0qqxqttx_EventWriteTransfer(v20, v19, v18, v16, v16, 107, 0, 0, (char)v7);
          }
          if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 104LL))(v7) )
            DirectComposition::CDevice::ResourceSetCallbackId(
              *(DirectComposition::CDevice **)(*((_QWORD *)v7 + 3) + 456LL),
              *((_DWORD *)v7 + 32),
              *((_DWORD *)v7 + 30));
          if ( v7 )
            v13 = (struct Windows::UI::Composition::ICompositionMaskBrush *)(v7 + 152);
          else
            v13 = 0LL;
          *a2 = v13;
          goto LABEL_16;
        }
        v21 = 66;
      }
      DoStackCaptureDirect(v9, v21);
      Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v7);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmaskbrush.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      v9 = -2147024882;
    }
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v25);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x847,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v26);
    v3 = v9;
    DoStackCaptureDirect(v9, 0x18CBu);
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
