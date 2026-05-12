/*
 * XREFs of sub_1C003F6AC @ 0x1C003F6AC
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C000724C @ 0x1C000724C (sub_1C000724C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C003F6AC(__int64 a1, __int64 a2)
{
  char *v2; // rdx
  char v3; // cl
  char v4; // al
  __int64 v5; // r9
  char v6; // r8

  if ( !a2 )
    return 3221225558LL;
  v2 = *(char **)(a2 + 184);
  v3 = *v2;
  v4 = v2[1];
  if ( *v2 == 15 )
  {
    v5 = *((_QWORD *)v2 + 1);
    v6 = *(_BYTE *)(v5 + 2);
    if ( v6 == 40 )
      v6 = *(_BYTE *)(v5 + 20);
    if ( v4 == -16 || v6 == 1 )
      return 0LL;
  }
  if ( v3 == 27 )
    return 0LL;
  if ( v3 == 14 )
  {
    if ( *((_DWORD *)v2 + 6) != 266264 )
      return 3221225558LL;
    return 0LL;
  }
  if ( v3 != 22 )
    return 3221225558LL;
  return v4 != 2 ? 0xC0000056 : 0;
}
