/*
 * XREFs of ?RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x180079640
 * Callers:
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x1800796D8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Co.c)
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E1F8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z @ 0x180079E54 (-RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::PowerEasingFunction::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        float a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  const char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 > 2 )
  {
    v10 = "Invalid easing function mode.";
    v11 = 55LL;
LABEL_8:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpowereasingfunction.cpp",
      (const char *)0x80070057LL,
      (int)v10,
      v12);
    return 2147942487LL;
  }
  if ( !_finite(a4) )
  {
    v10 = "Invalid power value.";
    v11 = 60LL;
    goto LABEL_8;
  }
  v7 = Windows::UI::Composition::CompositionEasingFunction::RuntimeClassInitialize(a1, a2, 65542LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpowereasingfunction.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    *(float *)(a1 + 172) = a4;
    result = 0LL;
    *(_DWORD *)(a1 + 168) = a3;
  }
  return result;
}
