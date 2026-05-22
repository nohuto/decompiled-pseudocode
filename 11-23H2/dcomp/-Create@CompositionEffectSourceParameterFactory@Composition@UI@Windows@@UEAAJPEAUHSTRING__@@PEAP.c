/*
 * XREFs of ?Create@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionEffectSourceParameter@234@@Z @ 0x18007EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionEffectSourceParameter@Composition@UI@Windows@@V1234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameter@Composition@UI@Windows@@AEAPEAUHSTRING__@@@Z @ 0x18007ECDC (--$MakeAndInitialize2@VCompositionEffectSourceParameter@Composition@UI@Windows@@V1234@AEAPEAUHST.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectSourceParameterFactory::Create(
        Windows::UI::Composition::CompositionEffectSourceParameterFactory *this,
        HSTRING a2,
        struct Windows::UI::Composition::ICompositionEffectSourceParameter **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v9 = 0LL;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::CompositionEffectSourceParameter,HSTRING__ * &>(
         &v9,
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectsourceparameter.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    return v5;
  }
  else
  {
    *a3 = (struct Windows::UI::Composition::ICompositionEffectSourceParameter *)((v9 + 24) & -(__int64)(v9 != 0));
    return 0LL;
  }
}
