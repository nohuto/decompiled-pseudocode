/*
 * XREFs of sub_14040C1C0 @ 0x14040C1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040BDF0 @ 0x14040BDF0 (sub_14040BDF0.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14040C1C0(__int64 a1, const void *a2, void *a3, char a4, void *a5, __int64 a6)
{
  size_t v9; // rdi

  v9 = (unsigned int)(*(_DWORD *)(a1 + 4) << 6);
  memmove(a5, a2, v9);
  sub_1403FDDE8((__int64)a5 + v9, (unsigned int)v9);
  sub_14040CE04(a1, a5, a5);
  sub_1403FDDE8((__int64)a5 + v9, (unsigned int)v9);
  sub_14040CE04(a1, a5, a3);
  return sub_14040BDF0(a1, a3, (unsigned int *)a3, a4, (__int64)a5, a6);
}
