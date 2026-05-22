/*
 * XREFs of ?CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z @ 0x18006FABC
 * Callers:
 *     ?CreateInsetClipWithInsets@Api@Compositor@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIInsetClip@345@@Z @ 0x18006D9A0 (-CreateInsetClipWithInsets@Api@Compositor@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIInsetClip@345.c)
 *     ?CreateInsetClip@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIInsetClip@345@@Z @ 0x18006FA20 (-CreateInsetClip@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIInsetClip@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVInsetClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x18006FB34 (--$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAE.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateInsetClip(
        Windows::UI::Composition::CompositorCommon *this,
        float a2,
        float a3,
        float a4,
        float a5,
        struct Windows::UI::Composition::InsetClip **a6)
{
  struct Windows::UI::Composition::InsetClip **v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  Windows::UI::Composition::CompositorCommon *v11; // [rsp+50h] [rbp+20h] BYREF
  float v12; // [rsp+58h] [rbp+28h] BYREF
  float v13; // [rsp+60h] [rbp+30h] BYREF
  int v14; // [rsp+68h] [rbp+38h] BYREF

  v14 = LODWORD(a4);
  v13 = a3;
  v12 = a2;
  v6 = a6;
  a6 = 0LL;
  v11 = this;
  *v6 = 0LL;
  v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InsetClip,Windows::UI::Composition::InsetClip,Windows::UI::Composition::Compositor *,float &,float &,float &,float &>(
         (unsigned int)&a6,
         (unsigned int)&v11,
         (unsigned int)&v12,
         (unsigned int)&v13,
         (__int64)&v14,
         (__int64)&a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EA,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a6);
    return v8;
  }
  else
  {
    *v6 = (struct Windows::UI::Composition::InsetClip *)a6;
    return 0LL;
  }
}
