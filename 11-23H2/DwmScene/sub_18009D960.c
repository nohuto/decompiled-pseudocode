/*
 * XREFs of sub_18009D960 @ 0x18009D960
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 */

__int64 __fastcall sub_18009D960(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  sub_18003B5D8((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
