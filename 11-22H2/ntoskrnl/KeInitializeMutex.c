/*
 * XREFs of KeInitializeMutex @ 0x14033ABB0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     EtwpPreInitializeSiloState @ 0x140847ADC (EtwpPreInitializeSiloState.c)
 *     PdcRwLockInitialize2 @ 0x14085B388 (PdcRwLockInitialize2.c)
 *     KeAllocateCalloutStackEx @ 0x140871A70 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A91DD4 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     KiInitializeMutant @ 0x14033ABEC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2, 0LL);
}
