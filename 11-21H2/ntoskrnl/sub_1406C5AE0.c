/*
 * XREFs of sub_1406C5AE0 @ 0x1406C5AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406C5B04 @ 0x1406C5B04 (sub_1406C5B04.c)
 */

__int64 __fastcall sub_1406C5AE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1406C5B04(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
