/*
 * XREFs of InitPerfStatesInternal @ 0x1C003295C
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C0026180 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C0035270 (RegisterKernelPerfStates.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001800 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002344 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C0020F74 (GetRegistryDwordValue.c)
 *     DisplayKernelPerfStates @ 0x1C002CD6C (DisplayKernelPerfStates.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C003095C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     CalculatePercentageCap @ 0x1C0030A98 (CalculatePercentageCap.c)
 *     InitCommonPerfStateContext @ 0x1C00310A0 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0035D60 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(__int64))
{
  int v3; // ecx
  __int64 inited; // rbx
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
  _BYTE *v19; // rcx
  _DWORD *v20; // r15
  int v21; // r9d
  unsigned int v22; // r11d
  _BYTE *v23; // rdx
  unsigned int v24; // r10d
  int v25; // r13d
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // kr00_4
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // edx
  unsigned int i; // r8d
  __int64 v34; // r8
  unsigned __int8 v35; // cl
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  char v39; // al
  __int64 v40; // r12
  _QWORD *v41; // r15
  char *v42; // r14
  unsigned int v43; // eax
  __int64 v44; // r11
  int v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  _OWORD v50[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v51; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v52)(__int64); // [rsp+C8h] [rbp+50h]
  __int64 v53; // [rsp+D0h] [rbp+58h]
  int PerfDomain; // [rsp+D8h] [rbp+60h]

  v52 = a2;
  v47 = 0LL;
  LODWORD(v51) = 0;
  v3 = 0;
  P = 0LL;
  LODWORD(v53) = 0;
  inited = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  v7 = 0LL;
  v8 = 0;
  memset(v50, 0, sizeof(v50));
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
    LODWORD(v53) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v50, &v51);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(PerfDomain << 7), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1)) != 0 )
  {
    v12 = v51;
    *(_DWORD *)(inited + 24) = 100;
    *(_QWORD *)(inited + 448) = PerfControlPTStates;
    *(_WORD *)(inited + 4) = v12;
    *(_WORD *)(inited + 6) = 257;
    *(_BYTE *)(inited + 52) = 0;
    v46 = v12;
    if ( dword_1C0012DB8 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = PerfControlPTStatesHidden, v13) )
      v14 = PerfControlPTStatesHiddenSwAll;
    *(_QWORD *)(inited + 456) = v14;
    *(_QWORD *)(inited + 440) = PerfSelectionPTStates;
    v7[7] = P;
    *(_QWORD *)(inited + 56) = 0LL;
    *(_QWORD *)(inited + 64) = 100LL;
    if ( v8 && v5 )
    {
      *(_QWORD *)(inited + 384) = *(_QWORD *)(a1 + 352);
      *(_QWORD *)(inited + 392) = *(_QWORD *)(a1 + 360);
      *(_DWORD *)(inited + 20) = v5[2];
      v15 = v8;
      LODWORD(v51) = v5[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 296);
      v7[4] = *(_QWORD *)(a1 + 328);
      v7[3] = *(_QWORD *)(a1 + 312);
      v7[5] = a1 + 424;
      *(_QWORD *)(inited + 64) = v5[2];
      v16 = 0LL;
      *(_QWORD *)(inited + 56) = v5[12 * v8 - 10];
      v17 = v5 + 3;
      do
      {
        v18 = v7[7];
        *(_DWORD *)(v16 + v18 + 16) = *(v17 - 1);
        *(_BYTE *)(v16 + v18 + 24) = (unsigned int)(100 * *(v17 - 1)) / *(_DWORD *)(inited + 20);
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
      v19 = (_BYTE *)v7[7];
      v20 = (_DWORD *)(inited + 20);
      v11 = (char *)Pool2;
      v21 = *(_DWORD *)&v19[32 * v8 - 16];
LABEL_31:
      v22 = v53;
      v23 = v19;
      if ( (_DWORD)v53 )
      {
        v24 = 0;
        v25 = v51;
        v26 = 0LL;
        v7[1] = *(_QWORD *)(a1 + 304);
        v7[2] = *(_QWORD *)(a1 + 320);
        v7[6] = a1 + 480;
        do
        {
          v27 = *(_QWORD *)(a1 + 504);
          v53 = v7[7] + 32LL * (v8 + v24);
          v28 = *(_DWORD *)(v26 + v27 + 4) * v21;
          v51 = v27;
          v29 = v28;
          v30 = v53;
          *(_DWORD *)(v53 + 16) = v29 / 0x64;
          v31 = v51;
          *(_BYTE *)(v30 + 24) = 100 * (v29 / 0x64) / *v20;
          *(_QWORD *)v30 = *(unsigned int *)(v26 + v31 + 16);
          *(_QWORD *)(v30 + 8) = *(unsigned int *)(v26 + v31 + 20);
          *(_BYTE *)(v30 + 25) = 2;
          *(_WORD *)(v30 + 26) = *(_WORD *)(v26 + v31 + 12);
          v32 = *(_DWORD *)(v26 + v31 + 8);
          if ( !v32 )
          {
            v30 = v53;
            v32 = *(_DWORD *)(v26 + v51 + 4) * v25 / 0x64u;
          }
          ++v24;
          *(_DWORD *)(v30 + 20) = v32;
          v26 += 20LL;
        }
        while ( v24 < v22 );
        v19 = (_BYTE *)v7[7];
        v11 = (char *)Pool2;
        v23 = v19;
      }
      for ( i = 1; i < v9; ++i )
      {
        v19 = v23;
        if ( !v23[32 * i + 24] )
        {
          v9 = i;
          break;
        }
      }
      *((_DWORD *)v7 + 16) = v9;
      v34 = v9 - 1;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v7 + 18) = 0;
        *((_DWORD *)v7 + 17) = v9;
        v35 = v19[32 * (unsigned int)v34 + 24];
      }
      else
      {
        *((_DWORD *)v7 + 17) = v8;
        *((_DWORD *)v7 + 18) = v9 - v8;
        v35 = v23[32 * v8 + 24];
      }
      *(_DWORD *)(inited + 28) = v35;
      *(_DWORD *)(inited + 32) = *(unsigned __int8 *)(32LL * (unsigned int)v34 + v7[7] + 24);
      v36 = *(_QWORD *)(a1 + 344);
      if ( v36 )
        *(_QWORD *)(inited + 368) = v36;
      v37 = *(_QWORD *)(inited + 544);
      *(_DWORD *)(v37 + 12) = 0;
      *(_DWORD *)(v37 + 8) = 100;
      if ( *(_QWORD *)(a1 + 336) )
      {
        v38 = PerfReadWrappingCounter;
        v23 = PerfReadActualMasterCount;
        if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
          v38 = PerfReadActualMasterCount;
        *(_QWORD *)v37 = v38;
        v39 = 1;
      }
      else
      {
        *(_QWORD *)v37 = PerfStatesInstantaneousFrequency;
        v39 = 0;
      }
      *(_BYTE *)(v37 + 16) = v39;
      *(_BYTE *)(v37 + 17) = v39;
      DisplayKernelPerfStates(inited, (__int64)v23, v34);
      v40 = *(_QWORD *)(inited + 552);
      v41 = *(_QWORD **)(inited + 560);
      ResetEnumerationContext((__int64 *)v50);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v47) )
      {
        v42 = v11 + 44;
        do
        {
          v43 = CalculatePercentageCap((__int64)v7, *(_DWORD *)(v47 + 464), *(_DWORD *)(v47 + 512));
          InitCommonPerfStateContext(v44, v42 - 44, v40, v43, v43 < 0x64 ? 2 : 0);
          *(_QWORD *)(a1 + 216) = v42 - 44;
          *(_QWORD *)(v42 + 12) = v7;
          *(_DWORD *)v42 = 100;
          if ( *(_QWORD *)(a1 + 336) )
          {
            *v41 = v42 + 20;
            *(_QWORD *)(v42 + 68) = *(_QWORD *)(a1 + 336);
          }
          else
          {
            *v41 = v42 - 44;
          }
          ++v41;
          v42 += 128;
          v40 += 32LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v47) );
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v46 == 254 || PerfDomain == 1) )
      {
        *(_WORD *)(inited + 11) = 257;
        *(_DWORD *)(inited + 48) = 1000;
      }
      if ( v52(inited) >= 0 )
      {
        ResetEnumerationContext((__int64 *)v50);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v50, &v47) )
        {
          *(_QWORD *)(v47 + 224) = v11;
          v11 += 128;
        }
        v7 = 0LL;
        P = 0LL;
        v11 = 0LL;
      }
      v10 = 0;
      goto LABEL_68;
    }
    v20 = (_DWORD *)(inited + 20);
    *(_DWORD *)(inited + 20) = 0;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)(inited + 20));
    v21 = *(_DWORD *)(inited + 20);
    if ( v21 )
    {
      v19 = (_BYTE *)v7[7];
      LODWORD(v51) = 1000 * v21;
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_68:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  if ( inited )
    ExFreePoolWithTag((PVOID)inited, (ULONG)1919119952);
  if ( P )
    ExFreePoolWithTag(P, (ULONG)1919119952);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  if ( v11 )
    ExFreePoolWithTag(v11, (ULONG)1919119952);
  return v10;
}
