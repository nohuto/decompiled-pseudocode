/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x1800D97E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180001644 (LdrQueryProcessModuleInformationEx.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  return LdrQueryProcessModuleInformationEx(0LL, 2LL, a1, a2, a3);
}
