/*
 * XREFs of sub_14051A990 @ 0x14051A990
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051B030 @ 0x14051B030 (sub_14051B030.c)
 *     sub_14051B7E4 @ 0x14051B7E4 (sub_14051B7E4.c)
 */

bool __fastcall sub_14051A990(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( *a1 != 2 || (int)sub_14051B7E4(a1, &v6) < 0 )
    return 1;
  v4 = sub_14051B030(a1);
  if ( a2 )
    *a2 = v4;
  return v4 <= 1;
}
