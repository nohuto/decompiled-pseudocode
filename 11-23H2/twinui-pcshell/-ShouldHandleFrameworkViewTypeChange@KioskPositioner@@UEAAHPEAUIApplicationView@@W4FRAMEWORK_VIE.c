/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1805A9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180069990 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall KioskPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, struct IApplicationView *a2, int a3)
{
  KioskPositioner *v4; // rcx
  const char *v5; // r9
  _BOOL8 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (KioskPositioner *)(a1 - 112);
  try
  {
    if ( KioskPositioner::ShouldHandleView(v4, a2) )
      result = !a3 || a3 == 6;
    else
      result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2F7,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v5);
    return 0LL;
  }
  return result;
}
