/*
 * XREFs of sub_14028ECFC @ 0x14028ECFC
 * Callers:
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033E534 @ 0x14033E534 (sub_14033E534.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 */

__int64 __fastcall sub_14028ECFC(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_140317A10(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v9 = v4;
  v5 = 0;
  v6 = a1 << 25 >> 16;
  if ( v6 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v5;
    v6 = (__int64)(v6 << 25) >> 16;
  }
  while ( v6 >= 0xFFFFF68000000000uLL );
  if ( v5 )
  {
    sub_1403C2C58(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL, a1, v9);
    sub_1402285E8(a2, v5, a1);
  }
  else
  {
LABEL_2:
    sub_14033DBC0(a1, v4);
    sub_1402CF280(a2, v6, 1LL, 0LL);
  }
  v7 = sub_140317A10(&v9);
  return sub_14033E534(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
}
