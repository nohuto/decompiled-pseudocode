/*
 * XREFs of sub_140287428 @ 0x140287428
 * Callers:
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140287428(__int64 a1)
{
  return (*(_BYTE *)(a1 + 62) & 0xC) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0;
}
