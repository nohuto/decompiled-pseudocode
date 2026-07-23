/*
 * XREFs of sub_14040C640 @ 0x14040C640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_14040C640(__int64 a1, const void *a2, void *a3)
{
  int v3; // edi
  size_t v6; // rbx

  v3 = *(_DWORD *)(a1 + 4);
  v6 = (unsigned int)(v3 << 6);
  memmove(a3, a2, v6);
  sub_1403FDDE8((__int64)a3 + 4 * (unsigned int)(16 * v3), (unsigned int)v6);
  sub_14040CE04(a1, a3, a3);
  return a3;
}
