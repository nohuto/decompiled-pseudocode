/*
 * XREFs of sub_14051A9F8 @ 0x14051A9F8
 * Callers:
 *     sub_1405284B0 @ 0x1405284B0 (sub_1405284B0.c)
 *     sub_1405286D0 @ 0x1405286D0 (sub_1405286D0.c)
 *     sub_140528B30 @ 0x140528B30 (sub_140528B30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051A9F8(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rcx

  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
    return sub_14042A5E0(v6, a2);
  if ( !a2 )
    return 3221225659LL;
  if ( (*a2 & 0xFFFLL) != 0 )
    return 3221225712LL;
  *a6 = *a2;
  return 0LL;
}
