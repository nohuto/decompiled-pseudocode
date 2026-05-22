/*
 * XREFs of ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z @ 0x18018A1F0
 * Callers:
 *     ??$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18011FC08 (--$MakeAndInitialize2@VCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 *     ??$MakeAndInitialize2@VSharedReadCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedReadCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180121604 (--$MakeAndInitialize2@VSharedReadCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVC.c)
 *     ?RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAX@Z @ 0x180182880 (-RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        DirectComposition::CDevice **a2,
        unsigned __int8 a3,
        void *a4,
        bool a5)
{
  int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a4 )
  {
    v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 19, a4, a5);
    if ( v6 < 0 )
    {
      v7 = 55LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcapturecontrollerbase.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
           this,
           (struct Windows::UI::Composition::Compositor *)a2,
           19,
           a3);
    if ( v6 < 0 )
    {
      v7 = 59LL;
      goto LABEL_4;
    }
  }
  *((_BYTE *)this + 168) = 1;
  return 0LL;
}
