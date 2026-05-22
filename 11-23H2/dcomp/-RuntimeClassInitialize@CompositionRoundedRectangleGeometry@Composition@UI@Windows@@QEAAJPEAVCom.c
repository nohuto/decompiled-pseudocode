/*
 * XREFs of ?RuntimeClassInitialize@CompositionRoundedRectangleGeometry@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180067D08
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRoundedRectangleGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180067C4C (--$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRoundedRectangleGeometry::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionRoundedRectangleGeometry *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 138, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionroundedrectanglegeometry.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0x15u,
      1LL);
    return 0LL;
  }
}
