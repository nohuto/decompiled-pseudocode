/*
 * XREFs of ?ActivateInstance@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801461F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@V12345@@Details@WRL2@Microsoft@@YAJPEAPEAVWhiteNoiseEffect@Effects@Composition@UI@Windows@@@Z @ 0x18014607C (--$MakeAndInitialize2@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@V12345@@Details@WRL2@Mic.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffectFactory::ActivateInstance(
        Windows::UI::Composition::Effects::WhiteNoiseEffectFactory *this,
        struct IInspectable **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Effects::WhiteNoiseEffect,Windows::UI::Composition::Effects::WhiteNoiseEffect>(&v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = (struct IInspectable *)(((unsigned __int64)v7 + 24) & -(__int64)(v7 != 0LL));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtwhitenoiseeffect.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return v4;
  }
}
