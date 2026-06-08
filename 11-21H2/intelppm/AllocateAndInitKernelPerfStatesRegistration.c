/*
 * XREFs of AllocateAndInitKernelPerfStatesRegistration @ 0x1C00243BC
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000B2BC (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C003D464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003D774 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003ECB0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AllocateAndInitKernelPerfStatesRegistration(__int64 a1, int a2, int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  __int64 Pool2; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v6 = (32 * a2 + 575) & 0xFFFFFFF8;
  v7 = v6 + 24 * a3;
  Pool2 = ExAllocatePool2(64LL, v7 + 8 * a3 * a2, 1919119952LL);
  v9 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 69;
    *(_QWORD *)(Pool2 + 552) = Pool2 + 568;
    *(_DWORD *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 544) = Pool2 + v6;
    *(_DWORD *)(Pool2 + 36) = a3;
    *(_QWORD *)(Pool2 + 560) = Pool2 + v7;
    if ( *(_BYTE *)(a1 + 1138) )
      *(_QWORD *)(Pool2 + 520) = PepParkPreference;
    v10 = *(_QWORD *)(a1 + 280);
    if ( (v10 & 0x10000000000LL) != 0 )
    {
      v9[66] = PepParkMask;
      v9[67] = PepPerfCheckComplete;
      v9[11] = *(_QWORD *)(a1 + 1120);
      v10 = *(_QWORD *)(a1 + 280);
    }
    if ( (v10 & 0x800000000LL) != 0 )
      v9[62] = HwDebugUpdateProcessorData;
    v9[63] = PepProcQueryMeasCapabilities;
    v9[64] = PepProcQueryMeasValues;
  }
  return v9;
}
