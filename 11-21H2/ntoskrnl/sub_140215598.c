/*
 * XREFs of sub_140215598 @ 0x140215598
 * Callers:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140215598(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C50720 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
