/*
 * XREFs of HalpInterruptFindLines @ 0x1402520D4
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140236500 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x140251EA0 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403B0C40 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403B0CB0 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptIsCmciSupported @ 0x1403DEB00 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1405080D4 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14050910C (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x14050918C (HalpInterruptLineToGsi.c)
 *     HalpConnectThermalInterrupt @ 0x14051DB60 (HalpConnectThermalInterrupt.c)
 *     HalFixInterruptLine @ 0x140524B88 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 */

_QWORD *__fastcall HalpInterruptFindLines(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  _DWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( !v1 )
    return 0LL;
  v4 = (_QWORD *)(v1 + 248);
  v5 = *(_QWORD **)(v1 + 248);
  if ( v5 == (_QWORD *)(v1 + 248) )
    return 0LL;
  v6 = *(_DWORD *)(v2 + 4);
  while ( 1 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 <= v6 && *((_DWORD *)v7 + 6) > v6 )
      break;
    if ( v5 == v4 )
      return 0LL;
  }
  if ( v3 )
    *v3 = v6 - v8;
  return v7;
}
