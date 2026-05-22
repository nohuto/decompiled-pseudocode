/*
 * XREFs of ?RuntimeClassInitialize@StepEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@H@Z @ 0x180079DEC
 * Callers:
 *     ??$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@Details@WRL2@Microsoft@@YAJPEAPEAVStepEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAH@Z @ 0x180079828 (--$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 */

__int64 __fastcall Windows::UI::Composition::StepEasingFunction::RuntimeClassInitialize(
        Windows::UI::Composition::StepEasingFunction *this,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 <= 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtstepeasingfunction.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v5 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(this, a2, 2LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtstepeasingfunction.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    else
    {
      *((_DWORD *)this + 43) = 0;
      *((_WORD *)this + 90) = 0;
      result = 0LL;
      *((_DWORD *)this + 42) = a3;
      *((_DWORD *)this + 44) = a3;
    }
  }
  return result;
}
