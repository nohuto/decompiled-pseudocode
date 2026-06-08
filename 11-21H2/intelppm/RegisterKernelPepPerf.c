/*
 * XREFs of RegisterKernelPepPerf @ 0x1C003ECB0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     PepNotifyPerfConstraints @ 0x1C000CF28 (PepNotifyPerfConstraints.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C00243BC (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C0029290 (InitCommonPerfStateContext.c)
 *     PepTranslateLimitReason @ 0x1C0043144 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v1; // r12
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  char *Pool2; // r15
  int v6; // edi
  BOOL v7; // r13d
  int PerfDomain; // eax
  _BYTE *v9; // r14
  int v10; // edi
  char *v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _QWORD *inited; // rax
  int v16; // ecx
  unsigned __int16 v17; // r9
  bool v18; // al
  bool v19; // al
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r12
  _QWORD *v24; // r14
  char *v25; // rdi
  __int64 v26; // rdx
  int v27; // r11d
  int v28; // esi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // ecx
  void *v33; // rax
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // ecx
  void *v38; // rax
  __int64 v39; // r11
  int v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h] BYREF
  __int64 v43; // [rsp+40h] [rbp-38h]
  _OWORD v44[3]; // [rsp+48h] [rbp-30h] BYREF
  int v46; // [rsp+C8h] [rbp+50h] BYREF
  int v47; // [rsp+D0h] [rbp+58h]
  int v48; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v42 = 0LL;
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v46 = 0;
  memset(v44, 0, 32);
  v2(WdfDriverGlobals, qword_1C001DCF8, 0LL);
  v3 = *(_QWORD *)(v1 + 1192);
  v4 = 0LL;
  Pool2 = 0LL;
  v43 = v3;
  v41 = *(_DWORD *)(v3 + 16);
  if ( !v41 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Eu,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    v6 = -1073741823;
    goto LABEL_65;
  }
  v47 = *(_DWORD *)(v3 + 52);
  v7 = v47 != -1;
  PerfDomain = GetPerfDomain(v1, (__int64)v44, &v46);
  v9 = *(_BYTE **)(v1 + 560);
  v10 = PerfDomain;
  v48 = PerfDomain;
  if ( !v9 || !v9[48] )
    v9 = 0LL;
  Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(72 * PerfDomain), 1919119952LL);
  if ( !Pool2 )
  {
LABEL_9:
    v6 = -1073741670;
    goto LABEL_65;
  }
  ResetEnumerationContext((__int64 *)v44);
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
  {
LABEL_17:
    inited = AllocateAndInitKernelPerfStatesRegistration(v1, v10, v7 + 1);
    v4 = inited;
    if ( !inited )
      goto LABEL_9;
    v16 = v46;
    *((_WORD *)inited + 2) = v46;
    if ( *(_BYTE *)(v3 + 33) )
    {
      inited[56] = PepPerfStateControlHandler;
      inited[55] = PepPerfStateSelectionHandler;
      if ( (*(_DWORD *)(v1 + 280) & 0x400000) != 0 && (v16 == 254 || v10 == 1) && v9 && v9[58] )
      {
        *((_BYTE *)inited + 11) = 1;
        v18 = !_bittest64((const signed __int64 *)(v1 + 280), 0x22u) || !v9[57];
        *((_BYTE *)v4 + 12) = v18;
        *((_DWORD *)v4 + 12) = 1000;
      }
    }
    else
    {
      inited[56] = PepPerfControlHandler;
      inited[55] = PepPerfSelectionHandler;
      inited[47] = PepSetTimeWindow;
    }
    *((_BYTE *)v4 + 6) = 0;
    v19 = v9 && v9[59];
    *((_BYTE *)v4 + 7) = v19;
    *((_BYTE *)v4 + 52) = 0;
    *((_DWORD *)v4 + 5) = v41;
    *((_DWORD *)v4 + 6) = *(_DWORD *)(v3 + 20);
    v20 = *(_DWORD *)(v3 + 24);
    *((_DWORD *)v4 + 7) = v20;
    v21 = *(_DWORD *)(v3 + 28);
    if ( !v20 )
      v20 = 1;
    *((_DWORD *)v4 + 7) = v20;
    if ( !v21 )
      v21 = 1;
    *((_DWORD *)v4 + 8) = v21;
    v4[7] = *(unsigned int *)(v3 + 12);
    v4[8] = *(unsigned int *)(v3 + 4);
    if ( *(_BYTE *)(v3 + 33) )
      v22 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 4LL);
    else
      v22 = (unsigned int)((*(_DWORD *)(v3 + 4) >> 1) + v41 * *(_DWORD *)v3) / *(_DWORD *)(v3 + 4);
    *((_DWORD *)v4 + 11) = v22;
    if ( *(_BYTE *)(v3 + 32) )
      *((_BYTE *)v4 + 9) = 1;
    v23 = v4[69];
    v24 = (_QWORD *)v4[70];
    v25 = Pool2;
    ResetEnumerationContext((__int64 *)v44);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
    {
      v28 = v47;
      do
      {
        v29 = PepTranslateLimitReason(*((unsigned int *)v25 + 14), v26);
        InitCommonPerfStateContext(v42, v25, v23, *((_DWORD *)v25 + 17), v29);
        *(_QWORD *)(a1 + 216) = v25;
        *v24++ = v25;
        if ( v28 != -1 )
          *v24++ = v25;
        v23 += 32LL;
        v25 += 72;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) );
      v3 = v43;
      v27 = 1;
    }
    v30 = *(unsigned int *)(v3 + 48);
    v31 = v4[68];
    *(_QWORD *)(v31 + 8) = 100LL;
    *(_BYTE *)(v31 + 16) = v27 & *(_BYTE *)(v3 + 8 * v30 + 56);
    v32 = *(_DWORD *)(v3 + 8 * v30 + 56) & 6;
    *(_BYTE *)(v31 + 17) = v32 == 2;
    *(_BYTE *)(v31 + 18) = v27 & (*(_DWORD *)(v3 + 8 * v30 + 56) >> 7);
    v33 = PepInstantaneousFrequencyRead;
    if ( v32 == 2 )
      v33 = PepDifferentialFrequencyRead;
    v34 = v47 == -1;
    *(_QWORD *)v31 = v33;
    *((_DWORD *)v4 + 9) = v27;
    if ( !v34 )
    {
      v35 = *(unsigned int *)(v3 + 52);
      v36 = v4[68];
      *(_DWORD *)(v36 + 32) = 100;
      *(_DWORD *)(v36 + 36) = v27;
      *(_BYTE *)(v36 + 40) = v27 & *(_BYTE *)(v3 + 8 * v35 + 56);
      v37 = *(_DWORD *)(v3 + 8 * v35 + 56) & 6;
      *(_BYTE *)(v36 + 41) = v37 == 2;
      *(_BYTE *)(v36 + 42) = v27 & (*(_DWORD *)(v3 + 8 * v35 + 56) >> 7);
      v38 = PepInstantaneousPerfRead;
      if ( v37 == 2 )
        v38 = PepDifferentialPerfRead;
      *(_QWORD *)(v36 + 24) = v38;
      *((_DWORD *)v4 + 9) += v27;
    }
    v6 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001DFD8)(v4);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
      v17 = 48;
LABEL_23:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v17,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
        v6);
      goto LABEL_65;
    }
    ResetEnumerationContext((__int64 *)v44);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
    {
      Pool2 = 0LL;
      do
        *(_QWORD *)(v42 + 1200) = v39;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) );
    }
  }
  else
  {
    v11 = Pool2 + 40;
    while ( 1 )
    {
      v12 = v42;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v42 + 1120);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1192);
      v6 = PepNotifyPerfConstraints(v12, (_DWORD *)v11 + 6, (_DWORD *)v11 + 4);
      if ( v6 < 0 )
        break;
      v13 = *((_DWORD *)v11 + 6);
      v14 = *(_DWORD *)(v3 + 4);
      if ( v13 > v14 || v13 < *(_DWORD *)(v3 + 12) )
      {
        v6 = -1073741811;
        goto LABEL_65;
      }
      *((_DWORD *)v11 + 7) = 100 * v13 / v14;
      v11 += 72;
      if ( (unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
      {
        v10 = v48;
        v1 = a1;
        goto LABEL_17;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 47;
      goto LABEL_23;
    }
  }
LABEL_65:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001DCF8);
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v6;
}
