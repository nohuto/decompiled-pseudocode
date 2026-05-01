/*
 * XREFs of ?GetRuntimeClassName@CVisibilityChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180418A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CVisibilityChangedEventArgs::GetRuntimeClassName(CVisibilityChangedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.VisibilityChangedEventArgs", 0x3Cu, a2);
}
