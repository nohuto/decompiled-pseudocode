/*
 * XREFs of ?Create@ISMScenarios@@SAXW4ISMScenario@@@Z @ 0x180053B60
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18003AAA4 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 *     ?Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z @ 0x180097194 (-Create@DeviceInputHost@@SAJPEAPEAUISystemInputHost@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct ISMScenarios *__fastcall ISMScenarios::Create(int a1, __int64 a2, __int64 a3, const char *a4)
{
  struct ISMScenarios *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  result = (struct ISMScenarios *)operator new(4uLL);
  ISMScenarios::s_instance = result;
  *(_DWORD *)result = a1;
  return result;
}
