/*
 * XREFs of sub_140411200 @ 0x140411200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_140416DC0 @ 0x140416DC0 (sub_140416DC0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_140411200(__int64 a1, const void *a2, void *a3)
{
  int v3; // ebp
  size_t v6; // rdi

  v3 = *(_DWORD *)(a1 + 4);
  v6 = 4LL * (unsigned int)(6 * (v3 + 1));
  memmove(a3, a2, v6);
  sub_1403FDDE8((__int64)a3 + v6, v6);
  sub_140416DC0(a1, a3, a3);
  sub_1403FDDE8((__int64)a3 + v6, (unsigned int)(v3 << 6) - v6);
  return a3;
}
