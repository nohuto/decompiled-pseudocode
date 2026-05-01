/*
 * XREFs of sub_180002540 @ 0x180002540
 * Callers:
 *     sub_18000238C @ 0x18000238C (sub_18000238C.c)
 *     sub_18000246C @ 0x18000246C (sub_18000246C.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 */

__int64 *__fastcall sub_180002540(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = a2;
  if ( *a1 != a2 )
  {
    if ( a2 )
      sub_180008980(a2 + 12);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      sub_180004C40(v4);
  }
  return a1;
}
