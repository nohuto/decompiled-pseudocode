/*
 * XREFs of sub_1407A6508 @ 0x1407A6508
 * Callers:
 *     sub_140674BE4 @ 0x140674BE4 (sub_140674BE4.c)
 *     sub_1406836F0 @ 0x1406836F0 (sub_1406836F0.c)
 *     sub_1407A6424 @ 0x1407A6424 (sub_1407A6424.c)
 * Callees:
 *     sub_140675014 @ 0x140675014 (sub_140675014.c)
 */

void __fastcall sub_1407A6508(__int64 *a1, __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt

  if ( *a1 )
    sub_140675014(qword_140C5AE28 + 56, *a1);
  *a1 = a2;
  if ( a2 )
  {
    _m_prefetchw((const void *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 16);
    for ( i = v4 + 1; i > 1; i = v4 + 1 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), i, v4);
      if ( v6 == v4 )
        return;
    }
    if ( i != 1 )
      __fastfail(0xEu);
  }
}
