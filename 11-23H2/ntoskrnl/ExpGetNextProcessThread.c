/*
 * XREFs of ExpGetNextProcessThread @ 0x140742A28
 * Callers:
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 * Callees:
 *     PsGetNextProcessThread @ 0x140742CA0 (PsGetNextProcessThread.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall ExpGetNextProcessThread(char *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  if ( a1 != PsIdleProcess )
    return PsGetNextProcessThread(a1, a2);
  v4 = a1 + 48;
  v2 = 0LL;
  if ( a2 )
    v5 = *(_QWORD **)(a2 + 760);
  else
    v5 = (_QWORD *)*v4;
  if ( v5 != v4 )
  {
    v2 = v5 - 95;
    KeSynchronizeWithDynamicProcessors();
  }
  return (__int64)v2;
}
