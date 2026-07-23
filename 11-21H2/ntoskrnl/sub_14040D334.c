/*
 * XREFs of sub_14040D334 @ 0x14040D334
 * Callers:
 *     sub_140400D28 @ 0x140400D28 (sub_140400D28.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 */

__int64 __fastcall sub_14040D334(int a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_DWORD *)(a2 + 32);
  result = sub_1403FDDE8(a2 + 32, (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  *v2 = a1;
  return result;
}
