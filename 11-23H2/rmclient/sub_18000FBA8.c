/*
 * XREFs of sub_18000FBA8 @ 0x18000FBA8
 * Callers:
 *     sub_18000C640 @ 0x18000C640 (sub_18000C640.c)
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FBA8(int a1)
{
  dword_1800329C8 = a1;
  return (unsigned int)_InterlockedIncrement(&dword_180032C28);
}
