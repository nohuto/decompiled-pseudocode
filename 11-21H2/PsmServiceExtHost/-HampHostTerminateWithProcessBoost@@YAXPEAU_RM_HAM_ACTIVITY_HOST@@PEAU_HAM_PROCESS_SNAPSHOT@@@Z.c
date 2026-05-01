/*
 * XREFs of ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000CEAC
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800171D0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18003E75C (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18004CF30 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTempl.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall HampHostTerminateWithProcessBoost(HANDLE *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  NTSTATUS v3; // r12d
  int v4; // r13d
  unsigned __int64 v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // r15d
  __int64 *v11; // r12
  DWORD v12; // r14d
  _QWORD *Value; // rbx
  int v14; // r14d
  HANDLE v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  DWORD CurrentThreadId; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // esi
  __int64 v26; // rcx
  unsigned __int64 v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v30[24]; // [rsp+58h] [rbp-11h] BYREF
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+D0h] [rbp+67h]
  unsigned __int64 v34; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+E8h] [rbp+7Fh]

  v3 = 1;
  v32 = 1;
  v4 = -1;
  RtlQueryUnbiasedInterruptTime(&v34);
  v5 = v34 / 0x2710;
  v35 = v34 / 0x2710;
  LODWORD(v34) = 0;
  while ( 1 )
  {
    v6 = -1;
    NtSetInformationJobObject(a1[72], JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(a1[72], v3);
    RtlQueryUnbiasedInterruptTime(&v27);
    v7 = 60000;
    v8 = v27 / 0x2710 - v5;
    while ( v8 >= v7 )
    {
      v7 += 60000;
      if ( v7 > 0x2BF20 )
        goto LABEL_5;
    }
    v6 = v7 - v8;
LABEL_5:
    v9 = v6;
    if ( v8 >= 0x7D0 )
    {
      v32 = 1073807364;
LABEL_22:
      v10 = 1;
      goto LABEL_11;
    }
    v6 = 2000 - v8;
    if ( v9 < 2000 - v8 )
      v6 = v9;
    if ( v8 >= 0x96 )
      goto LABEL_22;
    v10 = 0;
    if ( v6 >= 150 - v8 )
      v6 = 150 - v8;
LABEL_11:
    if ( v6 == -1 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = &v28;
      v28 = -10000LL * v6;
    }
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    v14 = 0;
    v15 = a1[72];
    Timeout.QuadPart = 0LL;
    if ( NtWaitForSingleObject(v15, 0, &Timeout) != 258 )
      break;
    if ( v10
      && ((HampHostComputeStaticEnforcementSettings(
             (struct _RM_HAM_ACTIVITY_HOST *)a1,
             (struct _RM_ENFORCEMENT_SETTINGS *)v30,
             0LL,
             0LL,
             0LL),
           v24 = v31,
           v4 == -1)
       || v4 < v31) )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v23);
      LODWORD(v5) = v35;
      v25 = 0;
      v4 = v24;
      v3 = v32;
      if ( *((_DWORD *)a2 + 4) )
      {
        do
        {
          HampProcessBoostPriority(
            *(_QWORD *)(*(_QWORD *)a2 + 8LL * v25),
            *(unsigned int *)(*((_QWORD *)a2 + 1) + 4LL * v25),
            v24);
          ++v25;
        }
        while ( v25 < *((_DWORD *)a2 + 4) );
        LODWORD(v5) = v35;
      }
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      v19 = RtlSleepConditionVariableSRW(a1 + 87, a1, v11, 0LL);
      CurrentThreadId = GetCurrentThreadId();
      v21 = HampLockTrackerId;
      *((_DWORD *)a1 + 2) = CurrentThreadId;
      LOBYTE(v14) = v19 == 258;
      LODWORD(v34) = v14;
      CempLockTrackerMarkReleased(v21, v22, 1LL);
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      LODWORD(v5) = v35;
      v3 = v32;
    }
  }
  if ( (_DWORD)v34 )
  {
    if ( (unsigned int)dword_1800DC218 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 0x400000000008LL, v17, v18) )
    {
      v35 = (unsigned __int64)*(a1 - 4);
      Timeout.QuadPart = (LONGLONG)(a1 + 3);
      v34 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v26,
        &unk_1800C12E6);
    }
    if ( v8 >= 0xEA60 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v16, 1LL);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
