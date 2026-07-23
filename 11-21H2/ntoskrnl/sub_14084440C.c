/*
 * XREFs of sub_14084440C @ 0x14084440C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14055FBE4 @ 0x14055FBE4 (sub_14055FBE4.c)
 * Callees:
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 */

__int64 __fastcall sub_14084440C(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return sub_14085CA14(a1);
  return result;
}
