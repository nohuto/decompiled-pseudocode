/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x140362C90
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140506ABC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140506C48 (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x14051C384 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliAcpiSleep @ 0x140527F40 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140A96600 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A968A0 (HalpAcpiPreSleep.c)
 *     HalpDpPostReplace @ 0x140A97488 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A97780 (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterWrite(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 40])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
