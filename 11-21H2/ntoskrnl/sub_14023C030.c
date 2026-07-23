/*
 * XREFs of sub_14023C030 @ 0x14023C030
 * Callers:
 *     sub_14023BE50 @ 0x14023BE50 (sub_14023BE50.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405B130C @ 0x1405B130C (sub_1405B130C.c)
 * Callees:
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 */

__int64 __fastcall sub_14023C030(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  *(_QWORD *)(a1 + 8) = (*(_DWORD *)(a2 + 48) != 2) - 2LL;
  *(_QWORD *)a1 = 0LL;
  sub_140313CA0(a1, 0LL, 1LL);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = 0LL;
  return sub_1402E89B0(a1 + 16, v3, v4);
}
