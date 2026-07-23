/*
 * XREFs of sub_14025E8D8 @ 0x14025E8D8
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025E8D8(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[8];
  a1[14] = 0LL;
  a1[13] = result;
  return result;
}
