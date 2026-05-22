/*
 * XREFs of ?GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEAV1234@@Z @ 0x1801129F8
 * Callers:
 *     ?ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180111890 (-ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIsland.c)
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::GetIsland_NoLock(
        struct IUnknown *a1,
        struct Windows::UI::Composition::CompositionIsland **a2)
{
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  if ( !a1 )
  {
    v4 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    return v4;
  }
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v9);
  if ( v4 )
    goto LABEL_6;
  v5 = v9;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v9 + 3);
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
  v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v6,
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionIsland::s_InterfaceType,
         &v9);
  *a2 = v9;
  if ( v8 < 0 )
    DoStackCaptureDirect(v8, 0x1F4u);
  else
    v8 = 0;
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  return (unsigned int)v8;
}
