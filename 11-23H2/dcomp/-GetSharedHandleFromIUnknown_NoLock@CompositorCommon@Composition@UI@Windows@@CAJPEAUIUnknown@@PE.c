/*
 * XREFs of ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PEAPEAX@Z @ 0x180128398
 * Callers:
 *     ?OpenSharedTargetFromVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualTargetPartner@345@@Z @ 0x180128A40 (-OpenSharedTargetFromVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@34.c)
 *     ?OpenSharedVisualFromTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisualTargetPartner@345@PEAPEAUIVisual@345@@Z @ 0x180128C70 (-OpenSharedVisualFromTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisualTar.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z @ 0x1800942D4 (-OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAP.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::GetSharedHandleFromIUnknown_NoLock(
        struct IUnknown *a1,
        void **a2)
{
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // edx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( !a1 )
  {
    v4 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return v4;
  }
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v13);
  if ( v4 )
    goto LABEL_6;
  v5 = v13;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v13 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v5 + 32) & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v6);
    goto LABEL_6;
  }
  v13 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v13, v7);
  v9 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
         &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 4456;
    goto LABEL_12;
  }
  v9 = Windows::UI::Composition::CompositorCommon::OpenSharedResourceHandle(
         *((DirectComposition::CDevice ***)v13 + 3),
         v13,
         a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 4458;
LABEL_12:
    DoStackCaptureDirect(v9, v12);
    goto LABEL_13;
  }
  v10 = 0;
LABEL_13:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock((volatile signed __int32 **)&v13, v11);
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  return v10;
}
