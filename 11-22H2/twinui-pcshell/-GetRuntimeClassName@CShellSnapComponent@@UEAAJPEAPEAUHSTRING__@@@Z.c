/*
 * XREFs of ?GetRuntimeClassName@CShellSnapComponent@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180661180
 * Callers:
 *     ?GetRuntimeClassName@CShellSnapComponent@@WIA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AB060 (-GetRuntimeClassName@CShellSnapComponent@@WIA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CShellSnapComponent::GetRuntimeClassName(CShellSnapComponent *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SnapShellComponent", 0x29u, a2);
}
