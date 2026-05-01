/*
 * XREFs of ?GetRuntimeClassName@CSnapAssistController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18066AF60
 * Callers:
 *     ?GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AB6A0 (-GetRuntimeClassName@CSnapAssistController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AB6C0 (-GetRuntimeClassName@CSnapAssistController@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CSnapAssistController::GetRuntimeClassName(CSnapAssistController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SnapAssistController", 0x2Bu, a2);
}
