/*
 * XREFs of ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8
 * Callers:
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ @ 0x180010628 (-DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180111584 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@W4MIL_RESOURCE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Connection_2_ReconfigureIslandSite_NoLock(
        struct IUnknown *a1,
        struct Windows::UI::Composition::CompositionIslandSite **a2,
        struct Windows::UI::Composition::CompositionIsland **a3,
        struct Windows::UI::Composition::Compositor **a4,
        bool *a5,
        void **a6)
{
  unsigned int v9; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // r13
  Microsoft::WRL2::ContextSession *LockSemaphore; // rdi
  int v14; // eax
  int v15; // eax
  Microsoft::WRL2::NestableRuntimeClass *v16; // rbx
  unsigned int v17; // r14d
  struct Windows::UI::Composition::CompositionIsland *v18; // rax
  char v19; // r14
  struct Windows::UI::Composition::Compositor *v20; // r15
  void **v21; // rcx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::UI::Composition::Compositor *v25; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  Microsoft::WRL2::NestableRuntimeClass *v27; // [rsp+70h] [rbp+40h] BYREF
  struct Windows::UI::Composition::CompositionIslandSite **v28; // [rsp+78h] [rbp+48h]
  char v29; // [rsp+80h] [rbp+50h] BYREF

  v28 = a2;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v27 = 0LL;
  *a5 = 0;
  *a6 = 0LL;
  if ( !a1 )
  {
    v9 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_8:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v27);
    return v9;
  }
  v9 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v27);
  if ( v9 )
    goto LABEL_8;
  v10 = v27;
  v11 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v27 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v11);
  if ( (*((_BYTE *)v10 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v11);
    goto LABEL_8;
  }
  LockSemaphore = (Microsoft::WRL2::ContextSession *)v11->LockSemaphore;
  ++*((_DWORD *)LockSemaphore + 22);
  if ( *((_DWORD *)LockSemaphore + 20) != *((_DWORD *)LockSemaphore + 21) + *((_DWORD *)LockSemaphore + 22) )
    Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
  Microsoft::WRL2::ContextSession::EnsureMessageExtensions(LockSemaphore);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)LockSemaphore + 16) + 96LL))(*((_QWORD *)LockSemaphore + 16));
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1809LL,
      (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
      (const char *)(unsigned int)v14,
      v24);
  v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v11,
          a1,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionIslandSite::s_InterfaceType,
          &v27);
  v16 = v27;
  v17 = v15;
  if ( v15 < 0 )
  {
    DoStackCaptureDirect(v15, 0x223u);
LABEL_32:
    if ( !v16 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v18 = (struct Windows::UI::Composition::CompositionIsland *)*((_QWORD *)v27 + 23);
  v19 = 0;
  if ( v18 == (struct Windows::UI::Composition::CompositionIsland *)a4 )
  {
    v17 = 0;
    goto LABEL_32;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v27 + 304LL))(v27);
    Windows::UI::Composition::CompositionIslandSite::DestroyResources(v16);
    if ( a3 )
    {
      *a3 = (struct Windows::UI::Composition::CompositionIsland *)*((_QWORD *)v16 + 23);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*((Microsoft::WRL2::NestableRuntimeClass **)v16 + 23));
    }
    *((_QWORD *)v16 + 23) = 0LL;
    *((_QWORD *)v16 + 24) = 0LL;
    *((_DWORD *)v16 + 45) = 0;
    ++*((_DWORD *)v16 + 54);
  }
  if ( !a4 )
    goto LABEL_23;
  v20 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)v16 + 3);
  LOBYTE(v27) = 1;
  v25 = v20;
  if ( v20 != a4[3] )
  {
    v29 = 1;
    v24 = 196;
    v22 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor * &,enum MIL_RESOURCE_TYPE,bool>(
            (Windows::UI::Composition::Visual **)v16 + 25,
            &v25,
            (unsigned int *)&v24,
            (bool *)&v29);
    v17 = v22;
    if ( v22 < 0 )
    {
      v23 = 610;
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)v16 + 26,
        0LL);
      v22 = Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(
              (DirectComposition::CDevice **)v20,
              *((struct Windows::UI::Composition::ProxyObject **)v16 + 25),
              (void **)v16 + 26);
      v17 = v22;
      if ( v22 >= 0 )
      {
        *((_DWORD *)v16 + 45) = 2;
        goto LABEL_22;
      }
      v23 = 614;
    }
    DoStackCaptureDirect(v22, v23);
LABEL_33:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v16);
    goto LABEL_34;
  }
  *((_DWORD *)v16 + 45) = 1;
LABEL_22:
  v19 = (char)v27;
LABEL_23:
  v21 = a6;
  *a5 = v19;
  v17 = 0;
  *v21 = (void *)*((_QWORD *)v16 + 26);
  *v28 = v16;
LABEL_34:
  Microsoft::WRL2::ContextSession::EndPrivateCallout(LockSemaphore);
  Microsoft::WRL2::ContextSession::EndApiEntry(v11);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
  return v17;
}
