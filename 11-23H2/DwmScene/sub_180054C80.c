/*
 * XREFs of sub_180054C80 @ 0x180054C80
 * Callers:
 *     sub_180054574 @ 0x180054574 (sub_180054574.c)
 *     sub_180054CC0 @ 0x180054CC0 (sub_180054CC0.c)
 *     sub_1800557E0 @ 0x1800557E0 (sub_1800557E0.c)
 *     sub_18005D610 @ 0x18005D610 (sub_18005D610.c)
 *     sub_180087564 @ 0x180087564 (sub_180087564.c)
 *     sub_180088C80 @ 0x180088C80 (sub_180088C80.c)
 *     sub_180088DF8 @ 0x180088DF8 (sub_180088DF8.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 */

__int64 __fastcall sub_180054C80(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_180027B70((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
