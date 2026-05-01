/*
 * XREFs of ?GetRuntimeClassName@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803C9C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::GetRuntimeClassName(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.TaskFlow.DataEngine.UserPresenceListener", 0x3Fu, a2);
}
