/*
 * XREFs of KiGetRecoveryInformation @ 0x14057B4B4
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14057A91C (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiGetRecoveryInformation(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  memset(a1, 0, 0x4CuLL);
  *a1 = 3;
  *((_BYTE *)a1 + 5) = CurrentPrcb->DebuggerSavedIRQL;
  *((_BYTE *)a1 + 6) = ObGetCurrentIrql();
  *((_QWORD *)a1 + 1) = KiBugCheckDriver;
  a1[4] = KiClockTimerOwner;
  *((_BYTE *)a1 + 20) = CurrentPrcb->NmiActive != 0;
  *((_BYTE *)a1 + 22) = CurrentPrcb->NestingLevel;
  *((_BYTE *)a1 + 23) = (CurrentPrcb->DpcRoutineActive != 0) | *((_BYTE *)a1 + 23) & 0xFE;
  a1[8] = CurrentPrcb->Number;
  a1[9] = KiBugCheckData;
  *((_QWORD *)a1 + 5) = qword_140C42788;
  *((_OWORD *)a1 + 3) = xmmword_140C42790;
  *((_QWORD *)a1 + 8) = qword_140C427A0;
  result = (unsigned int)KiBugcheckRecoveryDumpPolicy;
  a1[18] = KiBugcheckRecoveryDumpPolicy;
  return result;
}
