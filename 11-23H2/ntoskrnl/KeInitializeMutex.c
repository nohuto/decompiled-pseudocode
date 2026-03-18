/*
 * XREFs of KeInitializeMutex @ 0x14033ADB0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     EtwpPreInitializeSiloState @ 0x140845D4C (EtwpPreInitializeSiloState.c)
 *     PdcRwLockInitialize2 @ 0x14085ABB8 (PdcRwLockInitialize2.c)
 *     KeAllocateCalloutStackEx @ 0x1408715A0 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A920D4 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     KiInitializeMutant @ 0x14033ADEC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2, 0LL);
}
