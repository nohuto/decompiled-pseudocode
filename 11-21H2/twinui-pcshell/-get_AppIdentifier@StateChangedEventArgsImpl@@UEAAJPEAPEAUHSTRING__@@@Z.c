/*
 * XREFs of ?get_AppIdentifier@StateChangedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180563E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall StateChangedEventArgsImpl::get_AppIdentifier(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
