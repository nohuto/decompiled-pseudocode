/*
 * XREFs of sub_18000EDF4 @ 0x18000EDF4
 * Callers:
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EDF4(int a1)
{
  dword_1801D32E8 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801D3364);
}
