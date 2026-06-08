/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x1C0005500
 * Callers:
 *     <none>
 * Callees:
 *     ComputeProcessorEnergyMsr @ 0x1C00017B0 (ComputeProcessorEnergyMsr.c)
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0006CC4 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C0006DD8 (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *result; // rax
  unsigned int SystemArgument1; // r9d
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 SystemArgument1_low; // r12
  unsigned int v13; // ebx
  unsigned int *p_ActiveThreadCount; // r13
  __int64 v15; // r12
  __int64 DpcData_high; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  __int128 *v21; // r13
  unsigned int *v22; // r15
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r8
  double v28; // xmm2_8
  double v29; // xmm1_8
  double v30; // xmm0_8
  double v31; // xmm1_8
  double v32; // xmm3_8
  double v33; // xmm0_8
  _LIST_ENTRY *Flink; // xmm2_8
  double v35; // xmm1_8
  int *v36; // rcx
  __int64 v37; // r10
  double *v38; // r9
  __int64 v39; // r13
  int v40; // eax
  unsigned __int64 v41; // r9
  double v42; // xmm1_8
  unsigned int *v43; // r10
  __int64 v44; // rbx
  double *v45; // r11
  signed __int64 v46; // rdx
  double v47; // xmm0_8
  unsigned __int64 v48; // rax
  int v49; // ecx
  double v50; // xmm1_8
  unsigned __int64 v51; // rax
  double v52; // xmm1_8
  __int64 *v53; // rdx
  __int64 v54; // r11
  double *v55; // r10
  double v56; // xmm0_8
  __int64 v57; // rax
  double v58; // xmm1_8
  __int64 v59; // rax
  double v60; // xmm0_8
  void **p_Reserved; // rax
  __int64 v62; // r9
  double *v63; // rcx
  double v64; // xmm0_8
  double v65; // xmm0_8
  double *v66; // rax
  __int64 v67; // r9
  double *v68; // rcx
  double v69; // xmm0_8
  double v70; // xmm0_8
  int v71; // ecx
  double v72; // xmm0_8
  double v73; // xmm0_8
  unsigned __int64 v74; // rax
  __int64 v76; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v77; // [rsp+50h] [rbp-B8h]
  __int64 v78; // [rsp+58h] [rbp-B0h]
  __int128 v79; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v80; // [rsp+70h] [rbp-98h]
  __int128 v81; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v82[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-48h]
  _QWORD v85[3]; // [rsp+C8h] [rbp-40h]
  double v86[4]; // [rsp+E0h] [rbp-28h]
  _BYTE v87[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v88[40]; // [rsp+120h] [rbp+18h] BYREF

  v5 = 0LL;
  v77 = a3;
  v78 = a2;
  v76 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  memset(v82, 0, sizeof(v82));
  if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) != 0 )
  {
    SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) > 4 )
      goto LABEL_90;
    v8 = 0;
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v9 = 0LL;
      do
      {
        v10 = __readmsr(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v9 + 4));
        *(_DWORD *)((char *)&v83 + v9) = v10;
        LODWORD(v10) = v10 - *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v9);
        *(_DWORD *)((char *)v85 + v9) = v10;
        if ( (unsigned int)v10 > 0x7FFFFFFF )
          goto LABEL_90;
        ++v8;
        v9 += 4LL;
      }
      while ( v8 < SystemArgument1 );
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v11 = 0LL;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v13 = *(_DWORD *)((char *)v85 + v11);
        ProcLibTracePackageEnergyCounterUpdate(
          *(unsigned int *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v11 + 4),
          v13);
        *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v11) = *(_DWORD *)((char *)&v83 + v11);
        *(_DWORD *)((char *)&v82[-1] + v11) = v13;
        v11 += 4LL;
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
      v15 = 0LL;
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      do
      {
        v17 = *p_ActiveThreadCount;
        v18 = __readmsr(v17);
        v19 = v18 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v15);
        ProcLibTracePackageEnergyCounterUpdate(v17, v19);
        *(_QWORD *)((char *)v82 + v15) = v19;
        *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v15) = v18;
        v15 += 8LL;
        ++p_ActiveThreadCount;
        --DpcData_high;
      }
      while ( DpcData_high );
    }
    DWORD2(v80) = 32;
    v84 = 0LL;
    *(_QWORD *)&v80 = 0LL;
    *(_QWORD *)&v79 = &qword_1C001DD38;
    *((_QWORD *)&v79 + 1) = &qword_1C001DD38;
    v83 = 0LL;
    ResetEnumerationContext((__int64 *)&v79);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)&v79, &v76) )
    {
      v20 = v76;
      v21 = &v83;
      v22 = (unsigned int *)&CounterId;
      v85[0] = 3LL;
      v23 = (unsigned __int64 *)(*(_QWORD *)(v76 + 368) + 24LL);
      do
      {
        v24 = *v23;
        v25 = *(v23 - 1);
        if ( v25 < *v23 )
          v26 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v25 - v24 + 1;
        else
          v26 = v25 - v24;
        ProcLibTraceEnergyCounterUpdate(v20, *v22, v26);
        *(_QWORD *)v21 += v26;
        ++v22;
        *v23 = v25;
        v21 = (__int128 *)((char *)v21 + 8);
        v23 += 3;
        --v85[0];
      }
      while ( v85[0] );
    }
    if ( (v27 = 1000000 * v77 / (qword_1C001E598 * (unsigned __int64)(unsigned int)dword_1C001E590)) == 0
      || !(_QWORD)v83
      || (v83 < 0
        ? (v28 = (double)(int)(BYTE8(v83) & 1 | (*((_QWORD *)&v83 + 1) >> 1))
               + (double)(int)(BYTE8(v83) & 1 | (*((_QWORD *)&v83 + 1) >> 1)))
        : (v28 = (double)SDWORD2(v83)),
          v78 < 0
        ? (v29 = (double)(int)(v78 & 1 | ((unsigned __int64)v78 >> 1))
               + (double)(int)(v78 & 1 | ((unsigned __int64)v78 >> 1)))
        : (v29 = (double)(int)v78),
          v77 < 0
        ? (v30 = (double)(int)(v77 & 1 | ((unsigned __int64)v77 >> 1))
               + (double)(int)(v77 & 1 | ((unsigned __int64)v77 >> 1)))
        : (v30 = (double)(int)v77),
          (v31 = v29 / v30, (__int64)v83 < 0)
        ? (v32 = (double)(int)(v83 & 1 | ((unsigned __int64)v83 >> 1))
               + (double)(int)(v83 & 1 | ((unsigned __int64)v83 >> 1)))
        : (v32 = (double)(int)v83),
          v86[0] = v28 / v32 * v31,
          !v84) )
    {
LABEL_90:
      result = a5;
      goto LABEL_91;
    }
    if ( v84 < 0 )
      v33 = (double)(int)(v84 & 1 | ((unsigned __int64)v84 >> 1))
          + (double)(int)(v84 & 1 | ((unsigned __int64)v84 >> 1));
    else
      v33 = (double)(int)v84;
    v86[2] = v31;
    v86[1] = v28 / v33 * v31;
    v86[3] = 1.0 - v31;
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
    {
      if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
      {
        Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
        if ( (v27 & 0x8000000000000000uLL) != 0LL )
          v35 = (double)(int)(v27 & 1 | (v27 >> 1)) + (double)(int)(v27 & 1 | (v27 >> 1));
        else
          v35 = (double)(int)v27;
        v36 = (int *)&v81;
        v37 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
        v38 = (double *)v87;
        v39 = 4LL;
        do
        {
          v40 = *v36++;
          *v38++ = (double)v40 * 1000000.0 * *(double *)&Flink / v35;
          --v37;
        }
        while ( v37 );
        goto LABEL_60;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      v41 = ((unsigned __int64)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
      if ( (v27 & 0x8000000000000000uLL) != 0LL )
        v42 = (double)(int)(v27 & 1 | (v27 >> 1)) + (double)(int)(v27 & 1 | (v27 >> 1));
      else
        v42 = (double)(int)v27;
      v43 = (unsigned int *)&v81;
      v44 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v45 = (double *)v87;
      v39 = 4LL;
      do
      {
        v46 = (unsigned __int64)*v43 << v41;
        if ( v46 < 0 )
        {
          v48 = ((unsigned __int64)*v43 << v41) & 1 | ((unsigned __int64)*v43 << v41 >> 1);
          v47 = (double)(int)v48 + (double)(int)v48;
        }
        else
        {
          v47 = (double)(int)v46;
        }
        ++v43;
        *v45++ = v47 / v42;
        --v44;
      }
      while ( v44 );
      goto LABEL_60;
    }
    v39 = 4LL;
LABEL_60:
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      v49 = qword_1C001E5A0 * v27;
      if ( ((qword_1C001E5A0 * v27) & 0x8000000000000000uLL) != 0LL )
      {
        v51 = v49 & 1 | ((qword_1C001E5A0 * v27) >> 1);
        v50 = (double)(int)v51 + (double)(int)v51;
      }
      else
      {
        v50 = (double)v49;
      }
      v52 = v50 / 1000000.0;
      v53 = (__int64 *)v82;
      v54 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v55 = (double *)v88;
      do
      {
        if ( *v53 < 0 )
        {
          v57 = *v53 & 1 | ((unsigned __int64)*v53 >> 1);
          v56 = (double)(int)v57 + (double)(int)v57;
        }
        else
        {
          v56 = (double)(int)*v53;
        }
        ++v53;
        *v55++ = v56 * 100.0 / v52;
        --v54;
      }
      while ( v54 );
    }
    v58 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
    v59 = 0LL;
    do
    {
      v60 = *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v59 * 8) * v86[v59];
      ++v59;
      v58 = v58 + v60;
      --v39;
    }
    while ( v39 );
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Reserved = &WPP_MAIN_CB.Reserved;
      v62 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v63 = (double *)v87;
      do
      {
        v64 = *(double *)p_Reserved++;
        v65 = v64 * *v63++;
        v58 = v58 + v65;
        --v62;
      }
      while ( v62 );
    }
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
    {
      v66 = (double *)&unk_1C001DBE0;
      v67 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v68 = (double *)v88;
      do
      {
        v69 = *v68++;
        v70 = v69 * *v66++;
        v58 = v58 + v70;
        --v67;
      }
      while ( v67 );
    }
    if ( v58 >= 0.0 && v58 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
    {
      if ( v58 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
        goto LABEL_83;
      v71 = 100;
      if ( a4 <= 0x64 )
        v71 = a4;
      if ( v58 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v71 / 0x64u) )
      {
LABEL_83:
        if ( (v27 & 0x8000000000000000uLL) != 0LL )
          v72 = (double)(int)(v27 & 1 | (v27 >> 1)) + (double)(int)(v27 & 1 | (v27 >> 1));
        else
          v72 = (double)(int)v27;
        v73 = v72 * v58;
        v74 = 0LL;
        if ( v73 >= 9.223372036854776e18 )
        {
          v73 = v73 - 9.223372036854776e18;
          if ( v73 < 9.223372036854776e18 )
            v74 = 0x8000000000000000uLL;
        }
        v5 = v74 + (unsigned int)(int)v73;
      }
    }
    goto LABEL_90;
  }
  ComputeProcessorEnergyMsr(0LL, 0LL, 0LL, 0LL, a5);
  result = a5;
  v5 = *a5;
LABEL_91:
  *result = v5;
  return result;
}
