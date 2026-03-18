/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x140762500
 * Callers:
 *     HvlpRegisterPowerPolicyCallbacks @ 0x14054A344 (HvlpRegisterPowerPolicyCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140822D70 (PopIdleInitAoAcDozeS4Timer.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140828B8C (SSHSupportRegisterPowerSettingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1408334E4 (CmpInitializeLazyWriters.c)
 *     TtmInitCurrentSession @ 0x1409A4208 (TtmInitCurrentSession.c)
 *     PopEsInit @ 0x140B03434 (PopEsInit.c)
 *     PopInitializePowerSettingCallbacks @ 0x140B25464 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x140B25540 (PpmInfoRegisterCallbacks.c)
 *     VslRegisterIumPowerCallbacks @ 0x140B31688 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopEnsureErratumSubscribed @ 0x1405CFCA4 (PopEnsureErratumSubscribed.c)
 *     PopFindPowerSettingConfiguration @ 0x140751880 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14075197C (PopStateIsSessionSpecific.c)
 *     EmClientRuleEvaluate @ 0x140A47E30 (EmClientRuleEvaluate.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 Pool2; // rax
  char *v12; // rbx
  GUID v13; // xmm0
  __int64 *PowerSettingConfiguration; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rcx
  NTSTATUS v18; // edi
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // [rsp+28h] [rbp-E0h] BYREF
  int v23; // [rsp+2Ch] [rbp-DCh]
  __int128 *v24; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v25; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v28[528]; // [rsp+68h] [rbp-A0h] BYREF

  v22 = 0;
  v24 = 0LL;
  v26 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v23 = dword_140C232CC;
  v27 = 0LL;
  v8 = 0;
  v25 = 0LL;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      memset(v28, 0, 0x208uLL);
      v25.MaximumLength = 520;
      v25.Buffer = (wchar_t *)v28;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v25) >= 0 )
      {
        DWORD2(v27) = 16;
        *(_QWORD *)&v27 = &v25;
        v24 = &v27;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, &v24, 1LL, &v22) >= 0 )
        {
          v21 = &PopPrimaryDisplayVisibleStateErratum;
          if ( v22 != 2 )
            v21 = 0LL;
          v9 = (unsigned __int64 *)v21;
        }
      }
    }
  }
  ExAcquireFastMutex(&PopSettingLock);
  Pool2 = ExAllocatePool2(256LL, 112LL, 1952797520LL);
  v12 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1952797520;
    v13 = *v7;
    *(_QWORD *)(Pool2 + 80) = Callback;
    *(_QWORD *)(Pool2 + 88) = Context;
    *(GUID *)(Pool2 + 52) = v13;
    *(_QWORD *)(Pool2 + 96) = v26;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v15 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v15 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v15 )
        goto LABEL_25;
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v16 )
LABEL_25:
        *((_QWORD *)v12 + 9) = PowerSettingConfiguration[v23 + 8];
      v17 = (__int64 **)PowerSettingConfiguration[3];
      if ( *v17 == PowerSettingConfiguration + 2 )
      {
        *(_QWORD *)v12 = PowerSettingConfiguration + 2;
        *((_QWORD *)v12 + 1) = v17;
        *v17 = (__int64 *)v12;
        PowerSettingConfiguration[3] = (__int64)v12;
        goto LABEL_18;
      }
    }
    else
    {
      v20 = (_QWORD *)qword_140C22408;
      if ( *(__int64 **)qword_140C22408 == &PopRegisteredPowerSettingCallbacks )
      {
        *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
        *((_QWORD *)v12 + 1) = v20;
        *v20 = v12;
        qword_140C22408 = (__int64)v12;
LABEL_18:
        v18 = 0;
        v8 = (unsigned int)PopOsInitPhase >= 3;
        if ( Handle )
          *Handle = v12;
        goto LABEL_20;
      }
    }
    __fastfail(3u);
  }
  v18 = -1073741670;
LABEL_20:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v8 )
    PopSetNotificationWork(0x20u);
  return v18;
}
