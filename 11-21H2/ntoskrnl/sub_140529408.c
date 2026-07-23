/*
 * XREFs of sub_140529408 @ 0x140529408
 * Callers:
 *     sub_140528440 @ 0x140528440 (sub_140528440.c)
 *     sub_140528650 @ 0x140528650 (sub_140528650.c)
 *     sub_140528E00 @ 0x140528E00 (sub_140528E00.c)
 *     sub_14052936C @ 0x14052936C (sub_14052936C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140529408(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
