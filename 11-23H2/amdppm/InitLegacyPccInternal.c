/*
 * XREFs of InitLegacyPccInternal @ 0x1C0008DE0
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0009450 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C0025CC0 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001800 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002344 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     DisplayKernelPerfStates @ 0x1C002CD6C (DisplayKernelPerfStates.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C003095C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x1C00310A0 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0035D60 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(_QWORD *a1, __int64 (__fastcall *a2)(__int64))
{
  _DWORD *v2; // r13
  __int64 v4; // rdi
  int v5; // ebx
  unsigned int PerfDomain; // ebx
  __int64 **v7; // rsi
  __int64 inited; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 *v19; // rsi
  __int64 v20; // rbx
  unsigned int *v21; // rcx
  __int64 **v22; // r10
  __int64 *v23; // r11
  __int64 *v24; // rax
  __int64 Pool2; // [rsp+30h] [rbp-30h]
  _OWORD v27[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v29; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_1C0012AA0;
  v30 = 0LL;
  memset(v27, 0, sizeof(v27));
  v4 = 0LL;
  if ( qword_1C0012B20 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00124D8,
      0LL);
    PerfDomain = GetPerfDomain(a1, v27, &v29);
    Pool2 = ExAllocatePool2(64LL, 88 * PerfDomain, 1919119952LL);
    v7 = (__int64 **)Pool2;
    if ( Pool2 && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1LL), (v4 = inited) != 0) )
    {
      *(_DWORD *)(inited + 4) = 65537;
      *(_BYTE *)(inited + 52) = 0;
      *(_QWORD *)(inited + 448) = PerfControlLegacyPcc;
      *(_QWORD *)(inited + 456) = PerfControlLegacyPcc;
      *(_QWORD *)(inited + 440) = PerfSelectionLegacyPcc;
      *(_QWORD *)(inited + 472) = PerfInitiateLegacyPcc;
      *(_QWORD *)(inited + 488) = PerfCommitLegacyPcc;
      v9 = v2[7];
      *(_DWORD *)(inited + 20) = v9;
      *(_DWORD *)(inited + 24) = 100;
      HIDWORD(v12) = 0;
      v10 = 100 * v2[9] / v9;
      *(_DWORD *)(inited + 28) = v10;
      LODWORD(v12) = 100 * v2[8] % v9;
      v11 = 100 * v2[8] / v9;
      v13 = v10;
      if ( !v10 )
        v13 = 1;
      *(_DWORD *)(v4 + 28) = v13;
      v14 = v11;
      if ( !v11 )
        v14 = 1;
      *(_DWORD *)(v4 + 32) = v14;
      *(_QWORD *)(v4 + 56) = (unsigned int)v2[9];
      *(_QWORD *)(v4 + 64) = (unsigned int)v2[7];
      v15 = a1[43];
      if ( v15 )
        *(_QWORD *)(v4 + 368) = v15;
      *(_QWORD *)(v4 + 384) = a1[44];
      *(_QWORD *)(v4 + 392) = a1[45];
      if ( dword_1C0012A9C )
      {
        v12 = 0x989680 % ((unsigned int)dword_1C0012A9C >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_1C0012A9C >> 1);
      }
      v16 = *(_QWORD *)(v4 + 544);
      *(_QWORD *)v16 = LegacyPccInstantaneousFrequency;
      *(_QWORD *)(v16 + 8) = 100LL;
      *(_WORD *)(v16 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      DisplayKernelPerfStates(v4, v12);
      v17 = *(_QWORD *)(v4 + 552);
      v18 = Pool2;
      v29 = *(__int64 **)(v4 + 560);
      ResetEnumerationContext((__int64 *)v27);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) )
      {
        v19 = v29;
        do
        {
          v20 = v30;
          InitCommonPerfStateContext(v30, v18, v17, 100, 0);
          a1[27] = v18;
          v21 = *(unsigned int **)(v20 + 584);
          v17 += 32LL;
          *(_QWORD *)v18 = v20;
          *(_DWORD *)(v18 + 80) = 100;
          *(_QWORD *)(v18 + 64) = (char *)v2 + *v21;
          *(_QWORD *)(v18 + 72) = (char *)v2 + v21[1];
          *v19++ = v18;
          v18 += 88LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) );
        v7 = (__int64 **)Pool2;
      }
      v5 = a2(v4);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C0012B18);
        ResetEnumerationContext((__int64 *)v27);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) )
        {
          v22 = v7 + 5;
          v23 = &qword_1C0012558;
          do
          {
            *(_QWORD *)(v30 + 240) = v22 - 5;
            v24 = (__int64 *)qword_1C0012560;
            if ( *(__int64 **)qword_1C0012560 != v23 )
              __fastfail(3u);
            *v22 = v23;
            v22[1] = v24;
            *v24 = (__int64)v22;
            qword_1C0012560 = (__int64)v22;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C0012B18);
        v7 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00124D8);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, (ULONG)1919119952);
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
