/*
 * XREFs of sub_1800B62C0 @ 0x1800B62C0
 * Callers:
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 * Callees:
 *     sub_1800B62E8 @ 0x1800B62E8 (sub_1800B62E8.c)
 */

__int64 sub_1800B62C0()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = sub_1800B62E8();
  *(_DWORD *)(v1 + 144) = 4;
  return result;
}
