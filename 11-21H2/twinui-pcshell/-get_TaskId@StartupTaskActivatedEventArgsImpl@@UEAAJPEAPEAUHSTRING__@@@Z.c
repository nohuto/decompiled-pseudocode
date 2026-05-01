/*
 * XREFs of ?get_TaskId@StartupTaskActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805E6CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall StartupTaskActivatedEventArgsImpl::get_TaskId(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[5], a2);
}
