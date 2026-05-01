/*
 * XREFs of ?IsContextMenuEnabled@CAsyncSwitchItemController@@UEAA_NPEAUISwitchItem@@@Z @ 0x1804C6120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncSwitchItemController::IsContextMenuEnabled(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ISwitchItem *))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           a2);
}
