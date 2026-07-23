/*
 * XREFs of sub_1402A0D30 @ 0x1402A0D30
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140B1B59C @ 0x140B1B59C (sub_140B1B59C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402A0D30(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x118uLL);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 2097184;
  memset((void *)(a1 + 24), 0, 0x100uLL);
  *(_QWORD *)(a1 + 4) = 0LL;
  result = (*(_DWORD *)(a1 + 8) & 0xFFFFF | 0x80100000) - 1;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
