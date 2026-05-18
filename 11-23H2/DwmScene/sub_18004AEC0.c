/*
 * XREFs of sub_18004AEC0 @ 0x18004AEC0
 * Callers:
 *     sub_18004A788 @ 0x18004A788 (sub_18004A788.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18004AEC0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = a1[10];
  if ( v2 )
    result = sub_180010530(v2);
  v4 = a1[8];
  if ( v4 )
    result = sub_180010530(v4);
  v5 = a1[6];
  if ( v5 )
    result = sub_180010530(v5);
  v6 = a1[4];
  if ( v6 )
    result = sub_180010530(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
