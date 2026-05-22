/*
 * XREFs of ?CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAVCompositionEffectFactory@234@@Z @ 0x180019C84
 * Callers:
 *     ?CreateEffectFactoryWithProperties@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@PEAPEAUICompositionEffectFactory@345@@Z @ 0x180019700 (-CreateEffectFactoryWithProperties@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffe.c)
 *     ?CreateEffectFactory@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAPEAUICompositionEffectFactory@345@@Z @ 0x180019B90 (-CreateEffectFactory@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Gra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIGraphicsEffect@Effects@Graphics@4@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIGraphicsEffect@Effects@Graphics@6@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@@Z @ 0x180019F38 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateEffectFactory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  *a4 = 0LL;
  v9 = 0LL;
  v12 = a1;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::Compositor *,Windows::Graphics::Effects::IGraphicsEffect * &,Windows::Foundation::Collections::IIterable<HSTRING__ *> * &>(
         &v9,
         &v12,
         &v10,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x636,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    return v6;
  }
  else
  {
    *a4 = v9;
    return 0LL;
  }
}
