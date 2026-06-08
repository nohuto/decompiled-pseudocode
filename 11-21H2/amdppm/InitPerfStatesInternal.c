/*
 * XREFs of InitPerfStatesInternal @ 0x1C00319E4
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C0024C80 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C00342A0 (RegisterKernelPerfStates.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C00203E4 (GetRegistryDwordValue.c)
 *     DisplayKernelPerfStates @ 0x1C002B710 (DisplayKernelPerfStates.c)
 *     GetPerfDomain @ 0x1C002CF98 (GetPerfDomain.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002F9F8 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     CalculatePercentageCap @ 0x1C002FB38 (CalculatePercentageCap.c)
 *     InitCommonPerfStateContext @ 0x1C0030140 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(_QWORD *))
{
  int v3; // ecx
  _QWORD *inited; // rbx
  unsigned int *v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *v11; // r13
  int v12; // eax
  bool v13; // zf
  void *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // r15
  __int64 v18; // r8
  _DWORD *v19; // rdx
  _DWORD *v20; // r15
  int v21; // r9d
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  int v24; // r13d
  __int64 v25; // rcx
  unsigned int v26; // kr00_4
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // edx
  unsigned int i; // ecx
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  char v35; // al
  _QWORD *v36; // r15
  char *v37; // r14
  __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // r11
  int v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  _OWORD v46[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v48)(_QWORD *); // [rsp+C8h] [rbp+50h]
  __int64 v49; // [rsp+D0h] [rbp+58h]
  int PerfDomain; // [rsp+D8h] [rbp+60h]

  v48 = a2;
  v43 = 0LL;
  LODWORD(v47) = 0;
  v3 = 0;
  P = 0LL;
  LODWORD(v49) = 0;
  inited = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  v7 = 0LL;
  v8 = 0;
  memset(v46, 0, sizeof(v46));
  if ( (v6 & 0x70000000) != 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 456);
    else
      v5 = *(unsigned int **)(a1 + 448);
    v8 = *v5;
  }
  if ( (v6 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 504);
    LODWORD(v49) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v46, &v47);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(PerfDomain << 7), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1)) != 0LL )
  {
    v12 = v47;
    *((_DWORD *)inited + 6) = 100;
    inited[56] = PerfControlPTStates;
    *((_WORD *)inited + 2) = v12;
    *((_WORD *)inited + 3) = 257;
    *((_BYTE *)inited + 52) = 0;
    v42 = v12;
    if ( dword_1C0011D08 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = PerfControlPTStatesHidden, v13) )
      v14 = PerfControlPTStatesHiddenSwAll;
    inited[57] = v14;
    inited[55] = PerfSelectionPTStates;
    v7[7] = P;
    inited[7] = 0LL;
    inited[8] = 100LL;
    if ( v8 && v5 )
    {
      inited[48] = *(_QWORD *)(a1 + 352);
      inited[49] = *(_QWORD *)(a1 + 360);
      *((_DWORD *)inited + 5) = v5[2];
      v15 = v8;
      LODWORD(v47) = v5[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 296);
      v7[4] = *(_QWORD *)(a1 + 328);
      v7[3] = *(_QWORD *)(a1 + 312);
      v7[5] = a1 + 424;
      inited[8] = v5[2];
      v16 = 0LL;
      inited[7] = v5[12 * v8 - 10];
      v17 = v5 + 3;
      do
      {
        v18 = v7[7];
        *(_DWORD *)(v16 + v18 + 16) = *(v17 - 1);
        *(_BYTE *)(v16 + v18 + 24) = (unsigned int)(100 * *(v17 - 1)) / *((_DWORD *)inited + 5);
        *(_QWORD *)(v16 + v18) = *(_QWORD *)(v17 + 3);
        *(_DWORD *)(v16 + v18 + 20) = *v17;
        *(_QWORD *)(v16 + v18 + 8) = *(_QWORD *)(v17 + 5);
        *(_BYTE *)(v16 + v18 + 25) = 1;
        *(_WORD *)(v16 + v18 + 26) = *((_WORD *)v17 + 2);
        if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v16 + v18 + 8) = 0LL;
          *(_QWORD *)(v16 + v18) = v17 - 1;
        }
        v17 += 12;
        v16 += 32LL;
        --v15;
      }
      while ( v15 );
      v19 = (_DWORD *)v7[7];
      v20 = (_DWORD *)inited + 5;
      v11 = (char *)Pool2;
      v21 = v19[8 * v8 - 4];
LABEL_31:
      v22 = v49;
      if ( (_DWORD)v49 )
      {
        v23 = 0;
        v24 = v47;
        v18 = 0LL;
        v7[1] = *(_QWORD *)(a1 + 304);
        v7[2] = *(_QWORD *)(a1 + 320);
        v7[6] = a1 + 480;
        do
        {
          v25 = *(_QWORD *)(a1 + 504);
          v49 = v7[7] + 32LL * (v8 + v23);
          v47 = v25;
          v26 = v21 * *(_DWORD *)(v18 + v25 + 4);
          v27 = v49;
          *(_DWORD *)(v49 + 16) = v26 / 0x64;
          v28 = v47;
          *(_BYTE *)(v27 + 24) = 100 * (v26 / 0x64) / *v20;
          *(_QWORD *)v27 = *(unsigned int *)(v18 + v28 + 16);
          *(_QWORD *)(v27 + 8) = *(unsigned int *)(v18 + v28 + 20);
          *(_BYTE *)(v27 + 25) = 2;
          *(_WORD *)(v27 + 26) = *(_WORD *)(v18 + v28 + 12);
          v29 = *(_DWORD *)(v18 + v28 + 8);
          if ( !v29 )
          {
            v27 = v49;
            v29 = v24 * *(_DWORD *)(v18 + v47 + 4) / 0x64u;
          }
          ++v23;
          *(_DWORD *)(v27 + 20) = v29;
          v18 += 20LL;
        }
        while ( v23 < v22 );
        v19 = (_DWORD *)v7[7];
        v11 = (char *)Pool2;
      }
      for ( i = 1; i < v9; ++i )
      {
        v19 = (_DWORD *)v7[7];
        if ( !LOBYTE(v19[8 * i + 6]) )
        {
          v9 = i;
          break;
        }
      }
      *((_DWORD *)v7 + 16) = v9;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v7 + 18) = 0;
        *((_DWORD *)v7 + 17) = v9;
        v31 = v19[8 * v9 - 2];
      }
      else
      {
        *((_DWORD *)v7 + 17) = v8;
        *((_DWORD *)v7 + 18) = v9 - v8;
        v31 = v19[8 * v8 + 6];
      }
      *((_DWORD *)inited + 7) = v31;
      *((_DWORD *)inited + 8) = *(unsigned __int8 *)(32LL * (v9 - 1) + v7[7] + 24);
      v32 = *(_QWORD *)(a1 + 344);
      if ( v32 )
        inited[46] = v32;
      v33 = inited[68];
      *(_DWORD *)(v33 + 12) = 0;
      *(_DWORD *)(v33 + 8) = 100;
      if ( *(_QWORD *)(a1 + 336) )
      {
        v34 = PerfReadWrappingCounter;
        v19 = PerfReadActualMasterCount;
        if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
          v34 = PerfReadActualMasterCount;
        *(_QWORD *)v33 = v34;
        v35 = 1;
      }
      else
      {
        *(_QWORD *)v33 = PerfStatesInstantaneousFrequency;
        v35 = 0;
      }
      *(_BYTE *)(v33 + 16) = v35;
      *(_BYTE *)(v33 + 17) = v35;
      DisplayKernelPerfStates((__int64)inited, (__int64)v19, v18);
      v36 = (_QWORD *)inited[70];
      v47 = inited[69];
      ResetEnumerationContext((__int64 *)v46);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v43) )
      {
        v37 = v11 + 44;
        v38 = v47;
        do
        {
          v39 = CalculatePercentageCap((__int64)v7, *(_DWORD *)(v43 + 464), *(_DWORD *)(v43 + 512));
          InitCommonPerfStateContext(v40, v37 - 44, v38, v39, v39 < 0x64 ? 2 : 0);
          *(_QWORD *)(a1 + 216) = v37 - 44;
          *(_QWORD *)(v37 + 12) = v7;
          *(_DWORD *)v37 = 100;
          if ( *(_QWORD *)(a1 + 336) )
          {
            *v36 = v37 + 20;
            *(_QWORD *)(v37 + 68) = *(_QWORD *)(a1 + 336);
          }
          else
          {
            *v36 = v37 - 44;
          }
          ++v36;
          v37 += 128;
          v38 += 32LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v43) );
        v11 = (char *)Pool2;
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v42 == 254 || PerfDomain == 1) )
      {
        *(_WORD *)((char *)inited + 11) = 257;
        *((_DWORD *)inited + 12) = 1000;
      }
      if ( v48(inited) >= 0 )
      {
        ResetEnumerationContext((__int64 *)v46);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v43) )
        {
          *(_QWORD *)(v43 + 224) = v11;
          v11 += 128;
        }
        v7 = 0LL;
        P = 0LL;
        v11 = 0LL;
      }
      v10 = 0;
      goto LABEL_69;
    }
    v20 = (_DWORD *)inited + 5;
    *((_DWORD *)inited + 5) = 0;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)inited + 5);
    v21 = *((_DWORD *)inited + 5);
    if ( v21 )
    {
      v19 = (_DWORD *)v7[7];
      LODWORD(v47) = 1000 * v21;
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_69:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  if ( inited )
    ExFreePoolWithTag(inited, (ULONG)1919119952);
  if ( P )
    ExFreePoolWithTag(P, (ULONG)1919119952);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  if ( v11 )
    ExFreePoolWithTag(v11, (ULONG)1919119952);
  return v10;
}
