/*
 * XREFs of ?GetRuntimeClassName@CSnapAssistController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18059C5C0
 * Callers:
 *     ?GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18020F5D0 (-GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18020F5F0 (-GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CSnapAssistController::GetRuntimeClassName(CSnapAssistController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SnapAssistController", 0x2Bu, a2);
}
