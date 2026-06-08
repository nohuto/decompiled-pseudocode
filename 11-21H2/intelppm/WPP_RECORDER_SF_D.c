/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0008580
 * Callers:
 *     Display_CPC @ 0x1C00254E4 (Display_CPC.c)
 *     AcpiEval_CSD @ 0x1C0025D8C (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026548 (AcpiEval_CST.c)
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 *     ValidateCoordinatedState @ 0x1C0037430 (ValidateCoordinatedState.c)
 *     ValidatePccEntry @ 0x1C003784C (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C0037CFC (ValidatePlatformIdleState.c)
 *     AcpiEval_PSS @ 0x1C003A198 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C003A6A0 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003A9A4 (AcpiEval_XPSS.c)
 *     Display_LPI @ 0x1C003C16C (Display_LPI.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0040EDC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0041194 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0041B18 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0041EF4 (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x1C0042634 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x1C004302C (PepQueryPerfDomainInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
