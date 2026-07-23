/*
 * XREFs of sub_1405A5F5C @ 0x1405A5F5C
 * Callers:
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 */

__int64 __fastcall sub_1405A5F5C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 < 0 || *(char *)(a1 + 35) < 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
  {
    if ( sub_140278960(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF)), a1, 0, 0) )
      return 0LL;
  }
  else if ( *(_WORD *)(a1 + 32) || sub_140277C50(a1) )
  {
    return 0LL;
  }
  return 1LL;
}
