/*
 * XREFs of ?CreateHoverPointerSource@Restricted@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x1800890B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionHoverPointerSource@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionHoverPointerSource@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAVVisual@456@@Z @ 0x180089180 (--$MakeAndInitialize2@VCompositionHoverPointerSource@Composition@UI@Windows@@V1234@PEAVComposito.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Restricted::CreateHoverPointerSource(
        Windows::UI::Composition::CompositorCommon::Restricted *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IHoverPointerSourcePartner **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  __int64 v6; // rdx
  int v7; // ebx
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rax
  int v9; // eax
  char *v10; // rdx
  unsigned int v12; // edx
  struct Microsoft::WRL2::ContextSession *v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Microsoft::WRL2::ContextRuntimeClass *v15; // [rsp+50h] [rbp+20h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // [rsp+60h] [rbp+30h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Restricted *)((char *)this - 312);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 312));
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  v16 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v16,
    v6);
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v3,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
         &v15);
  v8 = v15;
  v16 = v15;
  if ( v7 < 0 )
  {
    v12 = 5914;
    goto LABEL_10;
  }
  v15 = 0LL;
  v17 = v8;
  v13 = v3;
  v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionHoverPointerSource,Windows::UI::Composition::CompositionHoverPointerSource,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Visual * &>(
         &v15,
         &v13,
         &v17);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    v12 = 5917;
LABEL_10:
    DoStackCaptureDirect(v7, v12);
    goto LABEL_5;
  }
  v10 = (char *)v15 + 136;
  *a3 = (struct Windows::UI::Composition::IHoverPointerSourcePartner *)(((unsigned __int64)v15 + 136) & -(__int64)(v15 != 0LL));
  v7 = 0;
LABEL_5:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v16,
    (__int64)v10);
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v7;
}
