/*
 * XREFs of ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ @ 0x180122D6C
 * Callers:
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801220A4 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVComp.c)
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA_N@Z @ 0x180122168 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V1_ea_180122168.c)
 *     ??0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ @ 0x18015C2E8 (--0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Private::VisualReferenceController *__fastcall Windows::UI::Composition::Private::VisualReferenceController::VisualReferenceController(
        Windows::UI::Composition::Private::VisualReferenceController *this)
{
  Windows::UI::Composition::Scenes::SceneObject::SceneObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Private::VisualReferenceController::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Private::VisualReferenceController::Api::`vftable';
  return this;
}
