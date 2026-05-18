/*
 * XREFs of sub_18000EE54 @ 0x18000EE54
 * Callers:
 *     sub_18000CE34 @ 0x18000CE34 (sub_18000CE34.c)
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EE54(int a1)
{
  dword_1801D3368 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801D3380);
}
