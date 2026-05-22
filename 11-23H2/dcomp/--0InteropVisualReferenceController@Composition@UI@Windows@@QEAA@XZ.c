/*
 * XREFs of ??0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ @ 0x18015C2E8
 * Callers:
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18015C164 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVIntero.c)
 *     ??$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReferenceController@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x18015C228 (--$MakeAndInitialize2@VInteropVisualReferenceController@Composition@UI@Windows@@V12_ea_18015C228.c)
 * Callees:
 *     ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ @ 0x180122D6C (--0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InteropVisualReferenceController *__fastcall Windows::UI::Composition::InteropVisualReferenceController::InteropVisualReferenceController(
        Windows::UI::Composition::InteropVisualReferenceController *this)
{
  Windows::UI::Composition::Private::VisualReferenceController::VisualReferenceController(this);
  *(_QWORD *)this = &Windows::UI::Composition::InteropVisualReferenceController::`vftable';
  *((_QWORD *)this + 22) = &Windows::UI::Composition::InteropVisualReferenceController::Api::`vftable';
  return this;
}
