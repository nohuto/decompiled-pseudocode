/*
 * XREFs of sub_1402619C4 @ 0x1402619C4
 * Callers:
 *     sub_14026187C @ 0x14026187C (sub_14026187C.c)
 *     sub_1406EDEC8 @ 0x1406EDEC8 (sub_1406EDEC8.c)
 *     sub_1406EF9E0 @ 0x1406EF9E0 (sub_1406EF9E0.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402619C4(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
