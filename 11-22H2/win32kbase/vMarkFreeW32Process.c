/*
 * XREFs of vMarkFreeW32Process @ 0x1C00B8CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vMarkFreeW32Process(__int64 a1)
{
  *(_DWORD *)(a1 + 816) |= 0x1000u;
}
