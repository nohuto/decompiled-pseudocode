/*
 * XREFs of sub_1409C0744 @ 0x1409C0744
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     sub_1405EF8CC @ 0x1405EF8CC (sub_1405EF8CC.c)
 */

__int64 __fastcall sub_1409C0744(_DWORD *a1)
{
  _DWORD *v1; // rdx
  int i; // r9d

  for ( i = sub_1405EF8CC(a1); ; v1 += i * (*v1 & 0xFFFu) + 1 )
  {
    if ( !*v1 )
      return 0LL;
    if ( (*v1 & 0xFC000) == 0x44000 )
      break;
  }
  return 1LL;
}
