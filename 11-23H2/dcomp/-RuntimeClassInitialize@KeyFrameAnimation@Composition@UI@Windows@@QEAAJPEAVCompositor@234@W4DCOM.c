/*
 * XREFs of ?RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18008300C
 * Callers:
 *     ??$MakeAndInitialize2@VBooleanKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVBooleanKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005E8D0 (--$MakeAndInitialize2@VBooleanKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VVector3KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector3KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180060DB0 (--$MakeAndInitialize2@VVector3KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPathKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801210D0 (--$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ??$MakeAndInitialize2@VQuaternionKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVQuaternionKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121314 (--$MakeAndInitialize2@VQuaternionKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@.c)
 *     ??$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVector4KeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180121D34 (--$MakeAndInitialize2@VVector4KeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        int a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 484) = 0;
  *(_QWORD *)(a1 + 440) = 2500000LL;
  *(_DWORD *)(a1 + 416) = a3;
  *(_DWORD *)(a1 + 472) = 1065353216;
  v4 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionObject *)a1,
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    *(_DWORD *)(a1 + 296) = 1;
    return 0;
  }
  return v5;
}
