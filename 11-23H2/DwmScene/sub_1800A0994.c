/*
 * XREFs of sub_1800A0994 @ 0x1800A0994
 * Callers:
 *     sub_1800A0984 @ 0x1800A0984 (sub_1800A0984.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 */

__int64 __fastcall sub_1800A0994(void *a1, __int64 a2)
{
  memset(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
