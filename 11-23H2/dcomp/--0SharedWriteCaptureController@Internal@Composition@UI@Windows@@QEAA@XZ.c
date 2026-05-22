/*
 * XREFs of ??0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122C3C
 * Callers:
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121710 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAV.c)
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x1801217D4 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows_ea_1801217D4.c)
 * Callees:
 *     ??0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122728 (--0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Internal::SharedWriteCaptureController *__fastcall Windows::UI::Composition::Internal::SharedWriteCaptureController::SharedWriteCaptureController(
        Windows::UI::Composition::Internal::SharedWriteCaptureController *this)
{
  Windows::UI::Composition::Internal::CaptureControllerBase::CaptureControllerBase(this);
  *(_QWORD *)this = &Windows::UI::Composition::Internal::SharedWriteCaptureController::`vftable';
  *((_QWORD *)this + 24) = &Windows::UI::Composition::Internal::SharedWriteCaptureController::Partner::`vftable';
  return this;
}
