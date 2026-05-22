/*
 * XREFs of ?RuntimeClassInitialize@ElasticEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z @ 0x180176D5C
 * Callers:
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x180120DF8 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4.c)
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012E040 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ElasticEasingFunction::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3,
        int a4,
        float a5)
{
  const char *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // edi
  const char *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 > 2 )
  {
    v9 = "Invalid easing function mode";
    v10 = 56LL;
LABEL_3:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtelasticeasingfunction.cpp",
      (const char *)0x80070057LL,
      (int)v9,
      v14);
    return 2147942487LL;
  }
  if ( a4 < 0 )
  {
    v9 = "Invalid oscillations";
    v10 = 61LL;
    goto LABEL_3;
  }
  if ( !_finite(a5) )
  {
    v9 = "Invalid springiness";
    v10 = 66LL;
    goto LABEL_3;
  }
  v12 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(
          (Windows::UI::Composition::CompositionObject *)a1,
          a2,
          65540);
  v13 = v12;
  if ( v12 >= 0 )
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
      (void *)0x46,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtelasticeasingfunction.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  return result;
}
