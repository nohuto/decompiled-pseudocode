/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C0032654
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C0026160 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C0035250 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001800 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002344 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C0020F74 (GetRegistryDwordValue.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C003095C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x1C00310A0 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0035D60 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *))
{
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  _QWORD *v4; // rsi
  int PerfDomain; // ebx
  char *v6; // r14
  int v7; // ebx
  __int64 inited; // rax
  _DWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD *v17; // [rsp+30h] [rbp-40h]
  _QWORD *v18; // [rsp+38h] [rbp-38h]
  __int64 Pool2; // [rsp+40h] [rbp-30h]
  _OWORD v20[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v4 = 0LL;
  memset(v20, 0, sizeof(v20));
  LODWORD(v22) = 0;
  v3(WdfDriverGlobals, qword_1C00124D8, 0LL);
  PerfDomain = GetPerfDomain(a1, v20, &v22);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(112 * PerfDomain), 1919119952LL);
  v6 = (char *)Pool2;
  if ( Pool2
    && (inited = AllocateAndInitKernelPerfStatesRegistration((__int64)a1, PerfDomain, 1),
        v18 = (_QWORD *)inited,
        (v4 = (_QWORD *)inited) != 0LL) )
  {
    *(_WORD *)(inited + 4) = v22;
    *(_QWORD *)(inited + 448) = AcpiCStateIdleCancel;
    v9 = (_DWORD *)(inited + 20);
    *(_DWORD *)(inited + 24) = 100;
    *(_DWORD *)(inited + 28) = 100;
    *(_DWORD *)(inited + 32) = 100;
    *(_WORD *)(inited + 6) = 1;
    *(_BYTE *)(inited + 52) = 2;
    *(_BYTE *)(inited + 14) = byte_1C0012A40;
    *(_QWORD *)(inited + 456) = AcpiCStateIdleCancel;
    *(_QWORD *)(inited + 440) = PerfSelectionFeedback;
    *(_DWORD *)(inited + 20) = 0;
    *(_QWORD *)(inited + 56) = 100LL;
    *(_QWORD *)(inited + 64) = 100LL;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(inited + 20));
    if ( *v9 )
    {
      v10 = a1[43];
      if ( v10 )
        v4[46] = v10;
      v11 = v4[68];
      *(_QWORD *)v11 = PerfReadWrappingCounter;
      *(_QWORD *)(v11 + 8) = 100LL;
      *(_WORD *)(v11 + 16) = 257;
      v17 = (_QWORD *)v4[70];
      v22 = v4[69];
      ResetEnumerationContext((__int64 *)v20);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v20, &v23) )
      {
        v12 = v17;
        v13 = Pool2 + 88;
        v14 = v22;
        do
        {
          v15 = v23;
          InitCommonPerfStateContext(v23, (_QWORD *)(v13 - 88), v14, 100, 0);
          a1[27] = v13 - 88;
          *(_DWORD *)(v13 + 16) = *v9;
          v14 += 32LL;
          *(_QWORD *)v13 = *(_QWORD *)(v15 + 336);
          *v12 = v13 - 48;
          v13 += 112LL;
          ++v12;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v20, &v23) );
        v4 = v18;
        v6 = (char *)Pool2;
      }
      v7 = a2(v4);
      if ( v7 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v20);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v20, &v23) )
        {
          *(_QWORD *)(v23 + 232) = v6;
          v6 += 112;
        }
        v6 = 0LL;
        v7 = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x20u,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
      a1[35] &= ~0x4000000uLL;
      v7 = -1073741823;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  return (unsigned int)v7;
}
