/*
 * XREFs of sub_180017B24 @ 0x180017B24
 * Callers:
 *     sub_180010300 @ 0x180010300 (sub_180010300.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010260 @ 0x180010260 (sub_180010260.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 */

__int64 __fastcall sub_180017B24(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1800FA070;
  v2 = (__int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 16) = off_1800FA1D0;
  sub_18000E72C((__int64 *)(a1 + 136));
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 112);
  v3 = qword_1801D3390;
  if ( a1 == qword_1801D3390 )
    v3 = 0LL;
  qword_1801D3390 = v3;
  sub_18000E72C(v2);
  sub_1800105A8(a1 + 112);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    sub_180010530(v6);
  sub_180010260((_QWORD *)(a1 + 56));
  sub_18000E72C((__int64 *)(a1 + 48));
  sub_18000E72C((__int64 *)(a1 + 40));
  result = sub_18000E72C((__int64 *)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
