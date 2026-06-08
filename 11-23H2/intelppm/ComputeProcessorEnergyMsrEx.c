/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x1C0006EE0
 * Callers:
 *     <none>
 * Callees:
 *     ComputeProcessorEnergyMsr @ 0x1C00019F0 (ComputeProcessorEnergyMsr.c)
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0008560 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1C0008674 (ProcLibTracePackageEnergyCounterUpdate.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  unsigned int SystemArgument1; // r9d
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 SystemArgument1_low; // r14
  unsigned int v14; // ebx
  unsigned int *p_ActiveThreadCount; // r12
  __int64 v16; // r14
  __int64 DpcData_high; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // r11
  __int64 v22; // r15
  __int128 *v23; // r12
  unsigned int *v24; // r13
  unsigned __int64 *v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r8
  double v30; // xmm2_8
  double v31; // xmm1_8
  double v32; // xmm0_8
  double v33; // xmm1_8
  double v34; // xmm3_8
  double v35; // xmm0_8
  _LIST_ENTRY *Flink; // xmm2_8
  double v37; // xmm1_8
  int *v38; // rcx
  __int64 v39; // r10
  double *v40; // r9
  int v41; // eax
  unsigned __int64 v42; // r9
  double v43; // xmm1_8
  unsigned int *v44; // r10
  __int64 v45; // rbx
  double *v46; // r11
  signed __int64 v47; // rdx
  double v48; // xmm0_8
  unsigned __int64 v49; // rax
  int v50; // ecx
  double v51; // xmm1_8
  unsigned __int64 v52; // rax
  double v53; // xmm1_8
  __int64 *v54; // rdx
  __int64 v55; // r11
  double *v56; // r10
  double v57; // xmm0_8
  __int64 v58; // rax
  double v59; // xmm1_8
  __int64 v60; // rax
  double v61; // xmm0_8
  void **p_Reserved; // rax
  __int64 v63; // r9
  double *v64; // rcx
  double v65; // xmm0_8
  double v66; // xmm0_8
  double *v67; // rax
  __int64 v68; // r9
  double *v69; // rcx
  double v70; // xmm0_8
  double v71; // xmm0_8
  int v72; // ecx
  double v73; // xmm0_8
  double v74; // xmm0_8
  unsigned __int64 v75; // rax
  unsigned __int64 *result; // rax
  __int64 v78; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v80; // [rsp+50h] [rbp-B8h]
  __int128 v81; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v82; // [rsp+68h] [rbp-A0h]
  __int64 v83; // [rsp+78h] [rbp-90h]
  __int128 v84; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v85[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v86; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-48h]
  _QWORD v88[3]; // [rsp+C8h] [rbp-40h]
  double v89[4]; // [rsp+E0h] [rbp-28h]
  _BYTE v90[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v91[40]; // [rsp+120h] [rbp+18h] BYREF

  v80 = a5;
  v5 = a3;
  v6 = 0LL;
  v79 = a3;
  v7 = a2;
  v83 = a2;
  v78 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v84 = 0LL;
  memset(v85, 0, sizeof(v85));
  if ( !a1 )
  {
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) != 0 )
    {
      SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
      v9 = 4LL;
      if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) <= 4 )
      {
        v10 = 0;
        if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
        {
          a3 = 0LL;
          while ( 1 )
          {
            v11 = __readmsr(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + a3 + 4));
            *(_DWORD *)((char *)&v86 + a3) = v11;
            LODWORD(v11) = v11 - *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + a3);
            *(_DWORD *)((char *)v88 + a3) = v11;
            if ( (unsigned int)v11 > 0x7FFFFFFF )
              break;
            ++v10;
            a3 += 4LL;
            if ( v10 >= SystemArgument1 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
          {
            v12 = 0LL;
            SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
            do
            {
              v14 = *(_DWORD *)((char *)v88 + v12);
              ProcLibTracePackageEnergyCounterUpdate(
                *(unsigned int *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v12 + 4),
                v14,
                a3);
              *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v12) = *(_DWORD *)((char *)&v86 + v12);
              *(_DWORD *)((char *)&v85[-1] + v12) = v14;
              v12 += 4LL;
              --SystemArgument1_low;
            }
            while ( SystemArgument1_low );
            v9 = 4LL;
          }
          if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
          {
            p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
            v16 = 0LL;
            DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
            do
            {
              v18 = *p_ActiveThreadCount;
              v19 = __readmsr(v18);
              v20 = v19 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16);
              ProcLibTracePackageEnergyCounterUpdate(v18, v20, a3);
              *(_QWORD *)((char *)v85 + v16) = v20;
              *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16) = v19;
              v16 += 8LL;
              v9 = 4LL;
              ++p_ActiveThreadCount;
              --DpcData_high;
            }
            while ( DpcData_high );
            v5 = v79;
          }
          DWORD2(v82) = 32;
          *(_QWORD *)&v81 = &qword_1C001F058;
          *((_QWORD *)&v81 + 1) = &qword_1C001F058;
          v87 = 0LL;
          v86 = 0LL;
          *(_QWORD *)&v82 = 0LL;
          ResetEnumerationContext((__int64 *)&v81);
          if ( !(unsigned int)EnumerateNextDevice((__int64 *)&v81, &v78) )
          {
            do
            {
              v22 = v78;
              v23 = &v86;
              v24 = (unsigned int *)&CounterId;
              v88[0] = 3LL;
              v25 = (unsigned __int64 *)(*(_QWORD *)(v78 + 368) + 24LL);
              do
              {
                v26 = *v25;
                v27 = *(v25 - 1);
                if ( v27 < *v25 )
                  v28 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v27 - v26 + 1;
                else
                  v28 = v27 - v26;
                ProcLibTraceEnergyCounterUpdate(v22, *v24, v28);
                *(_QWORD *)v23 += v28;
                ++v24;
                *v25 = v27;
                v23 = (__int128 *)((char *)v23 + 8);
                v25 += 3;
                --v88[0];
              }
              while ( v88[0] );
            }
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)&v81, &v78) );
            v21 = v87;
            v9 = 4LL;
            v5 = v79;
            v7 = v83;
          }
          v29 = 1000000 * v5 / (qword_1C001F8E8 * (unsigned __int64)(unsigned int)dword_1C001F8DC);
          if ( v29 && (_QWORD)v86 )
          {
            v30 = v86 < 0
                ? (double)(int)(BYTE8(v86) & 1 | (*((_QWORD *)&v86 + 1) >> 1))
                + (double)(int)(BYTE8(v86) & 1 | (*((_QWORD *)&v86 + 1) >> 1))
                : (double)SDWORD2(v86);
            v31 = v7 < 0
                ? (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
                + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
                : (double)(int)v7;
            v32 = v5 < 0
                ? (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
                + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
                : (double)(int)v5;
            v33 = v31 / v32;
            v34 = (__int64)v86 < 0
                ? (double)(int)(v86 & 1 | ((unsigned __int64)v86 >> 1))
                + (double)(int)(v86 & 1 | ((unsigned __int64)v86 >> 1))
                : (double)(int)v86;
            v89[0] = v30 / v34 * v33;
            if ( v21 )
            {
              if ( v21 < 0 )
                v35 = (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1))
                    + (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1));
              else
                v35 = (double)(int)v21;
              v89[2] = v33;
              v89[1] = v30 / v35 * v33;
              v89[3] = 1.0 - v33;
              if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
              {
                if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
                {
                  Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
                  if ( (v29 & 0x8000000000000000uLL) != 0LL )
                    v37 = (double)(int)(v29 & 1 | (v29 >> 1)) + (double)(int)(v29 & 1 | (v29 >> 1));
                  else
                    v37 = (double)(int)v29;
                  v38 = (int *)&v84;
                  v39 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                  v40 = (double *)v90;
                  do
                  {
                    v41 = *v38++;
                    *v40++ = (double)v41 * 1000000.0 * *(double *)&Flink / v37;
                    --v39;
                  }
                  while ( v39 );
                }
              }
              else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
              {
                v42 = ((unsigned __int64)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
                if ( (v29 & 0x8000000000000000uLL) != 0LL )
                  v43 = (double)(int)(v29 & 1 | (v29 >> 1)) + (double)(int)(v29 & 1 | (v29 >> 1));
                else
                  v43 = (double)(int)v29;
                v44 = (unsigned int *)&v84;
                v45 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                v46 = (double *)v90;
                do
                {
                  v47 = (unsigned __int64)*v44 << v42;
                  if ( v47 < 0 )
                  {
                    v49 = ((unsigned __int64)*v44 << v42) & 1 | ((unsigned __int64)*v44 << v42 >> 1);
                    v48 = (double)(int)v49 + (double)(int)v49;
                  }
                  else
                  {
                    v48 = (double)(int)v47;
                  }
                  ++v44;
                  *v46++ = v48 / v43;
                  --v45;
                }
                while ( v45 );
              }
              if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
              {
                v50 = qword_1C001F8F0 * v29;
                if ( ((qword_1C001F8F0 * v29) & 0x8000000000000000uLL) != 0LL )
                {
                  v52 = v50 & 1 | ((qword_1C001F8F0 * v29) >> 1);
                  v51 = (double)(int)v52 + (double)(int)v52;
                }
                else
                {
                  v51 = (double)v50;
                }
                v53 = v51 / 1000000.0;
                v54 = (__int64 *)v85;
                v55 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                v56 = (double *)v91;
                do
                {
                  if ( *v54 < 0 )
                  {
                    v58 = *v54 & 1 | ((unsigned __int64)*v54 >> 1);
                    v57 = (double)(int)v58 + (double)(int)v58;
                  }
                  else
                  {
                    v57 = (double)(int)*v54;
                  }
                  ++v54;
                  *v56++ = v57 * 100.0 / v53;
                  --v55;
                }
                while ( v55 );
              }
              v59 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
              v60 = 0LL;
              do
              {
                v61 = *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v60 * 8) * v89[v60];
                ++v60;
                v59 = v59 + v61;
                --v9;
              }
              while ( v9 );
              if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
              {
                p_Reserved = &WPP_MAIN_CB.Reserved;
                v63 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                v64 = (double *)v90;
                do
                {
                  v65 = *v64++;
                  v66 = v65 * *(double *)p_Reserved++;
                  v59 = v59 + v66;
                  --v63;
                }
                while ( v63 );
              }
              if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
              {
                v67 = (double *)&unk_1C001EF00;
                v68 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                v69 = (double *)v91;
                do
                {
                  v70 = *v67++;
                  v71 = v70 * *v69++;
                  v59 = v59 + v71;
                  --v68;
                }
                while ( v68 );
              }
              if ( v59 >= 0.0 && v59 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
              {
                if ( v59 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
                  goto LABEL_84;
                v72 = 100;
                if ( a4 <= 0x64 )
                  v72 = a4;
                if ( v59 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v72 / 0x64u) )
                {
LABEL_84:
                  if ( (v29 & 0x8000000000000000uLL) != 0LL )
                    v73 = (double)(int)(v29 & 1 | (v29 >> 1)) + (double)(int)(v29 & 1 | (v29 >> 1));
                  else
                    v73 = (double)(int)v29;
                  v74 = v73 * v59;
                  v75 = 0LL;
                  if ( v74 >= 9.223372036854776e18 )
                  {
                    v74 = v74 - 9.223372036854776e18;
                    if ( v74 < 9.223372036854776e18 )
                      v75 = 0x8000000000000000uLL;
                  }
                  v6 = v75 + (unsigned int)(int)v74;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      ComputeProcessorEnergyMsr(0, 0LL, 0LL, 0LL, v80);
      v6 = *v80;
    }
  }
  result = v80;
  *v80 = v6;
  return result;
}
