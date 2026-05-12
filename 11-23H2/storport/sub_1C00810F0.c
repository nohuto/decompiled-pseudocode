/*
 * XREFs of sub_1C00810F0 @ 0x1C00810F0
 * Callers:
 *     sub_1C0081138 @ 0x1C0081138 (sub_1C0081138.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 *     sub_1C0081208 @ 0x1C0081208 (sub_1C0081208.c)
 * Callees:
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C00810F0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -14;
  ++*(_DWORD *)(a1 + 12);
  if ( a2 >= 0x40 )
    return sub_1C00813B0(a1);
  else
    return sub_1C00815A8(a1);
}
