/*
 * XREFs of sub_18004819C @ 0x18004819C
 * Callers:
 *     sub_180012688 @ 0x180012688 (sub_180012688.c)
 *     sub_180048158 @ 0x180048158 (sub_180048158.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180048800 @ 0x180048800 (sub_180048800.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004819C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  char *v6[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v6[2] = 0LL;
  v7 = 15LL;
  LOBYTE(v6[0]) = 0;
  sub_180012190((__int64 *)v6, "Light", 5uLL);
  sub_18008E340(a1, v6, a2);
  if ( v7 >= 0x10 )
    sub_180010884(v6[0], v7 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::Light::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  sub_180048800(a1);
  v4 = *a2;
  sub_1800436D4(*a2);
  *(_QWORD *)(v4 + 448) |= 8uLL;
  sub_180010910((__int64)a2);
  return a1;
}
