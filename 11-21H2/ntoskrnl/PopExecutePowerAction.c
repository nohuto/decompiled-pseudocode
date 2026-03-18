/*
 * XREFs of PopExecutePowerAction @ 0x1407FEC6C
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140752DA8 (PopExecuteSystemIdleAction.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408091B0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopThermalStateTransitionWorker @ 0x1408647A0 (PopThermalStateTransitionWorker.c)
 *     PopStartStopTtmSxTranstion @ 0x1409901F0 (PopStartStopTtmSxTranstion.c)
 *     PdcPoSetPowerAction @ 0x140996D60 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14099CEC0 (PopIdleAoAcDozeToS4.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x1405D3540 (PopDiagTraceShutdownAction.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopCompleteAction @ 0x1407FD778 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x1407FF024 (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1407FF074 (PopCompareActions.c)
 *     PopDiagTraceExecutePowerAction @ 0x1407FF0A8 (PopDiagTraceExecutePowerAction.c)
 *     PopVerifyPowerActionPolicy @ 0x140819A74 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140819BD0 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x14081CEF8 (PopResetActionDefaults.c)
 */

__int64 __fastcall PopExecutePowerAction(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  int v6; // edi
  int v7; // eax
  unsigned int v10; // ebx
  char v12; // r15
  unsigned int v13; // eax
  char v14; // r15
  int v15; // edx
  int v16; // r9d
  int v17; // r11d
  int v18; // edx
  int v19; // r9d
  int v20; // r11d
  int v21; // r9d
  int v22; // r11d
  char v23; // dl
  int v24; // r9d
  int v25; // r11d
  int v26; // r9d
  int v27; // r11d
  int v28; // edx
  int v29; // r9d
  int v30; // r11d
  int v31; // edx
  int v32; // r9d
  int v33; // r11d
  unsigned int v34; // r9d
  int v35; // eax
  unsigned int v36; // r9d
  char v37; // r15
  char v38; // r15
  int v39; // eax
  bool v40; // zf
  int v41; // ecx
  unsigned int v42; // eax
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  unsigned int v46; // eax
  __int64 v47; // [rsp+60h] [rbp-41h] BYREF
  int v48; // [rsp+68h] [rbp-39h] BYREF
  __int64 v49; // [rsp+70h] [rbp-31h] BYREF
  int v50; // [rsp+78h] [rbp-29h]
  unsigned int *v51; // [rsp+80h] [rbp-21h] BYREF
  int v52; // [rsp+88h] [rbp-19h]
  int v53; // [rsp+8Ch] [rbp-15h]
  unsigned int **v54; // [rsp+90h] [rbp-11h] BYREF
  int v55; // [rsp+98h] [rbp-9h]
  int v56; // [rsp+9Ch] [rbp-5h]

  v5 = 0;
  v6 = a4;
  v7 = a3[2];
  v49 = *(_QWORD *)a3;
  v10 = v49;
  v48 = a4;
  v12 = 1;
  v50 = v7;
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v56 = 0;
    v53 = a4;
    v54 = &v51;
    v52 = v49;
    v51 = a1;
    v55 = 16;
    EtwTraceKernelEvent((__int64)&v54, 1u, 0x80008000, 0x1222u, 0x401802u);
  }
  if ( (a1[1] & 0x80u) == 0 )
  {
    PopCompleteAction((__int64)a1, 0);
    return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v49), v50, v12, v47);
  }
  PopVerifySystemPowerState(&v48, a5);
  BYTE2(v47) = PopVerifyPowerActionPolicy(&v49);
  if ( !BYTE2(v47) )
  {
    v10 = v49;
    if ( (unsigned int)(v49 - 2) <= 1 )
      HIDWORD(v49) |= 0x80000000;
    v13 = a1[1];
    v14 = 0;
    BYTE1(v47) = 0;
    if ( (v13 & 2) != 0 )
      goto LABEL_65;
    v15 = 6;
    a1[1] = v13 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      v46 = *a1;
      if ( *a1 == 2 )
      {
        v10 = 0;
        LODWORD(v49) = 0;
        v5 = (v49 & 0x1000000000LL) != 0 ? 16 : 32;
        goto LABEL_10;
      }
      if ( !v46 )
      {
        v10 = 0;
        LODWORD(v49) = 0;
        v5 = byte_140C23304 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
LABEL_63:
        v15 = 6;
LABEL_10:
        if ( !byte_140C227C1 )
          PopResetActionDefaults();
        if ( v10 )
        {
          v6 = v48;
          LOBYTE(v47) = 0;
          if ( v10 == 3 )
            v6 = 5;
          if ( v10 == 4 )
            v6 = v15;
          v48 = v6;
          if ( (int)PopCompareActions(v10, (unsigned int)qword_140C227C4) >= 0 )
          {
            PopPromoteActionFlag((unsigned int)&v47, 1, v17, 0, 1);
            PopPromoteActionFlag((unsigned int)&v47, v18, v20, v19, 2);
            PopPromoteActionFlag((unsigned int)&v47, 4, v22, v21, 0x10000000);
            if ( v10 == 2 )
            {
              if ( v6 < *((_DWORD *)PopPolicy + 17) )
                v6 = *((_DWORD *)PopPolicy + 17);
              v48 = v6;
            }
            if ( v6 > SHIDWORD(qword_140C227C4) )
            {
              LOBYTE(v47) = v23 | v47;
              HIDWORD(qword_140C227C4) = v6;
            }
          }
          LOBYTE(v16) = 1;
          PopPromoteActionFlag((unsigned int)&v47, 1, v17, v16, 4);
          PopPromoteActionFlag((unsigned int)&v47, 5, v25, v24, 0x80000000);
          PopPromoteActionFlag((unsigned int)&v47, 0, v27, v26, 0x40000000);
          PopPromoteActionFlag((unsigned int)&v47, v28, v30, v29, 8);
          PopPromoteActionFlag((unsigned int)&v47, v31, v33, v32, 32);
          if ( (int)PopCompareActions(v10, (unsigned int)qword_140C227C4) <= 0 )
          {
            v38 = v47;
          }
          else
          {
            v35 = PopCompareActions(v10, 3LL);
            v37 = v47;
            if ( v35 >= 0 )
              v37 = v47 | 2;
            if ( !(unsigned int)PopCompareActions(v36, 8LL) )
              v37 |= 2u;
            LODWORD(qword_140C227C4) = v10;
            v38 = v37 | 5;
            v39 = *a1;
            v34 = v10;
            dword_140C227D8 = 0;
            dword_140C227D4 = v39;
            v40 = *a1 == 0;
            LOBYTE(v47) = v38;
            if ( v40 )
              dword_140C227D8 = a1[4];
          }
          if ( v34 == 3 )
            LODWORD(qword_140C227C4) = 2;
          if ( v38 )
          {
            if ( TtmIsEnabled() )
              PopTtmIsSxTransitionInProgress = 1;
            BYTE1(v47) = 1;
            if ( (unsigned __int8)byte_140C227C1 >= 2u )
            {
              LOBYTE(PopAction) = v38 | PopAction;
              v41 = 1;
            }
            else
            {
              PopSetPowerActionState(1);
              dword_140C227D0 = 0;
              v41 = 2;
            }
            PopGetPolicyWorker(v41);
          }
          v14 = BYTE1(v47);
LABEL_40:
          v42 = a1[1];
          if ( (v42 & 1) != 0 )
            goto LABEL_44;
          a1[1] = v42 | 1;
          if ( v5 == 32 )
          {
            if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
              a2 |= 0x10u;
          }
          else
          {
            if ( v5 != 16 )
            {
LABEL_43:
              PopSetNotificationWork(a2);
              v42 = a1[1];
LABEL_44:
              if ( (v42 & 0x20) != 0 )
              {
                if ( v14 )
                {
                  v43 = (_QWORD *)qword_140C23138;
                  v44 = (_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
                  if ( *(__int64 **)qword_140C23138 != &PopActionWaiters )
                    __fastfail(3u);
                  *v44 = &PopActionWaiters;
                  v44[1] = v43;
                  *v43 = v44;
                  qword_140C23138 = (__int64)v44;
                }
                else
                {
                  PopCompleteAction((__int64)a1, 0);
                }
              }
              goto LABEL_48;
            }
            if ( !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
              a2 |= 0x10u;
          }
          v10 = v49;
          v6 = v48;
          goto LABEL_43;
        }
LABEL_65:
        v6 = v48;
        goto LABEL_40;
      }
      if ( v46 == 15 )
      {
        if ( (v49 & 0x200000000000000LL) != 0 )
        {
          v5 = 16;
LABEL_62:
          PopDiagTraceShutdownAction(v10, v5, *a1);
          goto LABEL_63;
        }
        v5 = 32;
      }
    }
    if ( v10 - 4 > 2 )
      goto LABEL_10;
    goto LABEL_62;
  }
  PopCompleteAction((__int64)a1, -1073741637);
  v10 = v49;
  v6 = v48;
LABEL_48:
  v12 = BYTE2(v47);
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v10, HIDWORD(v49), v50, v12, v47);
}
