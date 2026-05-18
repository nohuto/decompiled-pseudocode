/*
 * XREFs of sub_1800A6B90 @ 0x1800A6B90
 * Callers:
 *     sub_18006B758 @ 0x18006B758 (sub_18006B758.c)
 *     sub_1800A6B4C @ 0x1800A6B4C (sub_1800A6B4C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A6B90(__int64 a1, _QWORD *a2)
{
  char *v5[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp-18h]

  v5[2] = 0LL;
  v6 = 15LL;
  LOBYTE(v5[0]) = 0;
  sub_180012190((__int64 *)v5, "Aimer", 5uLL);
  sub_18008E340(a1, (__int64)v5, a2);
  if ( v6 >= 0x10 )
    sub_180010884(v5[0], v6 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180137348;
  sub_180010910((__int64)a2);
  return a1;
}
