/*
 * XREFs of sub_1800A47C0 @ 0x1800A47C0
 * Callers:
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800A47C0(__int64 **a1)
{
  return sub_180071A9C(
           *a1,
           a1[1],
           ((char *)a1[1] - (char *)*a1) >> 4,
           (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800A4590);
}
