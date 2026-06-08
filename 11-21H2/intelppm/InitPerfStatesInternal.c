/*
 * XREFs of InitPerfStatesInternal @ 0x1C003D774
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C0039490 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C003F250 (RegisterKernelPerfStates.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C00243BC (AllocateAndInitKernelPerfStatesRegistration.c)
 *     DisplayKernelPerfStates @ 0x1C00244C8 (DisplayKernelPerfStates.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C0029290 (InitCommonPerfStateContext.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 *     CalculatePercentageCap @ 0x1C003D314 (CalculatePercentageCap.c)
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
  __int64 v19; // rdx
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
  unsigned int v30; // ecx
  _BYTE *v31; // rdx
  unsigned __int8 v32; // cl
  __int64 v33; // rax
  __int64 v34; // rcx
  void *v35; // rax
  char v36; // al
  _QWORD *v37; // r15
  char *v38; // r14
  __int64 v39; // r13
  unsigned int v40; // eax
  __int64 v41; // r11
  int v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  _OWORD v47[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v49)(_QWORD *); // [rsp+C8h] [rbp+50h]
  __int64 v50; // [rsp+D0h] [rbp+58h]
  int PerfDomain; // [rsp+D8h] [rbp+60h]

  v49 = a2;
  v44 = 0LL;
  LODWORD(v48) = 0;
  v3 = 0;
  P = 0LL;
  LODWORD(v50) = 0;
  inited = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  v7 = 0LL;
  v8 = 0;
  memset(v47, 0, sizeof(v47));
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
    LODWORD(v50) = v3;
  }
  v9 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001DCF8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v47, &v48);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(PerfDomain << 7), 1919119952LL);
  v11 = (char *)Pool2;
  if ( Pool2
    && (P = (PVOID)ExAllocatePool2(64LL, 32 * v9, 1919119952LL)) != 0LL
    && (v7 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1919119952LL)) != 0LL
    && (inited = AllocateAndInitKernelPerfStatesRegistration(a1, PerfDomain, 1)) != 0LL )
  {
    v12 = v48;
    *((_DWORD *)inited + 6) = 100;
    inited[56] = PerfControlPTStates;
    *((_WORD *)inited + 2) = v12;
    *((_WORD *)inited + 3) = 257;
    *((_BYTE *)inited + 52) = 0;
    v43 = v12;
    if ( dword_1C001E5A8 == 1 || v12 == 252 || (v13 = v12 == 1, v14 = PerfControlPTStatesHidden, v13) )
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
      LODWORD(v48) = v5[12 * v8 - 9];
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
      v19 = v7[7];
      v20 = (_DWORD *)inited + 5;
      v11 = (char *)Pool2;
      v21 = *(_DWORD *)(32LL * (v8 - 1) + v19 + 16);
      goto LABEL_33;
    }
    v20 = (_DWORD *)inited + 5;
    *((_DWORD *)inited + 5) = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                (__int64)inited + 20) >= 0 )
    {
      v21 = *((_DWORD *)inited + 5);
      if ( v21 )
      {
        v19 = v7[7];
        LODWORD(v48) = 1000 * v21;
LABEL_33:
        v22 = v50;
        if ( (_DWORD)v50 )
        {
          v23 = 0;
          v24 = v48;
          v18 = 0LL;
          v7[1] = *(_QWORD *)(a1 + 304);
          v7[2] = *(_QWORD *)(a1 + 320);
          v7[6] = a1 + 480;
          do
          {
            v25 = *(_QWORD *)(a1 + 504);
            v50 = v7[7] + 32LL * (v8 + v23);
            v48 = v25;
            v26 = v21 * *(_DWORD *)(v18 + v25 + 4);
            v27 = v50;
            *(_DWORD *)(v50 + 16) = v26 / 0x64;
            v28 = v48;
            *(_BYTE *)(v27 + 24) = 100 * (v26 / 0x64) / *v20;
            *(_QWORD *)v27 = *(unsigned int *)(v18 + v28 + 16);
            *(_QWORD *)(v27 + 8) = *(unsigned int *)(v18 + v28 + 20);
            *(_BYTE *)(v27 + 25) = 2;
            *(_WORD *)(v27 + 26) = *(_WORD *)(v18 + v28 + 12);
            v29 = *(_DWORD *)(v18 + v28 + 8);
            if ( !v29 )
            {
              v27 = v50;
              v29 = v24 * *(_DWORD *)(v18 + v48 + 4) / 0x64u;
            }
            ++v23;
            *(_DWORD *)(v27 + 20) = v29;
            v18 += 20LL;
          }
          while ( v23 < v22 );
          v19 = v7[7];
          v11 = (char *)Pool2;
        }
        v30 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v30 + v19 + 24) )
          {
            if ( ++v30 >= v9 )
              goto LABEL_44;
          }
          v9 = v30;
        }
LABEL_44:
        v31 = (_BYTE *)v7[7];
        *((_DWORD *)v7 + 16) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v7 + 18) = 0;
          *((_DWORD *)v7 + 17) = v9;
          v32 = v31[32 * v9 - 8];
        }
        else
        {
          *((_DWORD *)v7 + 17) = v8;
          *((_DWORD *)v7 + 18) = v9 - v8;
          v32 = v31[32 * v8 + 24];
        }
        *((_DWORD *)inited + 7) = v32;
        *((_DWORD *)inited + 8) = *(unsigned __int8 *)(32LL * (v9 - 1) + v7[7] + 24);
        v33 = *(_QWORD *)(a1 + 344);
        if ( v33 )
          inited[46] = v33;
        v34 = inited[68];
        *(_DWORD *)(v34 + 12) = 0;
        *(_DWORD *)(v34 + 8) = 100;
        if ( *(_QWORD *)(a1 + 336) )
        {
          v35 = PerfReadWrappingCounter;
          v31 = PerfReadActualMasterCount;
          if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x27u) )
            v35 = PerfReadActualMasterCount;
          *(_QWORD *)v34 = v35;
          v36 = 1;
        }
        else
        {
          *(_QWORD *)v34 = PerfStatesInstantaneousFrequency;
          v36 = 0;
        }
        *(_BYTE *)(v34 + 16) = v36;
        *(_BYTE *)(v34 + 17) = v36;
        DisplayKernelPerfStates((__int64)inited, (__int64)v31, v18);
        v37 = (_QWORD *)inited[70];
        v48 = inited[69];
        ResetEnumerationContext((__int64 *)v47);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v47, &v44) )
        {
          v38 = v11 + 44;
          v39 = v48;
          do
          {
            v40 = CalculatePercentageCap((__int64)v7, *(_DWORD *)(v44 + 464), *(_DWORD *)(v44 + 512));
            InitCommonPerfStateContext(v41, v38 - 44, v39, v40, v40 < 0x64 ? 2 : 0);
            *(_QWORD *)(a1 + 216) = v38 - 44;
            *(_QWORD *)(v38 + 12) = v7;
            *(_DWORD *)v38 = 100;
            if ( *(_QWORD *)(a1 + 336) )
            {
              *v37 = v38 + 20;
              *(_QWORD *)(v38 + 68) = *(_QWORD *)(a1 + 336);
            }
            else
            {
              *v37 = v38 - 44;
            }
            ++v37;
            v38 += 128;
            v39 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v47, &v44) );
          v11 = (char *)Pool2;
        }
        if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v43 == 254 || PerfDomain == 1) )
        {
          *(_WORD *)((char *)inited + 11) = 257;
          *((_DWORD *)inited + 12) = 1000;
        }
        if ( v49(inited) >= 0 )
        {
          ResetEnumerationContext((__int64 *)v47);
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v47, &v44) )
          {
            *(_QWORD *)(v44 + 224) = v11;
            v11 += 128;
          }
          v7 = 0LL;
          P = 0LL;
          v11 = 0LL;
        }
        v10 = 0;
        goto LABEL_71;
      }
    }
    else
    {
      *v20 = 0;
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
LABEL_71:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
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
