/*
 * XREFs of sub_1800511A0 @ 0x1800511A0
 * Callers:
 *     sub_180014A10 @ 0x180014A10 (sub_180014A10.c)
 *     sub_1800509B4 @ 0x1800509B4 (sub_1800509B4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_1800535FC @ 0x1800535FC (sub_1800535FC.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800511A0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  char *v6[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v6[2] = 0LL;
  v7 = 15LL;
  LOBYTE(v6[0]) = 0;
  sub_180012190((__int64 *)v6, "Mesh Instance", 0xDuLL);
  sub_18008E340(a1, v6, a2);
  if ( v7 >= 0x10 )
    sub_180010884(v6[0], v7 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_180128A30;
  v4 = *a2;
  sub_1800436D4(*a2);
  *(_QWORD *)(v4 + 448) |= 8uLL;
  sub_1800535FC(a1, 1LL);
  sub_180010910((__int64)a2);
  return a1;
}
