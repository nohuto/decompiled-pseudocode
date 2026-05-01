/*
 * XREFs of ?get_Arguments@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180181970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_Arguments(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[7], a2);
}
