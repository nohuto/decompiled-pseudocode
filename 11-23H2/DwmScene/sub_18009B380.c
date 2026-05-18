/*
 * XREFs of sub_18009B380 @ 0x18009B380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180048440 @ 0x180048440 (sub_180048440.c)
 *     sub_18004BAFC @ 0x18004BAFC (sub_18004BAFC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009B380(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_18004BAFC(a2, &v4);
  sub_180048440(*v2, 0LL, v3);
  if ( v5 )
    sub_180010530(v5);
}
