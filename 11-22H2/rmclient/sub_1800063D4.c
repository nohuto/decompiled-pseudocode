/*
 * XREFs of sub_1800063D4 @ 0x1800063D4
 * Callers:
 *     sub_1800060F8 @ 0x1800060F8 (sub_1800060F8.c)
 * Callees:
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 (__fastcall *__fastcall sub_1800063D4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4))()
{
  __int64 (__fastcall *result)(); // rax

  memset(a4, 0, 0x50uLL);
  a4[4] = 0LL;
  RtlInitializeSRWLock(a4 + 1);
  a4[6] = a4 + 5;
  a4[5] = a4 + 5;
  a4[7] = &sub_1800085A0;
  a4[8] = sub_1800090B0;
  result = sub_180008660;
  a4[9] = sub_180008660;
  return result;
}
