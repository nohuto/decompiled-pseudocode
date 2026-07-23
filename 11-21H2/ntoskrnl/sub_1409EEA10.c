/*
 * XREFs of sub_1409EEA10 @ 0x1409EEA10
 * Callers:
 *     sub_1409EF4C4 @ 0x1409EF4C4 (sub_1409EF4C4.c)
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1409EEA10(__int64 a1, __int64 a2, int a3)
{
  LONG result; // eax
  __int64 *i; // rcx

  if ( *(_DWORD *)(a2 + 1028) != a3 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
      {
        *(_DWORD *)(a2 + 1028) = 1;
        result = KeSetEvent(*(PRKEVENT *)(a1 + 1160), 0, 0);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 1028) = 0;
    }
    for ( i = *(__int64 **)(a2 + 688); i != (__int64 *)(a2 + 688); i = (__int64 *)*i )
    {
      result = *(_DWORD *)(a2 + 1028);
      *((_DWORD *)i + 7) = result;
    }
  }
  return result;
}
