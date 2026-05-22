/*
 * XREFs of ?ConnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@@Z @ 0x18006B760
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18006BCE4 (-ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV12.c)
 *     ??4?$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionIslandSite@Composition@UI@Windows@@@Z @ 0x18006BDF4 (--4-$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComp.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandStatics::ConnectIsland(
        Windows::UI::Composition::CompositionIslandStatics *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rcx
  const char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+58h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+68h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v13 = "IslandSite is nullptr";
    v14 = 2117LL;
LABEL_14:
    v4 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)0x80070057LL,
      (int)v13,
      v15);
    return v4;
  }
  if ( !a3 )
  {
    v13 = "Island is nullptr";
    v14 = 2118LL;
    goto LABEL_14;
  }
  v17 = 0LL;
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v17);
  if ( !v4 )
  {
    v5 = v17;
    v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v17 + 3);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
    if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
    {
      v18 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionIslandSite>::operator=(&v18, v5);
      v17 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
      v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             (struct Microsoft::WRL2::ContextSession *)v6,
             a3,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionIsland::s_InterfaceType,
             &v17);
      v8 = v7;
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0x851u);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
        v12 = v18;
        if ( !v18 )
          goto LABEL_9;
      }
      else
      {
        v9 = v18;
        v10 = Windows::UI::Composition::CompositionIsland::ConnectIsland(v18, v17);
        v8 = v10;
        if ( v10 < 0 )
          DoStackCaptureDirect(v10, 0x854u);
        else
          v8 = 0;
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
        if ( !v9 )
          goto LABEL_9;
        v12 = v9;
      }
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
LABEL_9:
      Microsoft::WRL2::ContextSession::EndApiEntry(v6);
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
      return v8;
    }
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
  return v4;
}
