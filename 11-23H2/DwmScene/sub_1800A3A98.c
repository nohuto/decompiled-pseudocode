/*
 * XREFs of sub_1800A3A98 @ 0x1800A3A98
 * Callers:
 *     sub_180051CB0 @ 0x180051CB0 (sub_180051CB0.c)
 * Callees:
 *     sub_1800A3AC0 @ 0x1800A3AC0 (sub_1800A3AC0.c)
 */

__int64 sub_1800A3A98()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = sub_1800A3AC0();
  *(_DWORD *)(v1 + 144) = 4;
  return result;
}
