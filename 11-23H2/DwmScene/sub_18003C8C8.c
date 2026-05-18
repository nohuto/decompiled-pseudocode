/*
 * XREFs of sub_18003C8C8 @ 0x18003C8C8
 * Callers:
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003C8C8 @ 0x18003C8C8 (sub_18003C8C8.c)
 *     sub_18005BEA8 @ 0x18005BEA8 (sub_18005BEA8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003B61C @ 0x18003B61C (sub_18003B61C.c)
 *     sub_18003C3A4 @ 0x18003C3A4 (sub_18003C3A4.c)
 *     sub_18003C8C8 @ 0x18003C8C8 (sub_18003C8C8.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18003C8C8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_18003E330(a1);
  v2 = sub_18003B61C();
  if ( v3 == v2 )
    return v3;
  v5 = sub_18003C3A4(a1);
  sub_180012624(v6, &v8);
  if ( sub_180011DE0(&v8) )
  {
    v7 = sub_18003C8C8(v8);
    if ( v5 < v7 )
      v5 = v7;
  }
  *(_QWORD *)(a1 + 216) = v5;
  if ( v9 )
    sub_180010530(v9);
  return v5;
}
