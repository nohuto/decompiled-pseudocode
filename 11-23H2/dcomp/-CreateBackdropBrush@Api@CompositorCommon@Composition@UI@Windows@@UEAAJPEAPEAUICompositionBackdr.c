/*
 * XREFs of ?CreateBackdropBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069C60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionBackdropType@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBackdropBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionBackdropType@456@@Z @ 0x180069CEC (--$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateBackdropBrush(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ICompositionBackdropBrush **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = this - 4;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 4);
  if ( (v2->SpinCount & 2) != 0 )
  {
    v9 = 0LL;
    v8 = 0;
    v10 = v2;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionBackdropType>(
           &v9,
           &v10,
           &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
      DoStackCaptureDirect(v5, 0x19FEu);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionBackdropBrush *)((v9 + 152) & ((unsigned __int128)-(__int128)v9 >> 64));
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
