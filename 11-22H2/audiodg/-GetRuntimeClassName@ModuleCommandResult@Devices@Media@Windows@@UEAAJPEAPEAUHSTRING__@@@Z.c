/*
 * XREFs of ?GetRuntimeClassName@ModuleCommandResult@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140086530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::ModuleCommandResult::GetRuntimeClassName(
        Windows::Media::Devices::ModuleCommandResult *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.ModuleCommandResult", 0x29u, a2);
}
