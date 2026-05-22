/*
 * XREFs of ?RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAX@Z @ 0x180182880
 * Callers:
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121710 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAV.c)
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x1801217D4 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows_ea_1801217D4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z @ 0x18018A1F0 (-RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedWriteCaptureController::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::SharedWriteCaptureController *this,
        struct Windows::UI::Composition::Compositor *a2,
        void *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = Windows::UI::Composition::Internal::CaptureControllerBase::RuntimeClassInitialize(this, a2, 1, a3, 1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedwritecapturecontroller.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
