/*
 * XREFs of sub_14040C6B0 @ 0x14040C6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040E560 @ 0x14040E560 (sub_14040E560.c)
 */

__int64 __fastcall sub_14040C6B0(__int64 a1, _OWORD *a2, __int64 a3)
{
  *(_OWORD *)a3 = *a2;
  *(_OWORD *)(a3 + 16) = a2[1];
  *(_OWORD *)(a3 + 32) = a2[2];
  *(_OWORD *)(a3 + 48) = a2[3];
  sub_1403FDDE8(a3 + 64, 0x40uLL);
  sub_14040E560(a1, a3, a3);
  *(_QWORD *)(a3 + 128) = 0LL;
  *(_QWORD *)(a3 + 136) = 0LL;
  *(_QWORD *)(a3 + 144) = 0LL;
  *(_QWORD *)(a3 + 152) = 0LL;
  return a3;
}
