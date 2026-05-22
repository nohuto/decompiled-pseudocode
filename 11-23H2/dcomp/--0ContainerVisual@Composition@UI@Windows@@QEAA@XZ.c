/*
 * XREFs of ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC
 * Callers:
 *     ??0SpriteVisual@Composition@UI@Windows@@QEAA@XZ @ 0x180015DDC (--0SpriteVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180016088 (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Deta.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details.c)
 *     ??0LayerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CF88 (--0LayerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVCursorVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEA_K@Z @ 0x180120B5C (--$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Detai.c)
 *     ??$MakeAndInitialize2@VRedirectVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVRedirectVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801213EC (--$MakeAndInitialize2@VRedirectVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@.c)
 *     ??$MakeAndInitialize2@VScaleVisual@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVScaleVisual@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801214FC (--$MakeAndInitialize2@VScaleVisual@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@De.c)
 *     ??$MakeAndInitialize2@VSuperWetInkVisual@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSuperWetInkVisual@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121C24 (--$MakeAndInitialize2@VSuperWetInkVisual@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 *     ??$MakeAndInitialize2@VSceneVisual@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneVisual@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801459C8 (--$MakeAndInitialize2@VSceneVisual@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Det.c)
 * Callees:
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ContainerVisual *__fastcall Windows::UI::Composition::ContainerVisual::ContainerVisual(
        Windows::UI::Composition::ContainerVisual *this)
{
  Windows::UI::Composition::Visual::Visual((unsigned __int64)this);
  *(_QWORD *)this = &Windows::UI::Composition::ContainerVisual::`vftable';
  *((_QWORD *)this + 37) = &Windows::UI::Composition::ContainerVisual::Api::`vftable';
  return this;
}
