/*
 * XREFs of sub_18009D8E0 @ 0x18009D8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 */

__int64 __fastcall sub_18009D8E0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_18009E008(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_18009E0D0(a1);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v2 = (__int64 *)sub_18008E70C(a1);
    v3 = sub_180017428(v2, v11);
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    v10[0] = *(_QWORD *)(a1 + 1896);
    v6 = *(_QWORD *)(a1 + 1904);
    *(_QWORD *)(a1 + 1896) = v4;
    v10[1] = v6;
    *(_QWORD *)(a1 + 1904) = v5;
    sub_180010910((__int64)v10);
    sub_180010910((__int64)v11);
    v7 = *(_QWORD *)(a1 + 1896);
    v8 = sub_18001DCD4(v11, (_QWORD *)(a1 + 24), " ColorSampler");
    sub_18002BC44(v7, v8);
  }
  return sub_18009DFA8(a1);
}
