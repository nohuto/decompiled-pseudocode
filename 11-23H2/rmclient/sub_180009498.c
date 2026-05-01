/*
 * XREFs of sub_180009498 @ 0x180009498
 * Callers:
 *     sub_180001560 @ 0x180001560 (sub_180001560.c)
 *     DllCanUnloadNow @ 0x180002350 (DllCanUnloadNow.c)
 *     DllGetClassObject @ 0x180019AC0 (DllGetClassObject.c)
 * Callees:
 *     <none>
 */

__int64 *sub_180009498()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(&InitOnce, (PINIT_ONCE_FN)InitFn, 0LL, 0LL);
  result = &qword_180032A28;
  byte_180032A30 = 1;
  return result;
}
