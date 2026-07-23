/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x1403A1F10
 * Callers:
 *     HalpCheckPowerButton @ 0x14040F960 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x140506F50 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x140507198 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x140528490 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140A96470 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A96710 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A9696C (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A972F8 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A975F0 (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 32])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
