/*
 * XREFs of ??0CompositionGeometry@Composition@UI@Windows@@IEAA@XZ @ 0x1800408F8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPathGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPathGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180040830 (--$MakeAndInitialize2@VCompositionPathGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 *     ??$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRoundedRectangleGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180067C4C (--$MakeAndInitialize2@VCompositionRoundedRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCom.c)
 *     ??$MakeAndInitialize2@VCompositionRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionRectangleGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180072818 (--$MakeAndInitialize2@VCompositionRectangleGeometry@Composition@UI@Windows@@V1234@PEAVCompositor.c)
 *     ??$MakeAndInitialize2@VCompositionEllipseGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEllipseGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180093420 (--$MakeAndInitialize2@VCompositionEllipseGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 *     ??$MakeAndInitialize2@VCompositionLineGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionLineGeometry@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18012031C (--$MakeAndInitialize2@VCompositionLineGeometry@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionGeometry *__fastcall Windows::UI::Composition::CompositionGeometry::CompositionGeometry(
        Windows::UI::Composition::CompositionGeometry *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_DWORD *)this + 39) = 1065353216;
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionGeometry::Api::`vftable';
  return this;
}
