/*
 * XREFs of sub_18004607C @ 0x18004607C
 * Callers:
 *     sub_18001D3D0 @ 0x18001D3D0 (sub_18001D3D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004607C(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  sub_18002C73C(a1 + 16);
  v4 = sub_1800129F4(v9, a2);
  v5 = *(_QWORD *)sub_18004614C(a1, v8, v4);
  sub_180010910((__int64)v8);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 >= 8 )
    sub_180010884(*(char **)a2, 2 * v6 + 2);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return v5 + 48;
}
