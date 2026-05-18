/*
 * XREFs of sub_18000DDA0 @ 0x18000DDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_18000DDA0(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  HMODULE ModuleHandleW; // rax

  ModuleHandleW = (HMODULE)hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  return FormatMessageW(0x1A00u, ModuleHandleW, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
