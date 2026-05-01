/*
 * XREFs of sub_180013BEC @ 0x180013BEC
 * Callers:
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180013BEC(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 104);
  return (v1 & 8) == 0 && (v1 & 0x40) != 0 && (v1 & 7u) >= 3;
}
