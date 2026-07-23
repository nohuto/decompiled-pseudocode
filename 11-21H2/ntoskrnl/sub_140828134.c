/*
 * XREFs of sub_140828134 @ 0x140828134
 * Callers:
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 * Callees:
 *     sub_14025E608 @ 0x14025E608 (sub_14025E608.c)
 *     sub_1402A1EB0 @ 0x1402A1EB0 (sub_1402A1EB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140828134(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 344);
  v3 = 0;
  v4 = a1 >> 4;
  v5 = *(_OWORD *)(*(_QWORD *)(v1 + 8) - 16LL);
  sub_1402A1EB0(&v3, (__int64)&v5, 0x10uLL);
  sub_1402A1EB0(&v3, (__int64)&v4, 8uLL);
  sub_14025E608(&v3);
  return v3 % 0x927C0 + 600000;
}
