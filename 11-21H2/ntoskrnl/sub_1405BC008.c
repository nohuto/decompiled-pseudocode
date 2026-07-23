/*
 * XREFs of sub_1405BC008 @ 0x1405BC008
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1405BC008(__int64 a1)
{
  int v1; // edx
  int v2; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 0;
  if ( (v1 & 0xA00000) != 0xA00000 )
  {
    if ( (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000) )
      return 1;
    v2 = v1 & 0x70;
    if ( ((v1 & 0x70) == 0 || v2 == 32 || v2 == 80)
      && (v1 & 0x6200000) != 0x4200000
      && ((v1 & 0x200000) != 0 || (*(_DWORD *)(a1 + 64) & 0x4000000) != 0) )
    {
      return 1;
    }
  }
  return result;
}
