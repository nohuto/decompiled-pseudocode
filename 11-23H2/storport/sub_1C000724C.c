/*
 * XREFs of sub_1C000724C @ 0x1C000724C
 * Callers:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 * Callees:
 *     sub_1C003F6AC @ 0x1C003F6AC (sub_1C003F6AC.c)
 */

__int64 __fastcall sub_1C000724C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    if ( *(_DWORD *)(a1 + 48) != 6 )
    {
      if ( *(_DWORD *)(a1 + 48) == 7 )
        return sub_1C003F6AC(a1, a2);
      else
        return 0LL;
    }
    return 3221225558LL;
  }
  result = 0LL;
  if ( !a2 )
    return 3221225558LL;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v3 != 27 && (*(_BYTE *)v3 != 14 || *(_DWORD *)(v3 + 24) != 266276) )
    return 3221225558LL;
  return result;
}
