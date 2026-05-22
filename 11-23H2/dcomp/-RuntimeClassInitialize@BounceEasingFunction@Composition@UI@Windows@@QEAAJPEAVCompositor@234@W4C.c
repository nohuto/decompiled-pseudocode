/*
 * XREFs of ?RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z @ 0x180175400
 * Callers:
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18011F854 (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012DE9C (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 */

__int64 __fastcall Windows::UI::Composition::BounceEasingFunction::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3,
        int a4,
        float a5)
{
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 > 2 )
  {
    v9 = 56LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbounceeasingfunction.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a4 < 0 )
  {
    v9 = 59LL;
    goto LABEL_11;
  }
  if ( !_finite(a5) || a5 < 1.0 )
  {
    v9 = 62LL;
    goto LABEL_11;
  }
  v10 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(
          (Windows::UI::Composition::CompositionObject *)a1,
          a2,
          65538);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(float *)(a1 + 176) = a5;
    result = 0LL;
    *(_DWORD *)(a1 + 168) = a3;
    *(_DWORD *)(a1 + 172) = a4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbounceeasingfunction.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  return result;
}
