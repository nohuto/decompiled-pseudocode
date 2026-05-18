/*
 * XREFs of sub_18005C610 @ 0x18005C610
 * Callers:
 *     sub_18005C5EC @ 0x18005C5EC (sub_18005C5EC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 */

__int64 __fastcall sub_18005C610(void *a1, __int64 a2)
{
  memset(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
