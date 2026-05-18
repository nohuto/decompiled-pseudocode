/*
 * XREFs of sub_18005BEA8 @ 0x18005BEA8
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_18005D900 @ 0x18005D900 (sub_18005D900.c)
 *     sub_18006B29C @ 0x18006B29C (sub_18006B29C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18003C8C8 @ 0x18003C8C8 (sub_18003C8C8.c)
 *     sub_18005D2CC @ 0x18005D2CC (sub_18005D2CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005BEA8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180011C50(a1 + 56, &v4);
  result = sub_18003C8C8(v4);
  v3 = result;
  if ( v5 )
    result = sub_180010530(v5);
  if ( v3 != *(_QWORD *)(a1 + 96) )
  {
    result = sub_18005D2CC(a1, 1LL);
    *(_QWORD *)(a1 + 96) = v3;
  }
  return result;
}
