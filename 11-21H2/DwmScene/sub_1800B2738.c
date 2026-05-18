/*
 * XREFs of sub_1800B2738 @ 0x1800B2738
 * Callers:
 *     sub_1800B2728 @ 0x1800B2728 (sub_1800B2728.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 */

__int64 __fastcall sub_1800B2738(void *a1, __int64 a2)
{
  memset(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
