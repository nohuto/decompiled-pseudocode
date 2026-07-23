/*
 * XREFs of sub_140524E30 @ 0x140524E30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051C5D8 @ 0x14051C5D8 (sub_14051C5D8.c)
 */

__int64 __fastcall sub_140524E30(__int64 a1, _QWORD *a2)
{
  memset((void *)a1, 0, 0x48uLL);
  *(_DWORD *)(a1 + 4) = 192;
  *(_WORD *)(a1 + 8) = 768;
  *(_OWORD *)(a1 + 16) = xmmword_14003A6B0;
  *(_DWORD *)(a1 + 48) = 3;
  return sub_14051C5D8(a2);
}
