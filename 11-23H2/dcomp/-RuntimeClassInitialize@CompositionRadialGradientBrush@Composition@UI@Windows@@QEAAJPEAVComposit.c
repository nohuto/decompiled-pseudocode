/*
 * XREFs of ?RuntimeClassInitialize@CompositionRadialGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180175D60
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRadialGradientBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801205A4 (--$MakeAndInitialize2@VCompositionRadialGradientBrush@Composition@UI@Windows@@V1234@PEAVComposit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18005DF4C (-RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRadialGradientBrush::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionRadialGradientBrush *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::CompositionGradientBrush::RuntimeClassInitialize(this, a2, 137);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 64) = 1056964608;
    *((_DWORD *)this + 65) = 1056964608;
    *((_DWORD *)this + 66) = 1056964608;
    *((_DWORD *)this + 67) = 1056964608;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionradialgradientbrush.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
