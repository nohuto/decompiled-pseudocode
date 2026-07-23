/*
 * XREFs of sub_140761F70 @ 0x140761F70
 * Callers:
 *     sub_1405A1D20 @ 0x1405A1D20 (sub_1405A1D20.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140761F70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)(a2 + 8), 0, 0x60uLL);
  *(_QWORD *)a2 = a1;
  result = (*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
