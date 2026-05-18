/*
 * XREFs of sub_18007FBC0 @ 0x18007FBC0
 * Callers:
 *     sub_1800B2890 @ 0x1800B2890 (sub_1800B2890.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007FBC0(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  a1[1] = 0LL;
  *a1 = result;
  return result;
}
