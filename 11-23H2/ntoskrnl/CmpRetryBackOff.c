/*
 * XREFs of CmpRetryBackOff @ 0x140A1E6C8
 * Callers:
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140A1E700 (CmpRollbackTransactionArray.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140246810 (KeDelayExecutionThread.c)
 */

NTSTATUS __fastcall CmpRetryBackOff(_DWORD *a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*a1 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    result = KeDelayExecutionThread(0, 0, &Interval);
    *a1 = 0;
  }
  return result;
}
