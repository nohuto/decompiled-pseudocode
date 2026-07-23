/*
 * XREFs of sub_140858B18 @ 0x140858B18
 * Callers:
 *     sub_140B271D8 @ 0x140B271D8 (sub_140B271D8.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 */

__int64 __fastcall sub_140858B18(__int64 a1, int a2, int a3)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return KeInitializeTimer2(a1 + 24, (__int64)sub_1405C9BF0, a1, 8LL);
}
