/*
 * XREFs of sub_1405F3870 @ 0x1405F3870
 * Callers:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 * Callees:
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 */

__int64 __fastcall sub_1405F3870(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v7 = *a2;
  v8 = (1LL << ((unsigned __int8)v4 >> 2))
     - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v5 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
     + v5
     - 1;
  sub_140363E50(&v9, (unsigned __int64 *)&v8, 0x8000LL, &v7);
  v7 = *a2;
  return sub_140370C00(a1, &v7);
}
