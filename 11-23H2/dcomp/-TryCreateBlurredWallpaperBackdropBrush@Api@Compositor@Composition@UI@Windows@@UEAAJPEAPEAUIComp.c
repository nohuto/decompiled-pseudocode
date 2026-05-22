/*
 * XREFs of ?TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z @ 0x180069AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180069864 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ??$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionBackdropType@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionBackdropBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionBackdropType@456@@Z @ 0x180069CEC (--$MakeAndInitialize2@VCompositionBackdropBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180069E0C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::TryCreateBlurredWallpaperBackdropBrush(
        Windows::UI::Composition::Compositor::Api *this,
        struct Windows::UI::Composition::ICompositionBackdropBrush **a2)
{
  char v4; // bl
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( byte_18021CCD8 )
  {
    v4 = byte_18021CCD9;
  }
  else
  {
    v4 = 0;
    if ( RegGetHKLMDword(
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Wallpaper",
           L"WallpaperSurfaceProvidedToDwm",
           &v12)
      && v12 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
        1u,
        v9,
        v10);
      v4 = 1;
    }
    byte_18021CCD8 = 1;
    byte_18021CCD9 = v4;
  }
  if ( !v4 )
    return 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1096);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v5->SpinCount & 2) != 0 )
  {
    v13 = 0LL;
    v12 = 2;
    v14 = v5;
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionBackdropType>(
           &v13,
           &v14,
           &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
      DoStackCaptureDirect(v7, 0x58Du);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionBackdropBrush *)((v13 + 152) & ((unsigned __int128)-(__int128)v13 >> 64));
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
