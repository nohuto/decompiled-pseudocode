/*
 * XREFs of sub_18000FB88 @ 0x18000FB88
 * Callers:
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FB88(int a1)
{
  dword_1800329F0 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180032C20);
}
