/*
 * XREFs of InitLegacyPccInternal @ 0x1C000C7D0
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C000CB70 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C003A2F0 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     InitCommonPerfStateContext @ 0x1C002BADC (InitCommonPerfStateContext.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002C904 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     DisplayKernelPerfStates @ 0x1C002CB6C (DisplayKernelPerfStates.c)
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
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  _QWORD *v18; // r13
  _DWORD *v19; // rsi
  _DWORD *v20; // r14
  __int64 v21; // rbx
  unsigned int *v22; // rcx
  int v23; // eax
  _QWORD *v24; // r11
  _QWORD *v25; // rax
  _OWORD v27[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 Pool2; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (_DWORD *)qword_1C001F5E0;
  v30 = 0LL;
  memset(v27, 0, sizeof(v27));
  v4 = 0LL;
  if ( qword_1C001F660 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F018,
      0LL);
    PerfDomain = GetPerfDomain(a1, v27, &Pool2);
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
      if ( dword_1C001F5DC )
      {
        v12 = 0x989680 % ((unsigned int)dword_1C001F5DC >> 1);
        *(_DWORD *)(v4 + 40) = 0x989680 / ((unsigned int)dword_1C001F5DC >> 1);
      }
      v16 = *(_QWORD *)(v4 + 544);
      *(_QWORD *)v16 = LegacyPccInstantaneousFrequency;
      *(_QWORD *)(v16 + 8) = 100LL;
      *(_WORD *)(v16 + 16) = 0;
      *(_DWORD *)(v4 + 36) = 1;
      DisplayKernelPerfStates(v4, v12);
      v17 = *(_QWORD *)(v4 + 552);
      v18 = *(_QWORD **)(v4 + 560);
      v19 = v7;
      ResetEnumerationContext((__int64 *)v27);
      v20 = v2;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) )
      {
        v21 = v30;
        InitCommonPerfStateContext(v30, (_DWORD)v19, v17, 100, 0);
        a1[27] = v19;
        v22 = *(unsigned int **)(v21 + 584);
        *(_QWORD *)v19 = v21;
        v19[20] = 100;
        *((_QWORD *)v19 + 8) = (char *)v20 + *v22;
        *((_QWORD *)v19 + 9) = (char *)v20 + v22[1];
        *v18++ = v19;
        v19 += 22;
        v17 += 32LL;
      }
      v23 = a2(v4);
      v7 = (_DWORD *)Pool2;
      v5 = v23;
      if ( v23 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C001F658);
        ResetEnumerationContext((__int64 *)v27);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v27, &v30) )
        {
          *(_QWORD *)(v30 + 240) = v24 - 5;
          v25 = (_QWORD *)qword_1C001F0A0;
          if ( *(__int64 **)qword_1C001F0A0 != &qword_1C001F098 )
            __fastfail(3u);
          *v24 = &qword_1C001F098;
          v24[1] = v25;
          *v25 = v24;
          qword_1C001F0A0 = (__int64)v24;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C001F658);
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
      qword_1C001F018);
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
