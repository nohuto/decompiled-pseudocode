/*
 * XREFs of ?RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z @ 0x18017D3DC
 * Callers:
 *     ??$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSineEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@@Z @ 0x180121894 (--$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Com.c)
 *     ??$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSineEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@@Z @ 0x18012E2CC (--$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::SineEasingFunction::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionObject *a1,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // esi
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 <= 2 )
  {
    v6 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(a1, a2, 65543);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *((_DWORD *)a1 + 42) = a3;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsineeasingfunction.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x36,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsineeasingfunction.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid easing function mode.",
      v8);
    return 2147942487LL;
  }
}
