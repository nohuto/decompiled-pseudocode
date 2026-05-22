/*
 * XREFs of ??0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122728
 * Callers:
 *     ??$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18011FC08 (--$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 *     ??$MakeAndInitialize2@VSharedReadCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedReadCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180121604 (--$MakeAndInitialize2@VSharedReadCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVC.c)
 *     ??0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122C3C (--0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Internal::CaptureControllerBase *__fastcall Windows::UI::Composition::Internal::CaptureControllerBase::CaptureControllerBase(
        Windows::UI::Composition::Internal::CaptureControllerBase *this)
{
  Windows::UI::Composition::Internal::CaptureControllerBase *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_BYTE *)this + 169) = 1;
  *(_QWORD *)this = &Windows::UI::Composition::Internal::CaptureControllerBase::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Internal::VisualReference::Api::`vftable';
  result = this;
  *((_DWORD *)this + 46) = 0x40000000;
  return result;
}
