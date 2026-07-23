/*
 * XREFs of sub_1405CE8F8 @ 0x1405CE8F8
 * Callers:
 *     sub_140766E4C @ 0x140766E4C (sub_140766E4C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

char __fastcall sub_1405CE8F8(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v4 = a2;
  if ( !(unsigned __int8)sub_14042A5E0(2LL, &v4) )
    sub_1405CAE6C(0x605uLL, 2uLL, BugCheckParameter3, 0LL);
  return v5;
}
