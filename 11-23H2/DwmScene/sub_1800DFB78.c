/*
 * XREFs of sub_1800DFB78 @ 0x1800DFB78
 * Callers:
 *     sub_1800DC224 @ 0x1800DC224 (sub_1800DC224.c)
 *     sub_1800DC4E4 @ 0x1800DC4E4 (sub_1800DC4E4.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 *     sub_1800DCB44 @ 0x1800DCB44 (sub_1800DCB44.c)
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 *     sub_1800DD10C @ 0x1800DD10C (sub_1800DD10C.c)
 *     sub_1800DD308 @ 0x1800DD308 (sub_1800DD308.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 *     sub_1800DEB70 @ 0x1800DEB70 (sub_1800DEB70.c)
 *     sub_1800DEC60 @ 0x1800DEC60 (sub_1800DEC60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_180062C58 @ 0x180062C58 (sub_180062C58.c)
 */

bool __fastcall sub_1800DFB78(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9[4]; // [rsp+30h] [rbp-38h] BYREF

  sub_18001E3BC(v9, a2);
  v3 = v9;
  if ( v9[3] >= 8uLL )
    v3 = (__int64 *)v9[0];
  v4 = sub_18001EA34((__int64)v3, v9[2]);
  v5 = sub_180062C58((_QWORD *)(a1 + 64), &v8, v9, v4)[1];
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 72);
  v6 = v5 != *(_QWORD *)(a1 + 72);
  sub_180013348((__int64)v9);
  return v6;
}
