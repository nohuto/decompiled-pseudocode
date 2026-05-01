/*
 * XREFs of ?SetAppLaunchSide@PPILayoutOperation@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1801859C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PPILayoutOperation::SetAppLaunchSide(__int64 a1, int a2)
{
  __int64 result; // rax

  PPILayoutOperation::_isSideSet = 1;
  result = 0LL;
  PPILayoutOperation::_insertSide = a2;
  return result;
}
