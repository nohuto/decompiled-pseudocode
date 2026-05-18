/*
 * XREFs of sub_180056BB4 @ 0x180056BB4
 * Callers:
 *     sub_180054DF4 @ 0x180054DF4 (sub_180054DF4.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_180056630 @ 0x180056630 (sub_180056630.c)
 * Callees:
 *     sub_180055904 @ 0x180055904 (sub_180055904.c)
 */

__int64 (__fastcall ***__fastcall sub_180056BB4(_QWORD *a1, __int64 a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = a2;
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))sub_180055904((__int64)a1, result);
  return result;
}
