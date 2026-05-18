/*
 * XREFs of sub_18001FEAC @ 0x18001FEAC
 * Callers:
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 * Callees:
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 */

__int64 __fastcall sub_18001FEAC(__int64 a1, __int64 a2, _QWORD *a3)
{
  const void **v4; // rax

  v4 = sub_18001F5AC(a2, a3, (__int64)a3);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v4 + 1);
  v4[2] = 0LL;
  v4[3] = (const void *)15;
  *(_BYTE *)v4 = 0;
  return a1;
}
