/*
 * XREFs of sub_140798CFC @ 0x140798CFC
 * Callers:
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall sub_140798CFC(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14000DF58);
  return result;
}
