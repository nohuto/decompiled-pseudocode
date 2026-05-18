/*
 * XREFs of sub_180018F4C @ 0x180018F4C
 * Callers:
 *     sub_18001BB30 @ 0x18001BB30 (sub_18001BB30.c)
 * Callees:
 *     sub_180016D8C @ 0x180016D8C (sub_180016D8C.c)
 */

void __fastcall sub_180018F4C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *i; // r8
  _QWORD *j; // rax
  _QWORD *v6; // rcx

  v2 = *(_QWORD **)(a1 + 120);
  for ( i = *(_QWORD **)(a1 + 112); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    for ( j = i + 1; j != v2; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  v6 = *(_QWORD **)(a1 + 120);
  if ( i != v6 )
    *(_QWORD *)(a1 + 120) = sub_180016D8C(v6, *(_QWORD *)(a1 + 120), i);
}
