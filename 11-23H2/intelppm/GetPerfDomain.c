/*
 * XREFs of GetPerfDomain @ 0x1C002CA14
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000C7D0 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002A6D4 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0037788 (CpcHighestNotifyWorker.c)
 *     InitPerfFeedbackInternal @ 0x1C003E658 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003E964 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003FEC0 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001E64 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0008914 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 568;
  }
  else
  {
    if ( !byte_1C001F578 || (v4 = *(_QWORD *)(a1 + 1080)) == 0 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1088;
  }
  InitializeEnumerationContext(v4 + 16, v6, v5);
  return v7;
}
