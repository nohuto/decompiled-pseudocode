/*
 * XREFs of sub_14030EBD0 @ 0x14030EBD0
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030EBD0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x2200000) != 0x2200000 )
    return 0LL;
  v3 = 2048 << ((v1 >> 28) & 7);
  if ( (v1 & 0x4000000) != 0 )
    v3 |= 0x20000u;
  v4 = v3 | 0x40000;
  if ( (v1 & 0x8000000) == 0 )
    return v3;
  return v4;
}
