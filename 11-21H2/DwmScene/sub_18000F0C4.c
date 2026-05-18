/*
 * XREFs of sub_18000F0C4 @ 0x18000F0C4
 * Callers:
 *     sub_18000E9F8 @ 0x18000E9F8 (sub_18000E9F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F0C4(int a1)
{
  dword_1801F748C = a1;
  return (unsigned int)_InterlockedIncrement(&dword_1801F7468);
}
