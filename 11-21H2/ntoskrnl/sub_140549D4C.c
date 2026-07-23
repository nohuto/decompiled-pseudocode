/*
 * XREFs of sub_140549D4C @ 0x140549D4C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140549D4C(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-98h]
  unsigned __int64 v10; // [rsp+38h] [rbp-90h]
  _QWORD v11[14]; // [rsp+40h] [rbp-88h] BYREF

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 88LL);
  v3 = a1[1];
  *v2 = *a1;
  v4 = a1[2];
  v2[1] = v3;
  v5 = a1[3];
  v2[2] = v4;
  v6 = a1[4];
  v2[3] = v5;
  v2[4] = v6;
  memset(v11, 0, 0x68uLL);
  v11[1] = v10 >> 12;
  LODWORD(a1) = sub_140358A20(2u, 259, 0, (__int64)v11);
  sub_14039D8F0((__int64)&v8);
  return (unsigned int)a1;
}
