/*
 * XREFs of sub_1800B70F4 @ 0x1800B70F4
 * Callers:
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B70F4(__int64 **a1)
{
  return sub_18007CB18(
           *a1,
           a1[1],
           ((char *)a1[1] - (char *)*a1) >> 4,
           (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))sub_1800B6DB0);
}
