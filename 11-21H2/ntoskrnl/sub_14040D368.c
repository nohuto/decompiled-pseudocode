/*
 * XREFs of sub_14040D368 @ 0x14040D368
 * Callers:
 *     sub_140400D40 @ 0x140400D40 (sub_140400D40.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 */

__int64 __fastcall sub_14040D368(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1403FDDE8(a2 + 32, (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  *(_QWORD *)(a2 + 32) = a1;
  return result;
}
