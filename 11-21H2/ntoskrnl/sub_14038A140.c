/*
 * XREFs of sub_14038A140 @ 0x14038A140
 * Callers:
 *     sub_1407FD510 @ 0x1407FD510 (sub_1407FD510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14038A140(unsigned int a1, __int64 a2)
{
  if ( a1 < *(_DWORD *)(a2 + 16) )
  {
    return *(unsigned int *)(a2 + 16);
  }
  else if ( a1 > *(_DWORD *)(a2 + 20) )
  {
    a1 = *(_DWORD *)(a2 + 16);
    if ( (*(_BYTE *)(a2 + 37) & 0x10) == 0 )
      return *(unsigned int *)(a2 + 20);
  }
  return a1;
}
