/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0034BA0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001850 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002394 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     PepNotifyPerfConstraints @ 0x1C000B0B8 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C002DD08 (GetPerfDomain.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C0030824 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     InitCommonPerfStateContext @ 0x1C0030F70 (InitCommonPerfStateContext.c)
 *     PepTranslateLimitReason @ 0x1C003B074 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  char *Pool2; // r15
  int v6; // edi
  BOOL v7; // r13d
  int PerfDomain; // eax
  _BYTE *v9; // r14
  char *v10; // r12
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int16 v14; // r9
  int v15; // r12d
  __int64 inited; // rax
  int v17; // ecx
  bool v18; // al
  bool v19; // al
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // r12
  _QWORD *v26; // r14
  char *v27; // rdi
  __int64 v28; // rdx
  int v29; // r10d
  int v30; // esi
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  void *v35; // rax
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // ecx
  void *v40; // rax
  __int64 v41; // r10
  int v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h] BYREF
  __int64 v45; // [rsp+40h] [rbp-38h]
  _OWORD v46[3]; // [rsp+48h] [rbp-30h] BYREF
  int v48; // [rsp+C8h] [rbp+50h] BYREF
  int v49; // [rsp+D0h] [rbp+58h]
  int v50; // [rsp+D8h] [rbp+60h]

  v44 = 0LL;
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v48 = 0;
  memset(v46, 0, 32);
  v2(WdfDriverGlobals, qword_1C00124D8, 0LL);
  v3 = *(_QWORD *)(a1 + 1192);
  v4 = 0LL;
  Pool2 = 0LL;
  v45 = v3;
  v43 = *(_DWORD *)(v3 + 20);
  if ( v43 )
  {
    v49 = *(_DWORD *)(v3 + 52);
    v7 = v49 != -1;
    PerfDomain = GetPerfDomain(a1, (__int64)v46, &v48);
    v9 = *(_BYTE **)(a1 + 560);
    v50 = PerfDomain;
    if ( !v9 || !v9[48] )
      v9 = 0LL;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(72 * PerfDomain), 1919119952LL);
    if ( !Pool2 )
      goto LABEL_9;
    ResetEnumerationContext((__int64 *)v46);
    v10 = Pool2 + 40;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v44) )
    {
      v11 = v44;
      *((_QWORD *)v10 + 1) = *(_QWORD *)(v44 + 1120);
      *(_QWORD *)v10 = *(_QWORD *)(v11 + 1192);
      v6 = PepNotifyPerfConstraints(v11, (_DWORD *)v10 + 6, (_DWORD *)v10 + 4);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_66;
        v14 = 47;
        goto LABEL_19;
      }
      v12 = *((_DWORD *)v10 + 6);
      v13 = *(_DWORD *)(v3 + 8);
      if ( v12 > v13 || v12 < *(_DWORD *)(v3 + 16) )
      {
        v6 = -1073741811;
        goto LABEL_66;
      }
      *((_DWORD *)v10 + 7) = 100 * v12 / v13;
      v10 += 72;
    }
    v15 = v50;
    inited = AllocateAndInitKernelPerfStatesRegistration(a1, v50, v7 + 1);
    v4 = inited;
    if ( inited )
    {
      v17 = v48;
      *(_WORD *)(inited + 4) = v48;
      if ( *(_BYTE *)(v3 + 37) )
      {
        *(_QWORD *)(inited + 448) = PepPerfStateControlHandler;
        *(_QWORD *)(inited + 440) = PepPerfStateSelectionHandler;
        if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v17 == 254 || v15 == 1) && v9 && v9[58] )
        {
          *(_BYTE *)(inited + 11) = 1;
          v18 = !_bittest64((const signed __int64 *)(a1 + 280), 0x22u) || !v9[57];
          *(_BYTE *)(v4 + 12) = v18;
          *(_DWORD *)(v4 + 48) = 1000;
        }
      }
      else
      {
        *(_QWORD *)(inited + 448) = PepPerfControlHandler;
        *(_QWORD *)(inited + 440) = PepPerfSelectionHandler;
        *(_QWORD *)(inited + 376) = PepSetTimeWindow;
      }
      *(_BYTE *)(v4 + 6) = 0;
      v19 = v9 && v9[59];
      *(_BYTE *)(v4 + 7) = v19;
      *(_DWORD *)(v4 + 20) = v43;
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v3 + 24);
      v20 = *(_DWORD *)(v3 + 28);
      *(_DWORD *)(v4 + 28) = v20;
      v21 = v20;
      v22 = *(_DWORD *)(v3 + 32);
      if ( !v20 )
        v21 = 1;
      *(_DWORD *)(v4 + 28) = v21;
      v23 = v22;
      if ( !v22 )
        v23 = 1;
      *(_DWORD *)(v4 + 32) = v23;
      *(_QWORD *)(v4 + 56) = *(unsigned int *)(v3 + 16);
      *(_QWORD *)(v4 + 64) = *(unsigned int *)(v3 + 8);
      if ( *(_BYTE *)(v3 + 37) )
        v24 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 4LL);
      else
        v24 = (unsigned int)(*(_DWORD *)(v3 + 4) * v43 + (*(_DWORD *)(v3 + 8) >> 1)) / *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v4 + 44) = v24;
      if ( *(_BYTE *)(v3 + 36) )
        *(_BYTE *)(v4 + 9) = 1;
      *(_BYTE *)(v4 + 52) = *(_BYTE *)v3;
      if ( *(_BYTE *)v3 == 1 )
        *(_QWORD *)(v4 + 408) = AcpiCStateIdleCancel;
      v25 = *(_QWORD *)(v4 + 552);
      v26 = *(_QWORD **)(v4 + 560);
      v27 = Pool2;
      ResetEnumerationContext((__int64 *)v46);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v44) )
      {
        v30 = v49;
        do
        {
          v31 = PepTranslateLimitReason(*((unsigned int *)v27 + 14), v28);
          InitCommonPerfStateContext(v44, v27, v25, *((_DWORD *)v27 + 17), v31);
          *(_QWORD *)(a1 + 216) = v27;
          *v26++ = v27;
          if ( v30 != -1 )
            *v26++ = v27;
          v25 += 32LL;
          v27 += 72;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v44) );
        v3 = v45;
        v29 = 1;
      }
      v32 = *(unsigned int *)(v3 + 48);
      v33 = *(_QWORD *)(v4 + 544);
      *(_QWORD *)(v33 + 8) = 100LL;
      *(_BYTE *)(v33 + 16) = v29 & *(_BYTE *)(v3 + 8 * v32 + 56);
      v34 = *(_DWORD *)(v3 + 8 * v32 + 56) & 6;
      *(_BYTE *)(v33 + 17) = v34 == 2;
      *(_BYTE *)(v33 + 18) = v29 & (*(_DWORD *)(v3 + 8 * v32 + 56) >> 7);
      v35 = PepInstantaneousFrequencyRead;
      if ( v34 == 2 )
        v35 = PepDifferentialFrequencyRead;
      v36 = v49 == -1;
      *(_QWORD *)v33 = v35;
      *(_DWORD *)(v4 + 36) = v29;
      if ( !v36 )
      {
        v37 = *(unsigned int *)(v3 + 52);
        v38 = *(_QWORD *)(v4 + 544);
        *(_DWORD *)(v38 + 32) = 100;
        *(_DWORD *)(v38 + 36) = v29;
        *(_BYTE *)(v38 + 40) = v29 & *(_BYTE *)(v3 + 8 * v37 + 56);
        v39 = *(_DWORD *)(v3 + 8 * v37 + 56) & 6;
        *(_BYTE *)(v38 + 41) = v39 == 2;
        *(_BYTE *)(v38 + 42) = v29 & (*(_DWORD *)(v3 + 8 * v37 + 56) >> 7);
        v40 = PepInstantaneousPerfRead;
        if ( v39 == 2 )
          v40 = PepDifferentialPerfRead;
        *(_QWORD *)(v38 + 24) = v40;
        *(_DWORD *)(v4 + 36) += v29;
      }
      *(_BYTE *)(v4 + 15) = v29;
      v6 = ((__int64 (__fastcall *)(__int64))qword_1C00127C8)(v4);
      if ( v6 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v46);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v44) )
        {
          Pool2 = 0LL;
          do
            *(_QWORD *)(v44 + 1200) = v41;
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v46, &v44) );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 48;
LABEL_19:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v14,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
          v6);
      }
    }
    else
    {
LABEL_9:
      v6 = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x2Eu,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    v6 = -1073741823;
  }
LABEL_66:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  if ( v4 )
    ExFreePoolWithTag((PVOID)v4, (ULONG)1919119952);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v6;
}
