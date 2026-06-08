/*
 * XREFs of InitLegacyPccInternal @ 0x1C000B2BC
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C000B650 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C0038FF0 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C00243BC (AllocateAndInitKernelPerfStatesRegistration.c)
 *     DisplayKernelPerfStates @ 0x1C00244C8 (DisplayKernelPerfStates.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C0029290 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitLegacyPccInternal(_QWORD *a1, __int64 (__fastcall *a2)(__int64))
{
  _DWORD *v2; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int PerfDomain; // esi
  _DWORD *v7; // r14
  __int64 inited; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // r13
  _DWORD *v17; // rsi
  _DWORD *v18; // r14
  __int64 v19; // rbx
  unsigned int *v20; // rcx
  int v21; // eax
  _QWORD *v22; // r11
  _QWORD *v23; // rax
  _OWORD v25[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 Pool2; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_1C001E290;
  v28 = 0LL;
  memset(v25, 0, sizeof(v25));
  v4 = 0LL;
  if ( qword_1C001E310 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DCF8,
      0LL);
    PerfDomain = GetPerfDomain(a1, v25, &Pool2);
    Pool2 = ExAllocatePool2(64LL, 88 * PerfDomain, 1919119952LL);
    v7 = (_DWORD *)Pool2;
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
      if ( dword_1C001E28C )
      {
        v12 = 0x989680 % ((unsigned int)dword_1C001E28C >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_1C001E28C >> 1);
      }
      v14 = *(_QWORD *)(v4 + 544);
      *(_QWORD *)v14 = LegacyPccInstantaneousFrequency;
      *(_QWORD *)(v14 + 8) = 100LL;
      *(_WORD *)(v14 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      DisplayKernelPerfStates(v4, v12);
      v15 = *(_QWORD *)(v4 + 552);
      v16 = *(_QWORD **)(v4 + 560);
      v17 = v7;
      ResetEnumerationContext((__int64 *)v25);
      v18 = v2;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
      {
        v19 = v28;
        InitCommonPerfStateContext(v28, (_DWORD)v17, v15, 100, 0);
        a1[27] = v17;
        v20 = *(unsigned int **)(v19 + 584);
        *(_QWORD *)v17 = v19;
        v17[20] = 100;
        *((_QWORD *)v17 + 8) = (char *)v18 + *v20;
        *((_QWORD *)v17 + 9) = (char *)v18 + v20[1];
        *v16++ = v17;
        v17 += 22;
        v15 += 32LL;
      }
      v21 = a2(v4);
      v7 = (_DWORD *)Pool2;
      v5 = v21;
      if ( v21 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C001E308);
        ResetEnumerationContext((__int64 *)v25);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v25, &v28) )
        {
          *(_QWORD *)(v28 + 240) = v22 - 5;
          v23 = (_QWORD *)qword_1C001DD80;
          if ( *(__int64 **)qword_1C001DD80 != &qword_1C001DD78 )
            __fastfail(3u);
          *v22 = &qword_1C001DD78;
          v22[1] = v23;
          *v23 = v22;
          qword_1C001DD80 = (__int64)v22;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C001E308);
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
      qword_1C001DCF8);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, (ULONG)1919119952);
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
