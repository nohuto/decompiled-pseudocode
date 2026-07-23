/*
 * XREFs of KeInitializeMutex @ 0x14033B040
 * Callers:
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     EtwpPreInitializeSiloState @ 0x14084604C (EtwpPreInitializeSiloState.c)
 *     PdcRwLockInitialize2 @ 0x14085ADF8 (PdcRwLockInitialize2.c)
 *     KeAllocateCalloutStackEx @ 0x1408717E0 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91F54 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     KiInitializeMutant @ 0x14033B07C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2, 0LL);
}
