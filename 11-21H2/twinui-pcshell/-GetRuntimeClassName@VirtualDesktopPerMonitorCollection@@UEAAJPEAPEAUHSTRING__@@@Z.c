/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18048F280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopPerMonitorCollection::GetRuntimeClassName(
        VirtualDesktopPerMonitorCollection *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopPerMonitorCollection",
           0x50u,
           a2);
}
