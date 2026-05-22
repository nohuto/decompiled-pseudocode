/*
 * XREFs of ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024
 * Callers:
 *     ?RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180015E28 (-RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180016088 (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Deta.c)
 *     ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C (--$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details.c)
 *     ??$MakeAndInitialize2@VLayerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVLayerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CEE0 (--$MakeAndInitialize2@VLayerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL.c)
 *     ??$MakeAndInitialize2@VRedirectVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVRedirectVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801213EC (--$MakeAndInitialize2@VRedirectVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@.c)
 *     ??$MakeAndInitialize2@VScaleVisual@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVScaleVisual@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801214FC (--$MakeAndInitialize2@VScaleVisual@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@De.c)
 *     ??$MakeAndInitialize2@VSuperWetInkVisual@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSuperWetInkVisual@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121C24 (--$MakeAndInitialize2@VSuperWetInkVisual@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 *     ?RuntimeClassInitialize@SceneVisual@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180145D04 (-RuntimeClassInitialize@SceneVisual@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z.c)
 *     ?RuntimeClassInitialize@CursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180175A64 (-RuntimeClassInitialize@CursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(
        Windows::UI::Composition::ContainerVisual *this,
        struct Windows::UI::Composition::Compositor *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = Windows::UI::Composition::Visual::RuntimeClassInitialize(this, a2, a3, 0, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcontainervisual.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
