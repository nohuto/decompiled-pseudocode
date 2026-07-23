/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x14037CBD0
 * Callers:
 *     HalDisableInterrupt @ 0x14031FB80 (HalDisableInterrupt.c)
 *     HalpInitializeDeferredErrorVector @ 0x14037BE88 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BEF8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x14037C060 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14037C1B4 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetLineState @ 0x14037C8AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CB00 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF524 (HalpInterruptRemapFixedLines.c)
 *     HalpMaskInterrupt @ 0x1403B2860 (HalpMaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x14050490C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140504B0C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRestoreClock @ 0x140505838 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x140506CDC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptRestoreController @ 0x14051AE38 (HalpInterruptRestoreController.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x1405212C0 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140A951F8 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051AF58 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  __int16 v8; // [rsp+30h] [rbp-8h]

  v3 = *(_DWORD *)(a3 + 12);
  v4 = v3 | 1;
  v5 = a1;
  if ( (v3 & 0x30) != 0x10 )
    v4 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_DWORD *)(a1 + 244) & 0x200) != 0 )
  {
    _disable();
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
    if ( (v8 & 0x200) != 0 )
      _enable();
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
  }
  if ( v6 < 0 )
    HalpInterruptSetProblemEx(v5, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3172);
  return (unsigned int)v6;
}
