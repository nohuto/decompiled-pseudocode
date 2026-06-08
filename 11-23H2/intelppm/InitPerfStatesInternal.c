/*
 * XREFs of InitPerfStatesInternal @ 0x1C003E964
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C003A780 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C0040480 (RegisterKernelPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 *     InitCommonPerfStateContext @ 0x1C002BADC (InitCommonPerfStateContext.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002C904 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     DisplayKernelPerfStates @ 0x1C002CB6C (DisplayKernelPerfStates.c)
 *     CalculatePercentageCap @ 0x1C002F850 (CalculatePercentageCap.c)
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
  _DWORD *v15; // r9
  __int64 v16; // r13
  __int64 v17; // rcx
  int *v18; // r15
  __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  int v23; // r13d
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // kr00_4
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  _BYTE *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  char v37; // al
  __int64 v38; // r12
  _QWORD *v39; // r15
  char *v40; // r14
  unsigned int v41; // eax
  __int64 v42; // r11
  int v44; // [rsp+30h] [rbp-48h]
  __int64 v45; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  _OWORD v48[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v49; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v50)(__int64); // [rsp+C8h] [rbp+50h]
  __int64 v51; // [rsp+D0h] [rbp+58h]
  int PerfDomain; // [rsp+D8h] [rbp+60h]

  v50 = a2;
  v45 = 0LL;
  LODWORD(v49) = 0;
  v3 = 0;
  P = 0LL;
  LODWORD(v51) = 0;
  inited = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  v7 = 0LL;
  v8 = 0;
  memset(v48, 0, sizeof(v48));
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
    LODWORD(v51) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v48, &v49);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(PerfDomain << 7), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1)) != 0 )
  {
    v12 = v49;
    *(_DWORD *)(inited + 24) = 100;
    *(_QWORD *)(inited + 448) = PerfControlPTStates;
    *(_WORD *)(inited + 4) = v12;
    *(_WORD *)(inited + 6) = 257;
    *(_BYTE *)(inited + 52) = 0;
    v44 = v12;
    if ( dword_1C001F8F8 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = PerfControlPTStatesHidden, v13) )
      v14 = PerfControlPTStatesHiddenSwAll;
    *(_QWORD *)(inited + 456) = v14;
    *(_QWORD *)(inited + 440) = PerfSelectionPTStates;
    v7[7] = P;
    *(_QWORD *)(inited + 56) = 0LL;
    *(_QWORD *)(inited + 64) = 100LL;
    if ( v8 && v5 )
    {
      v15 = v5 + 3;
      *(_QWORD *)(inited + 384) = *(_QWORD *)(a1 + 352);
      *(_QWORD *)(inited + 392) = *(_QWORD *)(a1 + 360);
      *(_DWORD *)(inited + 20) = v5[2];
      v16 = v8;
      LODWORD(v49) = v5[12 * v8 - 9];
      *v7 = *(_QWORD *)(a1 + 296);
      v7[4] = *(_QWORD *)(a1 + 328);
      v7[3] = *(_QWORD *)(a1 + 312);
      v7[5] = a1 + 424;
      *(_QWORD *)(inited + 64) = v5[2];
      v17 = 0LL;
      *(_QWORD *)(inited + 56) = v5[12 * v8 - 10];
      v18 = (int *)(inited + 20);
      do
      {
        v19 = v7[7];
        *(_DWORD *)(v17 + v19 + 16) = *(v15 - 1);
        *(_BYTE *)(v17 + v19 + 24) = 100 * *(v15 - 1) / (unsigned int)*v18;
        *(_QWORD *)(v17 + v19) = *(_QWORD *)(v15 + 3);
        *(_DWORD *)(v17 + v19 + 20) = *v15;
        *(_QWORD *)(v17 + v19 + 8) = *(_QWORD *)(v15 + 5);
        *(_BYTE *)(v17 + v19 + 25) = 1;
        *(_WORD *)(v17 + v19 + 26) = *((_WORD *)v15 + 2);
        if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v17 + v19 + 8) = 0LL;
          *(_QWORD *)(v17 + v19) = v15 - 1;
        }
        v15 += 12;
        v17 += 32LL;
        --v16;
      }
      while ( v16 );
      v11 = (char *)Pool2;
      v20 = *(_DWORD *)(32LL * (v8 - 1) + v7[7] + 16);
      goto LABEL_33;
    }
    v18 = (int *)(inited + 20);
    *(_DWORD *)(inited + 20) = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                inited + 20) < 0 )
      *v18 = 0;
    v20 = *v18;
    if ( *v18 )
    {
      LODWORD(v49) = 1000 * v20;
LABEL_33:
      v21 = v51;
      if ( (_DWORD)v51 )
      {
        v22 = 0;
        v23 = v49;
        v19 = 0LL;
        v7[1] = *(_QWORD *)(a1 + 304);
        v7[2] = *(_QWORD *)(a1 + 320);
        v7[6] = a1 + 480;
        do
        {
          v24 = *(_QWORD *)(a1 + 504);
          v51 = v7[7] + 32LL * (v8 + v22);
          v25 = *(_DWORD *)(v19 + v24 + 4) * v20;
          v49 = v24;
          v26 = v25;
          v27 = v51;
          *(_DWORD *)(v51 + 16) = v26 / 0x64;
          v28 = v49;
          *(_BYTE *)(v27 + 24) = 100 * (v26 / 0x64) / *v18;
          *(_QWORD *)v27 = *(unsigned int *)(v19 + v28 + 16);
          *(_QWORD *)(v27 + 8) = *(unsigned int *)(v19 + v28 + 20);
          *(_BYTE *)(v27 + 25) = 2;
          *(_WORD *)(v27 + 26) = *(_WORD *)(v19 + v28 + 12);
          v29 = *(_DWORD *)(v19 + v28 + 8);
          if ( !v29 )
          {
            v27 = v51;
            v29 = *(_DWORD *)(v19 + v49 + 4) * v23 / 0x64u;
          }
          ++v22;
          *(_DWORD *)(v27 + 20) = v29;
          v19 += 20LL;
        }
        while ( v22 < v21 );
        v11 = (char *)Pool2;
      }
      v30 = 1;
      if ( v9 > 1 )
      {
        while ( *(_BYTE *)(32LL * v30 + v7[7] + 24) )
        {
          if ( ++v30 >= v9 )
            goto LABEL_44;
        }
        v9 = v30;
      }
LABEL_44:
      v31 = (_BYTE *)v7[7];
      v32 = v9 - 1;
      *((_DWORD *)v7 + 16) = v9;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v7 + 18) = 0;
        *((_DWORD *)v7 + 17) = v9;
        v33 = (unsigned int)v32;
      }
      else
      {
        *((_DWORD *)v7 + 17) = v8;
        *((_DWORD *)v7 + 18) = v9 - v8;
        v33 = v8;
      }
      LOBYTE(v19) = v31[32 * v33 + 24];
      *(_DWORD *)(inited + 28) = (unsigned __int8)v19;
      *(_DWORD *)(inited + 32) = *(unsigned __int8 *)(32 * v32 + v7[7] + 24);
      v34 = *(_QWORD *)(a1 + 344);
      if ( v34 )
        *(_QWORD *)(inited + 368) = v34;
      v35 = *(_QWORD *)(inited + 544);
      *(_DWORD *)(v35 + 12) = 0;
      *(_DWORD *)(v35 + 8) = 100;
      if ( *(_QWORD *)(a1 + 336) )
      {
        v36 = PerfReadWrappingCounter;
        v31 = PerfReadActualMasterCount;
        if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
          v36 = PerfReadActualMasterCount;
        *(_QWORD *)v35 = v36;
        v37 = 1;
      }
      else
      {
        *(_QWORD *)v35 = PerfStatesInstantaneousFrequency;
        v37 = 0;
      }
      *(_BYTE *)(v35 + 16) = v37;
      *(_BYTE *)(v35 + 17) = v37;
      DisplayKernelPerfStates(inited, (__int64)v31, v19);
      v38 = *(_QWORD *)(inited + 552);
      v39 = *(_QWORD **)(inited + 560);
      ResetEnumerationContext((__int64 *)v48);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v48, &v45) )
      {
        v40 = v11 + 44;
        do
        {
          v41 = CalculatePercentageCap((__int64)v7, *(_DWORD *)(v45 + 464), *(_DWORD *)(v45 + 512));
          InitCommonPerfStateContext(v42, v40 - 44, v38, v41, v41 < 0x64 ? 2 : 0);
          *(_QWORD *)(a1 + 216) = v40 - 44;
          *(_QWORD *)(v40 + 12) = v7;
          *(_DWORD *)v40 = 100;
          if ( *(_QWORD *)(a1 + 336) )
          {
            *v39 = v40 + 20;
            *(_QWORD *)(v40 + 68) = *(_QWORD *)(a1 + 336);
          }
          else
          {
            *v39 = v40 - 44;
          }
          ++v39;
          v40 += 128;
          v38 += 32LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v48, &v45) );
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v44 == 254 || PerfDomain == 1) )
      {
        *(_WORD *)(inited + 11) = 257;
        *(_DWORD *)(inited + 48) = 1000;
      }
      if ( v50(inited) >= 0 )
      {
        ResetEnumerationContext((__int64 *)v48);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v48, &v45) )
        {
          *(_QWORD *)(v45 + 224) = v11;
          v11 += 128;
        }
        v7 = 0LL;
        P = 0LL;
        v11 = 0LL;
      }
      v10 = 0;
      goto LABEL_70;
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
LABEL_70:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
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
