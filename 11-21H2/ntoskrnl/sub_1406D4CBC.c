/*
 * XREFs of sub_1406D4CBC @ 0x1406D4CBC
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 * Callees:
 *     sub_14024F74C @ 0x14024F74C (sub_14024F74C.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

__int64 __fastcall sub_1406D4CBC(PRTL_BALANCED_NODE *Object)
{
  PRTL_BALANCED_NODE *v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 385) )
  {
    sub_14024F74C(Object[193]);
    sub_140366814((__int64)Object[193]);
    Object[193] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return sub_1406FF880(Object, (__int64)v4, 5);
}
