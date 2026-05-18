/*
 * XREFs of sub_1800DCAB4 @ 0x1800DCAB4
 * Callers:
 *     sub_1800DCB44 @ 0x1800DCB44 (sub_1800DCB44.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DE488 @ 0x1800DE488 (sub_1800DE488.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DCAB4(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-30h] BYREF

  v4 = (__int64)a2;
  v5 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18001E3BC(v8, (__int64)a2);
  v6 = sub_1800DE488(v5, v8);
  *(_BYTE *)(v6 + 60) = a3;
  *(_DWORD *)v6 = 4;
  sub_180013348((__int64)v8);
  return sub_180013348(v4);
}
