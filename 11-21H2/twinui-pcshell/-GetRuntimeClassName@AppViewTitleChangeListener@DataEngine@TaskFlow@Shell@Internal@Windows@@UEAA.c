/*
 * XREFs of ?GetRuntimeClassName@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803C9980
 * Callers:
 *     ?GetRuntimeClassName@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F83F0 (-GetRuntimeClassName@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetRuntimeClassName(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewTitleChangeListener", 0x45u, a2);
}
