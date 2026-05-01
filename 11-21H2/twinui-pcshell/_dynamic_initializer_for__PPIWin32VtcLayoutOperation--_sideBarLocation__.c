/*
 * XREFs of _dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__ @ 0x180002780
 * Callers:
 *     <none>
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180070D14 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

__int64 dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__()
{
  __int64 result; // rax

  result = Mirror_IsThreadRTL();
  PPIWin32VtcLayoutOperation::_sideBarLocation = result == 0;
  return result;
}
