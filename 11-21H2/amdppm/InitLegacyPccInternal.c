/*
 * XREFs of InitLegacyPccInternal @ 0x1C00082C8
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0008830 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C0024830 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     DisplayKernelPerfStates @ 0x1C002B710 (DisplayKernelPerfStates.c)
 *     GetPerfDomain @ 0x1C002CF98 (GetPerfDomain.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002F9F8 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x1C0030140 (InitCommonPerfStateContext.c)
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
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 *v17; // rsi
  __int64 v18; // rbx
  unsigned int *v19; // rcx
  __int64 **v20; // r10
  __int64 *v21; // r11
  __int64 *v22; // rax
  __int64 Pool2; // [rsp+30h] [rbp-30h]
  _OWORD v25[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_1C00119F0;
  v28 = 0LL;
  memset(v25, 0, sizeof(v25));
  v4 = 0LL;
  if ( qword_1C0011A70 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011458,
      0LL);
    PerfDomain = GetPerfDomain(a1, v25, &v27);
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
      if ( !v10 )
        v10 = 1;
      *(_DWORD *)(v4 + 28) = v10;
      if ( !v11 )
        v11 = 1;
      *(_DWORD *)(v4 + 32) = v11;
      *(_QWORD *)(v4 + 56) = (unsigned int)v2[9];
      *(_QWORD *)(v4 + 64) = (unsigned int)v2[7];
      v13 = a1[43];
      if ( v13 )
        *(_QWORD *)(v4 + 368) = v13;
      *(_QWORD *)(v4 + 384) = a1[44];
      *(_QWORD *)(v4 + 392) = a1[45];
      if ( dword_1C00119EC )
      {
        v12 = 0x989680 % ((unsigned int)dword_1C00119EC >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_1C00119EC >> 1);
      }
      v14 = *(_QWORD *)(v4 + 544);
      *(_QWORD *)v14 = LegacyPccInstantaneousFrequency;
      *(_QWORD *)(v14 + 8) = 100LL;
      *(_WORD *)(v14 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      DisplayKernelPerfStates(v4, v12);
      v15 = *(_QWORD *)(v4 + 552);
      v16 = Pool2;
      v27 = *(__int64 **)(v4 + 560);
      ResetEnumerationContext((__int64 *)v25);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
      {
        v17 = v27;
        do
        {
          v18 = v28;
          InitCommonPerfStateContext(v28, v16, v15, 100, 0);
          a1[27] = v16;
          v19 = *(unsigned int **)(v18 + 584);
          v15 += 32LL;
          *(_QWORD *)v16 = v18;
          *(_DWORD *)(v16 + 80) = 100;
          *(_QWORD *)(v16 + 64) = (char *)v2 + *v19;
          *(_QWORD *)(v16 + 72) = (char *)v2 + v19[1];
          *v17++ = v16;
          v16 += 88LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) );
        v7 = (__int64 **)Pool2;
      }
      v5 = a2(v4);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C0011A68);
        ResetEnumerationContext((__int64 *)v25);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
        {
          v20 = v7 + 5;
          v21 = &qword_1C00114D8;
          do
          {
            *(_QWORD *)(v28 + 240) = v20 - 5;
            v22 = (__int64 *)qword_1C00114E0;
            if ( *(__int64 **)qword_1C00114E0 != v21 )
              __fastfail(3u);
            *v20 = v21;
            v20[1] = v22;
            *v22 = (__int64)v20;
            qword_1C00114E0 = (__int64)v20;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C0011A68);
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
      qword_1C0011458);
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
