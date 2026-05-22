/*
 * XREFs of ?Create@ISMTestMode@@SAX_N@Z @ 0x1800276F8
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x180027838 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 *     ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x180080230 (-Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ISMTestMode::Create(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      a4);
  ISMTestMode::s_instance = (struct ISMTestMode *)operator new(1uLL);
  *(_BYTE *)ISMTestMode::s_instance = 0;
}
