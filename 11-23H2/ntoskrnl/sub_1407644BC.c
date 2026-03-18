/*
 * XREFs of sub_1407644BC @ 0x1407644BC
 * Callers:
 *     WbAllocateSlots @ 0x1407642A0 (WbAllocateSlots.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407644BC(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9d
  _BYTE *i; // rcx

  v3 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return 0xFFFFFFFFLL;
  for ( i = (_BYTE *)(a2 + a1 + 44); !*i; ++i )
  {
    if ( ++a2 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return a2;
}
