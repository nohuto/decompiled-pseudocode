/*
 * XREFs of PopGetSettingNotificationName @ 0x140783590
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     MmIsSessionInCurrentServerSilo @ 0x140201A78 (MmIsSessionInCurrentServerSilo.c)
 *     PsGetCurrentSilo @ 0x14022E220 (PsGetCurrentSilo.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PsIsHostSilo @ 0x1402AF8D0 (PsIsHostSilo.c)
 *     PopSetNotificationWork @ 0x14032C950 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopFindPowerSettingConfiguration @ 0x14078339C (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x140783498 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x1407E3790 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1407E8C4C (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x1407EC09C (PopValidateContextMembership.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990DB0 (PopDiagTracePowerSettingRegistration.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v3; // r12
  char v4; // r13
  char v5; // r14
  unsigned int v6; // edi
  _QWORD *v7; // r15
  __int64 *PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v9; // rsi
  _WNF_STATE_NAME v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  _WNF_STATE_NAME StateName; // [rsp+40h] [rbp-38h] BYREF

  StateName = 0LL;
  v3 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  v7 = (_QWORD *)(a1 & -(__int64)(a1 != 0));
  if ( !v7 )
  {
    v10 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification == __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
    {
      v14 = PopCreateNotificationName(&StateName);
      if ( v14 < 0 )
        goto LABEL_12;
      PopPopPowerSettingSetChangeNotification = StateName;
      goto LABEL_11;
    }
LABEL_10:
    StateName = v10;
LABEL_11:
    ExReleaseFastMutex(&PopSettingLock);
    v5 = 0;
    *a2 = StateName;
    v14 = 0;
    goto LABEL_12;
  }
  if ( PopStateIsSessionSpecific((_QWORD *)(a1 & -(__int64)(a1 != 0))) )
  {
    ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v18 = ProcessSessionId;
    if ( v6 == -1 || v6 == ProcessSessionId )
    {
      if ( ProcessSessionId == -1 || (unsigned __int8)PsIsServiceSession(ProcessSessionId) )
      {
        v14 = -1073741811;
        goto LABEL_15;
      }
      v6 = v18;
    }
    else
    {
      v14 = PopValidateContextMembership(SeLocalSystemSid);
      if ( v14 < 0 )
      {
        if ( !(unsigned __int8)PsIsServiceSession(v18)
          || !MmIsSessionInCurrentServerSilo(v6)
          || (v14 = PopValidateContextMembership(SeExports->SeLocalServiceSid), v14 < 0) )
        {
LABEL_12:
          if ( v14 && v14 != -1073741275 )
            goto LABEL_15;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v6 = -1;
  }
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, v6);
  v9 = (_WNF_STATE_NAME *)PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v4 = 1;
    if ( !*((_DWORD *)PowerSettingConfiguration + 14) && !*((_DWORD *)PowerSettingConfiguration + 15) )
    {
      v14 = PopCreateNotificationName(&StateName);
      if ( v14 < 0 )
        goto LABEL_12;
      v19 = *v7 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
      if ( *v7 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
        v19 = v7[1] - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
      if ( !v19 )
        v9[6].Data[1] |= 8u;
      v9[7] = StateName;
      v9[6].Data[1] |= 1u;
      v3 = 1;
      goto LABEL_11;
    }
    v10 = (_WNF_STATE_NAME)PowerSettingConfiguration[7];
    goto LABEL_10;
  }
  v14 = -1073741275;
LABEL_13:
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo((__int64)CurrentSilo) )
  {
    LOBYTE(v12) = v4;
    PopDiagTracePowerSettingRegistration(v7, v6, v12);
  }
LABEL_15:
  if ( v5 )
    ExReleaseFastMutex(&PopSettingLock);
  if ( v3 )
    PopSetNotificationWork(0x80u, v11, v12, v13);
  return (unsigned int)v14;
}
