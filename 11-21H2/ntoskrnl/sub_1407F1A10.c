/*
 * XREFs of sub_1407F1A10 @ 0x1407F1A10
 * Callers:
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_14085D8F8 @ 0x14085D8F8 (sub_14085D8F8.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14036C7EC @ 0x14036C7EC (sub_14036C7EC.c)
 *     sub_14036C804 @ 0x14036C804 (sub_14036C804.c)
 *     sub_1405B2DA0 @ 0x1405B2DA0 (sub_1405B2DA0.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 */

__int64 __fastcall sub_1407F1A10(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx

  if ( (dword_140D06880 & 0xC00000) == 0 )
    return 0LL;
  v4 = sub_14032A72C(a1);
  if ( (int)sub_14026A784(v4, 1LL, 0LL, 0) >= 0 )
  {
    v5 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
    v6 = v5;
    if ( v5 )
    {
      v7 = sub_1407F1AF8(a1, v5, a2);
      sub_14036C804(48 * v7 - 0x220000000000LL, 0);
      *(_QWORD *)(a1 + 904) = sub_14036C7EC(v7 << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    sub_1405B2DA0(v4, 1LL);
  }
  return 3221225626LL;
}
