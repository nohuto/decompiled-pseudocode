/*
 * XREFs of ?CanItemMoveDesktops@CAsyncSwitchItemController@@UEAA_NPEAUISwitchItem@@@Z @ 0x1804C5E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncSwitchItemController::CanItemMoveDesktops(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ISwitchItem *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           a2);
}
