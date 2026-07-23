/*
 * XREFs of sub_1406BA6C4 @ 0x1406BA6C4
 * Callers:
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406BA6C4(__int64 a1, unsigned __int16 a2)
{
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 0LL;
      if ( *(_WORD *)a1 > a2 )
        break;
      a1 = *(_QWORD *)(a1 + 8);
    }
    while ( a1 );
    if ( a1 && (*(_BYTE *)(a1 + 2) & 1) == 0 )
      return 0LL;
  }
  return a1;
}
