/*
 * XREFs of InitCommonPerfStateContext @ 0x1C0030140
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00082C8 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00316E0 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C00319E4 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0033D20 (RegisterKernelPepPerf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C0037968 (HwDebugInitializeProcessorSupport.c)
 */

__int64 __fastcall InitCommonPerfStateContext(__int64 a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( *(_DWORD *)(a1 + 80) )
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 80);
  }
  else
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 56);
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0011470,
        0LL);
      HwDebugInitializeProcessorSupport(a1, a2, 0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0011470);
    }
  }
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 736);
  result = a5;
  *(_DWORD *)(a3 + 16) = a4;
  *(_DWORD *)(a3 + 24) = a5;
  return result;
}
