/*
 * XREFs of InitCommonPerfStateContext @ 0x1C0029290
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000B2BC (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C003D464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003D774 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003ECB0 (RegisterKernelPepPerf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C0029358 (HwDebugInitializeProcessorSupport.c)
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
        qword_1C001DD10,
        0LL);
      HwDebugInitializeProcessorSupport(a1, a2, 0LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001DD10);
    }
  }
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 736);
  result = a5;
  *(_DWORD *)(a3 + 16) = a4;
  *(_DWORD *)(a3 + 24) = a5;
  return result;
}
