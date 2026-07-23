/*
 * XREFs of sub_14051C010 @ 0x14051C010
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051C060 @ 0x14051C060 (sub_14051C060.c)
 *     sub_14051C22C @ 0x14051C22C (sub_14051C22C.c)
 *     sub_14051C3E0 @ 0x14051C3E0 (sub_14051C3E0.c)
 */

__int64 __fastcall sub_14051C010(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v2 = a2[1];
  v4 = *a2;
  v5 = v2;
  result = sub_14051C060(a1 - 8);
  if ( HIDWORD(v2) == 1 )
    return sub_14051C22C(&v4);
  if ( HIDWORD(v5) == 2 )
    return sub_14051C3E0(&v4);
  return result;
}
