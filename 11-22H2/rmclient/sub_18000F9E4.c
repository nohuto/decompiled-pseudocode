/*
 * XREFs of sub_18000F9E4 @ 0x18000F9E4
 * Callers:
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F9E4(int a1)
{
  dword_180032968 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180032C24);
}
