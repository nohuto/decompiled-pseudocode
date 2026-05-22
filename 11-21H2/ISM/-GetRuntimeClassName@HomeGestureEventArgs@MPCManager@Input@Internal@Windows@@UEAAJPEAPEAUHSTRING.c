/*
 * XREFs of ?GetRuntimeClassName@HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18015AAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::GetRuntimeClassName(
        Windows::Internal::Input::MPCManager::HomeGestureEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.HomeGestureEventArgs", 0x36u, a2);
}
