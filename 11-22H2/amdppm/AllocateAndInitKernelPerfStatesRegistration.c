/*
 * XREFs of AllocateAndInitKernelPerfStatesRegistration @ 0x1C0030824
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00088F0 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0032524 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003282C (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0034BA0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateAndInitKernelPerfStatesRegistration(__int64 a1, int a2, int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  __int64 result; // rax

  v6 = (32 * a2 + 575) & 0xFFFFFFF8;
  v7 = v6 + 24 * a3;
  result = ExAllocatePool2(64LL, v7 + 8 * a3 * a2, 1919119952LL);
  if ( result )
  {
    *(_DWORD *)result = 72;
    *(_QWORD *)(result + 552) = result + 568;
    *(_DWORD *)(result + 16) = a2;
    *(_QWORD *)(result + 544) = result + v6;
    *(_DWORD *)(result + 36) = a3;
    *(_QWORD *)(result + 560) = result + v7;
    if ( *(_BYTE *)(a1 + 1138) )
      *(_QWORD *)(result + 520) = PepParkPreference;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x28u) )
    {
      *(_QWORD *)(result + 528) = PepParkMask;
      *(_QWORD *)(result + 536) = PepPerfCheckComplete;
      *(_QWORD *)(result + 88) = *(_QWORD *)(a1 + 1120);
    }
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
      *(_QWORD *)(result + 496) = HwDebugUpdateProcessorData;
    *(_QWORD *)(result + 504) = PepProcQueryMeasCapabilities;
    *(_QWORD *)(result + 512) = PepProcQueryMeasValues;
  }
  return result;
}
