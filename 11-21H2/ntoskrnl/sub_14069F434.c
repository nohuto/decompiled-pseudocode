/*
 * XREFs of sub_14069F434 @ 0x14069F434
 * Callers:
 *     sub_14020004C @ 0x14020004C (sub_14020004C.c)
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     sub_14065AED8 @ 0x14065AED8 (sub_14065AED8.c)
 *     sub_14065B030 @ 0x14065B030 (sub_14065B030.c)
 *     sub_14069F3D4 @ 0x14069F3D4 (sub_14069F3D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14069F434(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 16;
}
