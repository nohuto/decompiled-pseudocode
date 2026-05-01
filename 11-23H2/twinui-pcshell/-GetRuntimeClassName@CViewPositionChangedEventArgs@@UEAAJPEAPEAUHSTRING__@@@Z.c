/*
 * XREFs of ?GetRuntimeClassName@CViewPositionChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18041F6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CViewPositionChangedEventArgs::GetRuntimeClassName(CViewPositionChangedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ViewPositionChangedEventArgs", 0x3Eu, a2);
}
