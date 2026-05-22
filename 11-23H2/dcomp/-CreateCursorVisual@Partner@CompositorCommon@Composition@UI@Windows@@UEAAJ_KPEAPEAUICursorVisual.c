/*
 * XREFs of ?CreateCursorVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICursorVisualPartner@345@@Z @ 0x1801258A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVCursorVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEA_K@Z @ 0x180120B5C (--$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Detai.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::CreateCursorVisual(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        unsigned __int64 a2,
        struct Windows::UI::Composition::ICursorVisualPartner **a3)
{
  struct Windows::UI::Composition::Compositor *v3; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v10 = 0LL;
    v11 = a2;
    v12 = v3;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CursorVisual,Windows::UI::Composition::CursorVisual,Windows::UI::Composition::Compositor *,unsigned __int64 &>(
           &v10,
           &v12,
           &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a3 = (struct Windows::UI::Composition::ICursorVisualPartner *)(((unsigned __int64)v10 + 312) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64));
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x533,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
      DoStackCaptureDirect(v6, 0x1C77u);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
