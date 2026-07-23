/*
 * XREFs of PopExecutePowerAction @ 0x1409899F4
 * Callers:
 *     PopThermalStateTransitionWorker @ 0x140865420 (PopThermalStateTransitionWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885A80 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopStartStopTtmSxTranstion @ 0x14098AB98 (PopStartStopTtmSxTranstion.c)
 *     NtInitiatePowerAction @ 0x14098B560 (NtInitiatePowerAction.c)
 *     PdcPoSetPowerAction @ 0x140997D70 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14099BF50 (PopIdleAoAcDozeToS4.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PopSetNotificationWork @ 0x14032CDC0 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x14032CDF4 (PopGetPolicyWorker.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopSetPowerActionState @ 0x14058F9B4 (PopSetPowerActionState.c)
 *     PopDiagTraceShutdownAction @ 0x140594F78 (PopDiagTraceShutdownAction.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopVerifyPowerActionPolicy @ 0x140824A78 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140824BAC (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x140865298 (PopResetActionDefaults.c)
 *     PopCompareActions @ 0x14098992C (PopCompareActions.c)
 *     PopCompleteAction @ 0x140989960 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x14098A5DC (PopPromoteActionFlag.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098EE1C (PopDiagTraceExecutePowerAction.c)
 */

__int64 __fastcall PopExecutePowerAction(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  int v6; // esi
  int v7; // eax
  unsigned int v10; // ebx
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  char v17; // r15
  unsigned int v18; // eax
  bool v19; // cf
  int v20; // r15d
  int v21; // r9d
  int v22; // r9d
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // eax
  int v29; // r9d
  char v30; // r15
  char v31; // r15
  int v32; // eax
  bool v33; // zf
  int v34; // ecx
  unsigned int v35; // eax
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v39; // [rsp+60h] [rbp-41h] BYREF
  int v40; // [rsp+68h] [rbp-39h] BYREF
  __int64 v41; // [rsp+70h] [rbp-31h] BYREF
  int v42; // [rsp+78h] [rbp-29h]
  unsigned int *v43; // [rsp+80h] [rbp-21h] BYREF
  int v44; // [rsp+88h] [rbp-19h]
  int v45; // [rsp+8Ch] [rbp-15h]
  unsigned int **v46; // [rsp+90h] [rbp-11h] BYREF
  int v47; // [rsp+98h] [rbp-9h]
  int v48; // [rsp+9Ch] [rbp-5h]

  v5 = 0;
  v6 = a4;
  v7 = a3[2];
  v41 = *(_QWORD *)a3;
  v10 = v41;
  v40 = a4;
  v12 = 1;
  v42 = v7;
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v48 = 0;
    v45 = a4;
    v43 = a1;
    v46 = &v43;
    v44 = v41;
    v47 = 16;
    EtwTraceKernelEvent((int)&v46, 1, 0x80008000, 4642, 4200450);
  }
  if ( (a1[1] & 0x80u) != 0 )
  {
    PopVerifySystemPowerState(&v40, a5);
    BYTE2(v39) = PopVerifyPowerActionPolicy((int *)&v41);
    if ( BYTE2(v39) )
    {
      PopCompleteAction((__int64)a1, -1073741637);
      v10 = v41;
      v6 = v40;
LABEL_71:
      v12 = BYTE2(v39);
      return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v41), v42, v12, v39);
    }
    v10 = v41;
    if ( (unsigned int)(v41 - 2) <= 1 )
      HIDWORD(v41) |= 0x80000000;
    v16 = a1[1];
    v17 = 0;
    BYTE1(v39) = 0;
    if ( (v16 & 2) != 0 )
      goto LABEL_59;
    a1[1] = v16 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      v18 = *a1;
      if ( *a1 == 2 )
      {
        v10 = 0;
        LODWORD(v41) = 0;
        v19 = (v41 & 0x1000000000LL) != 0;
LABEL_18:
        v5 = v19 ? 16 : 32;
        goto LABEL_19;
      }
      if ( !v18 )
      {
        v10 = 0;
        LODWORD(v41) = 0;
        v5 = byte_140C3D9A4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_19;
      }
      if ( v18 == 15 )
      {
        v19 = (v41 & 0x200000000000000LL) != 0;
        goto LABEL_18;
      }
    }
LABEL_19:
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v5, *a1);
    if ( !byte_140C3CD81 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v6 = v40;
      LOBYTE(v39) = 0;
      v20 = HIDWORD(v41) | 0x10000000;
      if ( v10 != 7 )
        v20 = HIDWORD(v41);
      if ( v10 == 3 )
        v6 = 5;
      if ( v10 == 4 )
        v6 = 6;
      v40 = v6;
      if ( (int)PopCompareActions(v10, qword_140C3CD84) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v39, 1, v20, 0, 1);
        PopPromoteActionFlag((unsigned int)&v39, v22 + 1, v20, v22, 2);
        PopPromoteActionFlag((unsigned int)&v39, v23 + 4, v20, v23, 0x10000000);
        if ( v10 == 2 )
        {
          if ( v6 < *((_DWORD *)PopPolicy + 17) )
            v6 = *((_DWORD *)PopPolicy + 17);
          v40 = v6;
        }
        if ( v6 > SHIDWORD(qword_140C3CD84) )
        {
          LOBYTE(v39) = v39 | 4;
          HIDWORD(qword_140C3CD84) = v6;
        }
      }
      LOBYTE(v21) = 1;
      PopPromoteActionFlag((unsigned int)&v39, 1, v20, v21, 4);
      PopPromoteActionFlag((unsigned int)&v39, 5, v20, v24, 0x80000000);
      PopPromoteActionFlag((unsigned int)&v39, 0, v20, v25, 0x40000000);
      PopPromoteActionFlag((unsigned int)&v39, 0, v20, v26, 8);
      PopPromoteActionFlag((unsigned int)&v39, 0, v20, v27, 32);
      if ( (int)PopCompareActions(v10, qword_140C3CD84) <= 0 )
      {
        v31 = v39;
      }
      else
      {
        v28 = PopCompareActions(v10, 3);
        v30 = v39;
        if ( v28 >= 0 )
          v30 = v39 | 2;
        if ( !(unsigned int)PopCompareActions(v29, 8) )
          v30 |= 2u;
        LODWORD(qword_140C3CD84) = v10;
        v31 = v30 | 5;
        v32 = *a1;
        v15 = v10;
        dword_140C3CD98 = 0;
        dword_140C3CD94 = v32;
        v33 = *a1 == 0;
        LOBYTE(v39) = v31;
        if ( v33 )
          dword_140C3CD98 = a1[4];
      }
      if ( (_DWORD)v15 == 3 )
        LODWORD(qword_140C3CD84) = 2;
      if ( v31 )
      {
        if ( TtmIsEnabled() )
          PopTtmIsSxTransitionInProgress = 1;
        BYTE1(v39) = 1;
        if ( (unsigned __int8)byte_140C3CD81 < 2u )
        {
          PopSetPowerActionState(1);
          dword_140C3CD90 = 0;
          v34 = 2;
        }
        else
        {
          LOBYTE(PopAction) = v31 | PopAction;
          v34 = 1;
        }
        PopGetPolicyWorker(v34);
      }
      v17 = BYTE1(v39);
LABEL_54:
      v35 = a1[1];
      if ( (v35 & 1) != 0 )
        goto LABEL_65;
      a1[1] = v35 | 1;
      if ( v5 == 32 )
      {
        if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
          a2 |= 0x10u;
      }
      else
      {
        if ( v5 != 16 )
        {
LABEL_64:
          PopSetNotificationWork(a2, v13, v14, v15);
LABEL_65:
          if ( (a1[1] & 0x20) != 0 )
          {
            if ( v17 )
            {
              v36 = (_QWORD *)qword_140C3D688;
              v37 = (_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
              if ( *(__int64 **)qword_140C3D688 != &PopActionWaiters )
                __fastfail(3u);
              *v37 = &PopActionWaiters;
              v37[1] = v36;
              *v36 = v37;
              qword_140C3D688 = (__int64)v37;
            }
            else
            {
              PopCompleteAction((__int64)a1, 0);
            }
          }
          goto LABEL_71;
        }
        if ( !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
          a2 |= 0x10u;
      }
      v10 = v41;
      v6 = v40;
      goto LABEL_64;
    }
LABEL_59:
    v6 = v40;
    goto LABEL_54;
  }
  PopCompleteAction((__int64)a1, 0);
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v41), v42, v12, v39);
}
