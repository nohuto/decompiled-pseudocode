/*
 * XREFs of sub_18000F090 @ 0x18000F090
 * Callers:
 *     sub_18000E9F8 @ 0x18000E9F8 (sub_18000E9F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F090(int a1)
{
  dword_1801F740C = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801F746C);
}
