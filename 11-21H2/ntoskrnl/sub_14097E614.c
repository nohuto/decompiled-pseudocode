/*
 * XREFs of sub_14097E614 @ 0x14097E614
 * Callers:
 *     sub_14097E850 @ 0x14097E850 (sub_14097E850.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140313D14 @ 0x140313D14 (sub_140313D14.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_14097E614(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = a1;
  for ( i = sub_1402CBD10(a1, qword_140C53290, 1); a2; --a2 )
  {
    v10 = sub_140317A10(v4);
    if ( v10 != i )
    {
      v6 = sub_140317A10((unsigned __int64)&v10);
      sub_140313D14((_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), v3);
      v3 = v7;
      sub_140228660(48 * v8 - 0x220000000000LL, 0);
    }
    v4 += 8LL;
  }
  return v3;
}
