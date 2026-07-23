/*
 * XREFs of sub_140B05B1C @ 0x140B05B1C
 * Callers:
 *     sub_140B04910 @ 0x140B04910 (sub_140B04910.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_1403C2D6C @ 0x1403C2D6C (sub_1403C2D6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B05B1C(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *v5; // rbp
  __int64 v6; // r9
  unsigned __int8 i; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v15; // [rsp+20h] [rbp-108h] BYREF
  __int64 v16; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v17[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v17, 0, 0xB8uLL);
  v17[3] = 0LL;
  v4 = 0LL;
  LODWORD(v17[1]) = 20;
  BYTE4(v17[0]) = 1;
  v5 = sub_14026DFC0(4);
  for ( i = sub_1402CF4F0((__int64)v5); a1 < a2; a1 += 8LL )
  {
    if ( v4 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_4;
      sub_14020D8D0((__int64)v5, v4);
    }
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00((__int64)v5, v4, 0LL, v6);
LABEL_4:
    v16 = sub_140317A10(a1);
    v8 = sub_140317A10((unsigned __int64)&v16);
    v12 = 0xFFFFFFFFFFLL;
    v13 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v15, v9, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    sub_1403C2D6C(v12, v13, 0xFFFFFFFFFFFFFFF0uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (dword_140D06880 & 0x20000) == 0 )
    {
      sub_14033DBC0(a1, v16 | 0x8000000000000062uLL);
      sub_1402CF280((__int64)v17, (__int64)(a1 << 25) >> 16, 1LL, 0);
    }
  }
  sub_14032F1B0((__int64)v17);
  if ( v4 )
    sub_14020D8D0((__int64)v5, v4);
  return sub_1402B0CE0((__int64)v5, i);
}
