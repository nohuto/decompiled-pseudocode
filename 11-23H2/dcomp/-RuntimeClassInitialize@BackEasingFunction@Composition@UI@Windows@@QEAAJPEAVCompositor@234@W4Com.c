/*
 * XREFs of ?RuntimeClassInitialize@BackEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x18017523C
 * Callers:
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18011F780 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Com.c)
 *     ??$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBackEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012DDC8 (--$MakeAndInitialize2@VBackEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::BackEasingFunction::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3,
        float a4)
{
  const char *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  const char *v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 > 2 )
  {
    v7 = "Invalid easing function mode.";
    v8 = 55LL;
LABEL_9:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbackeasingfunction.cpp",
      (const char *)0x80070057LL,
      (int)v7,
      v12);
    return 2147942487LL;
  }
  if ( !_finite(a4) || a4 < 0.0 )
  {
    v7 = "Invalid amplitude.";
    v8 = 60LL;
    goto LABEL_9;
  }
  v9 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionObject *)a1,
         a2,
         65537);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *(float *)(a1 + 172) = a4;
    result = 0LL;
    *(_DWORD *)(a1 + 168) = a3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtbackeasingfunction.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  return result;
}
