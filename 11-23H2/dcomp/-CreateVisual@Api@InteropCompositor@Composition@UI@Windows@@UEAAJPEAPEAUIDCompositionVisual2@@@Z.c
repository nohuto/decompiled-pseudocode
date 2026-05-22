/*
 * XREFs of ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590
 * Callers:
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x1800AC1D0 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@W7EAAJPEAPEAUIDCompositionVisual2@@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z @ 0x18003FF34 (-CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCProxyTable@DirectComposition@@$0A@@@QEAAJPEFBQEAVCProxyTable@DirectComposition@@I@Z @ 0x180073110 (-AddMultipleAndSet@-$DynArray@PEAVCProxyTable@DirectComposition@@$0A@@@QEAAJPEFBQEAVCProxyTable@.c)
 *     ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C (-ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z.c)
 *     ?AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ @ 0x180075A18 (-AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??_GCProxyTable@DirectComposition@@QEAAPEAXI@Z @ 0x18008551C (--_GCProxyTable@DirectComposition@@QEAAPEAXI@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestricted@@@Z @ 0x1800A3580 (-Attach@-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestrict.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??1?$RefPtr@VInteropVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x18010D9FC (--1-$RefPtr@VInteropVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158AB4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVisual(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionVisual2 **a2)
{
  char *v2; // rsi
  HANDLE ProcessHeap; // rax
  void *v6; // rax
  unsigned int v7; // edi
  char *v8; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  char *v10; // rax
  int v11; // eax
  _QWORD *Proxy; // rdi
  _DWORD *v13; // r9
  unsigned int v14; // r8d
  _QWORD *v15; // r14
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  struct IDCompositionVisual2 *v21; // rax
  int v22; // eax
  struct Microsoft::WRL2::ContextSession::DeferredOperation *v23; // rbx
  __int64 v24[3]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DirectComposition::CProxyTable *v26; // [rsp+80h] [rbp+8h] BYREF
  void *v27; // [rsp+88h] [rbp+10h] BYREF
  char *v28; // [rsp+90h] [rbp+18h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v2 = (char *)this - 1208;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1208));
  if ( (v2[32] & 2) == 0 )
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
    return 2147483667LL;
  }
  v24[0] = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x148uLL);
  v27 = v6;
  if ( v6 )
  {
    v8 = (char *)memset_0(v6, 0, 0x148uLL);
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
      v10 = 0LL;
      if ( v8 != (char *)-136LL )
        v10 = v8;
      *((_QWORD *)v8 + 20) = v10;
      *((_QWORD *)v8 + 21) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual'};
      *((_QWORD *)v8 + 22) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual2,Windows::UI::Composition::IVisual3,Windows::UI::Composition::IVisual4>'};
      *((_QWORD *)v8 + 23) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Windows::UI::Composition::IVisual3'};
      *((_QWORD *)v8 + 24) = &Windows::UI::Composition::Visual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisual4>'};
      *((_QWORD *)v8 + 26) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner'};
      *((_QWORD *)v8 + 27) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>'};
      *((_QWORD *)v8 + 28) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Windows::UI::Composition::Internal::IVisualInternal'};
      *((_QWORD *)v8 + 29) = &Windows::UI::Composition::Visual::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::IVisualPrivate>'};
      *(_QWORD *)v8 = &Windows::UI::Composition::InteropVisual::`vftable';
      *((_QWORD *)v8 + 37) = &Windows::UI::Composition::InteropVisual::Api::`vftable';
      *((_QWORD *)v8 + 36) = 0LL;
      *((_QWORD *)v8 + 39) = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v28 = v8;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::InteropVisual::s_InterfaceType;
    v27 = 0LL;
    v11 = Windows::UI::Composition::Visual::RuntimeClassInitialize(
            (Windows::UI::Composition::Visual *)v8,
            (struct Windows::UI::Composition::Compositor *)v2,
            0xC4u,
            0,
            0LL);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v8[320] = 0;
      Proxy = 0LL;
      v13 = (_DWORD *)*((_QWORD *)v2 + 57);
      v14 = 0;
      v15 = v13 + 96;
      if ( v13[102] )
      {
        v16 = DirectComposition::CProxyTable::s_maxProxyTableSize;
        while ( 1 )
        {
          v17 = *(_QWORD *)(*v15 + 8LL * v14);
          Proxy = *(_QWORD **)(v17 + 24);
          if ( Proxy )
            break;
          v18 = *(unsigned int *)(v17 + 12);
          if ( v18 >= v16 )
          {
            Proxy = 0LL;
          }
          else
          {
            ++*(_DWORD *)(v17 + 8);
            *(_DWORD *)(v17 + 12) = v18 + 1;
            Proxy = (_QWORD *)(v17 + 16 * (v18 + 2));
            if ( Proxy )
              goto LABEL_29;
          }
          if ( ++v14 >= v13[102] )
            goto LABEL_23;
        }
        v20 = Proxy[1];
        ++*(_DWORD *)(v17 + 8);
        *(_QWORD *)(v17 + 24) = v20;
      }
      else
      {
LABEL_23:
        v26 = 0LL;
        if ( (int)DirectComposition::CProxyTable::CreateProxyTable((struct DirectComposition::CDevice *)v13, &v26) < 0 )
          goto LABEL_38;
        if ( (int)DynArray<DirectComposition::CProxyTable *,0>::AddMultipleAndSet((__int64)v15, &v26) < 0 )
        {
          if ( v26 )
            DirectComposition::CProxyTable::`scalar deleting destructor'(v26, v19);
        }
        else
        {
          Proxy = DirectComposition::CProxyTable::AllocateProxy(v26);
        }
LABEL_29:
        if ( !Proxy )
LABEL_38:
          wil::details::in1diag3::_FailFast_NullAlloc(
            retaddr,
            (void *)0x35,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisual.cpp",
            (const char *)v13);
      }
      *((_DWORD *)Proxy + 3) = *((_DWORD *)v8 + 32);
      *((_DWORD *)Proxy + 2) = 1;
      *Proxy = &DirectComposition::CVisualProxy::`vftable';
      InteropProxyRef<IDCompositionVisualRestricted>::Attach(v8 + 312);
      *((_DWORD *)v8 + 8) |= 0x40u;
      v21 = (struct IDCompositionVisual2 *)(v8 + 296);
      *((_DWORD *)v8 + 65) |= 0x11000u;
      v7 = 0;
      if ( !v8 )
        v21 = 0LL;
      *a2 = v21;
      goto LABEL_33;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropvisual.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v27);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v28);
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v27);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v28);
    v7 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB3,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
    (const char *)v7);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::InteropVisual>::~RefPtr<Windows::UI::Composition::InteropVisual>(&v29);
  DoStackCaptureDirect(v7, 0x2DDu);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(v24);
LABEL_33:
  v22 = *((_DWORD *)v2 + 21) + *((_DWORD *)v2 + 22);
  if ( --*((_DWORD *)v2 + 20) != v22 )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession end counts");
  v23 = (struct Microsoft::WRL2::ContextSession::DeferredOperation *)*((_QWORD *)v2 + 17);
  *((_QWORD *)v2 + 17) = 0LL;
  *((_QWORD *)v2 + 18) = 0LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)v2 + 1);
  if ( v23 )
    Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLock(v23);
  return v7;
}
