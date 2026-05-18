/*
 * XREFs of sub_1800A0648 @ 0x1800A0648
 * Callers:
 *     sub_1800A0254 @ 0x1800A0254 (sub_1800A0254.c)
 * Callees:
 *     sub_18002E2B0 @ 0x18002E2B0 (sub_18002E2B0.c)
 */

__int64 __fastcall sub_1800A0648(__int64 *a1)
{
  __int64 result; // rax

  sub_18002E2B0(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
