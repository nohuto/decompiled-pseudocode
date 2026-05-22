/*
 * XREFs of ?RuntimeClassInitialize@ComponentTransform2D@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z @ 0x180071B74
 * Callers:
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionSurfaceBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionSurfaceBrush@456@@Z @ 0x18006E6AC (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionSurface.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionShape@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionShape@456@@Z @ 0x180071ABC (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionShape@2.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionGradientBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionGradientBrush@456@@Z @ 0x180071E38 (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionGradien.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionClip@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionClip@456@@Z @ 0x180072AA4 (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionClip@23.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCaptureControllerBase@Internal@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCaptureControllerBase@Internal@456@@Z @ 0x180189F5C (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCaptureControllerB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform2D::RuntimeClassInitialize(
        Windows::UI::Composition::ComponentTransform2D *this,
        struct Windows::UI::Composition::Compositor **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // xmm1_4
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2[3], 29, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform2d.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_DWORD *)this + 46) = Windows::UI::Composition::ComponentTransform2D::sc_defaultScale;
    v6 = *(&Windows::UI::Composition::ComponentTransform2D::sc_defaultScale + 1);
    *((_DWORD *)this + 34) = 1065353216;
    *((_DWORD *)this + 37) = 1065353216;
    result = 0LL;
    *((_DWORD *)this + 47) = v6;
    *((_QWORD *)this + 25) = a2;
  }
  return result;
}
