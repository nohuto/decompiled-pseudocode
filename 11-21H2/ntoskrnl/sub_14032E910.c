/*
 * XREFs of sub_14032E910 @ 0x14032E910
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 *     sub_140753B20 @ 0x140753B20 (sub_140753B20.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14032E910(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    {
      v1 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 48);
      if ( (v1 & 0x70) == 0x20 )
        return 1LL;
    }
  }
  else if ( !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    return 1LL;
  }
  return (v1 & 0x70) == 0x40;
}
