/*
 * XREFs of sub_18000EE34 @ 0x18000EE34
 * Callers:
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EE34(int a1)
{
  dword_1801D3384 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801D3360);
}
