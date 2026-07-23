/*
 * XREFs of PsWow64IsMachineSupported @ 0x1406AD5D0
 * Callers:
 *     sub_1406AD42C @ 0x1406AD42C (sub_1406AD42C.c)
 *     sub_140711058 @ 0x140711058 (sub_140711058.c)
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 * Callees:
 *     sub_140236258 @ 0x140236258 (sub_140236258.c)
 *     sub_1406AD624 @ 0x1406AD624 (sub_1406AD624.c)
 */

__int64 __fastcall PsWow64IsMachineSupported(__int16 a1)
{
  __int16 v1; // ax
  int v2; // r9d
  __int16 v3; // cx
  int v4; // edx
  __int64 v5; // rax
  int v6; // edx
  __int16 v7; // r8

  if ( !a1 )
    return 0LL;
  v1 = sub_140236258(a1);
  if ( v1 != v3 )
    return 0LL;
  v4 = v2;
  while ( 1 )
  {
    v5 = sub_1406AD624((unsigned int)v4);
    if ( v5 )
    {
      if ( (*(_DWORD *)v5 & 8) != 0 && *(_WORD *)(v5 + 2) == v7 )
        break;
    }
    v4 = v6 + 1;
    if ( v4 >= 6 )
      return 0LL;
  }
  return 1LL;
}
