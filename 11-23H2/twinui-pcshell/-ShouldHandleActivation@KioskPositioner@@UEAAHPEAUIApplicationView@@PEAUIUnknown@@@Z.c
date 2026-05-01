/*
 * XREFs of ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180069970
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180069990 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall KioskPositioner::ShouldHandleActivation(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  KioskPositioner *v3; // rcx
  const char *v4; // r9
  _BOOL8 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (KioskPositioner *)((char *)this - 112);
  try
  {
    result = KioskPositioner::ShouldHandleView(v3, a2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x28F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v4);
    return 0LL;
  }
  return result;
}
