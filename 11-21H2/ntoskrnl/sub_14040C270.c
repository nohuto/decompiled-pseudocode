/*
 * XREFs of sub_14040C270 @ 0x14040C270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 *     sub_14040E560 @ 0x14040E560 (sub_14040E560.c)
 */

__int64 __fastcall sub_14040C270(__int64 a1, _OWORD *a2, void *a3, char a4, _OWORD *a5, __int64 a6)
{
  *a5 = *a2;
  a5[1] = a2[1];
  sub_1403FDDE8((__int64)(a5 + 2), 0x20uLL);
  sub_14040E560(a1, a5, a5);
  sub_1403FDDE8((__int64)(a5 + 2), 0x20uLL);
  sub_14040E560(a1, a5, a3);
  return sub_14040BDF0(a1, a3, (unsigned int *)a3, a4, (__int64)a5, a6);
}
