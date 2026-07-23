/*
 * XREFs of sub_140A95858 @ 0x140A95858
 * Callers:
 *     sub_140A95030 @ 0x140A95030 (sub_140A95030.c)
 *     sub_140A95480 @ 0x140A95480 (sub_140A95480.c)
 *     sub_140A954F0 @ 0x140A954F0 (sub_140A954F0.c)
 *     sub_140A956D0 @ 0x140A956D0 (sub_140A956D0.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

BOOLEAN __fastcall sub_140A95858(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    return sub_140A8C924(0xC4u, 0xE6uLL, BugCheckParameter2, CurrentIrql, *((__int16 *)KeGetCurrentThread() + 243));
  result = KeAreAllApcsDisabled();
  if ( result )
    return sub_140A8C924(0xC4u, 0xE6uLL, BugCheckParameter2, CurrentIrql, *((__int16 *)KeGetCurrentThread() + 243));
  return result;
}
