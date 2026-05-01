/*
 * XREFs of ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000EDA0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18000F140 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTempl.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18007053C (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall HampHostTerminateWithProcessBoost(HANDLE *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  NTSTATUS v3; // esi
  unsigned __int64 v4; // r12
  unsigned int v5; // ebx
  int v6; // r13d
  unsigned int v7; // eax
  unsigned int v8; // edi
  int v9; // r15d
  __int64 *v10; // r14
  DWORD v11; // esi
  _QWORD *Value; // rbx
  HANDLE v13; // rcx
  int v14; // ebx
  DWORD CurrentThreadId; // eax
  DWORD v16; // ecx
  __int64 *v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  __int64 v25; // rdi
  unsigned __int64 v26; // [rsp+40h] [rbp-88h] BYREF
  __int64 v27; // [rsp+48h] [rbp-80h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-70h] BYREF
  int v30; // [rsp+70h] [rbp-58h]
  int v31; // [rsp+D0h] [rbp+8h]
  int i; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 1;
  v31 = 1;
  i = -1;
  RtlQueryUnbiasedInterruptTime(&v34);
  v4 = v34 / 0x2710;
  LODWORD(v34) = 0;
  while ( 1 )
  {
    v5 = -1;
    NtSetInformationJobObject(a1[72], JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(a1[72], v3);
    RtlQueryUnbiasedInterruptTime(&v26);
    v6 = v34;
    v7 = 60000;
    v8 = v26 / 0x2710 - v4;
    while ( v8 >= v7 )
    {
      v7 += 60000;
      if ( v7 > 0x2BF20 )
        goto LABEL_5;
    }
    v5 = v7 - v8;
LABEL_5:
    if ( v8 >= 0x7D0 )
    {
      v31 = 1073807364;
LABEL_32:
      v9 = 1;
      goto LABEL_11;
    }
    if ( v5 >= 2000 - v8 )
      v5 = 2000 - v8;
    if ( v8 >= 0x96 )
      goto LABEL_32;
    v9 = 0;
    if ( v5 >= 150 - v8 )
      v5 = 150 - v8;
LABEL_11:
    if ( v5 == -1 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = &v27;
      v27 = -10000LL * v5;
    }
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    v13 = a1[72];
    Timeout.QuadPart = 0LL;
    if ( NtWaitForSingleObject(v13, 0, &Timeout) != 258 )
      break;
    if ( v9
      && ((HampHostComputeStaticEnforcementSettings(
             (struct _RM_HAM_ACTIVITY_HOST *)a1,
             (struct _RM_ENFORCEMENT_SETTINGS *)v29,
             0LL,
             0LL,
             0LL),
           v24 = v30,
           i == -1)
       || i < v30) )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v23);
      v25 = 0LL;
      v3 = v31;
      for ( i = v24; (unsigned int)v25 < *((_DWORD *)a2 + 4); v25 = (unsigned int)(v25 + 1) )
        HampProcessBoostPriority(
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v25),
          *(unsigned int *)(*((_QWORD *)a2 + 1) + 4 * v25),
          v24);
    }
    else
    {
      *((_DWORD *)a1 + 2) = 0;
      v14 = RtlSleepConditionVariableSRW(a1 + 87, a1, v10, 0LL);
      CurrentThreadId = GetCurrentThreadId();
      v16 = HampLockTrackerId;
      *((_DWORD *)a1 + 2) = CurrentThreadId;
      LODWORD(v34) = v14 == 258;
      if ( v16 != -1 )
      {
        v17 = (__int64 *)TlsGetValue(v16);
        v18 = *v17;
        if ( (*v17 & 2) == 0 )
          __int2c();
        v19 = v17[2]-- == 1;
        if ( v19 )
          *v17 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      v3 = v31;
    }
  }
  if ( v6 )
  {
    if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 0x400000000008LL) )
    {
      v34 = (unsigned __int64)*(a1 - 4);
      Timeout.QuadPart = (LONGLONG)(a1 + 3);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v22,
        &unk_1800BFF6E);
    }
    if ( v8 >= 0xEA60 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 2) == 0 )
      __int2c();
    v19 = v20[2]-- == 1;
    if ( v19 )
      *v20 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
