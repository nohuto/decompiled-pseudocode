/*
 * XREFs of PopSetPowerSettingValue @ 0x14075140C
 * Callers:
 *     PopScanIdleList @ 0x1402D6330 (PopScanIdleList.c)
 *     PopInitilizeAcDcSettings @ 0x1403C0FF4 (PopInitilizeAcDcSettings.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 *     PopSetSessionDisplayStatus @ 0x1407EDCAC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1407EF430 (PopSetSessionUserStatus.c)
 *     PopSetNewPolicyValue @ 0x1407FD344 (PopSetNewPolicyValue.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402D5E5C (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402D5EE4 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetNotificationWork @ 0x1402D6220 (PopSetNotificationWork.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PopArePowerSettingsEqual @ 0x140751840 (PopArePowerSettingsEqual.c)
 *     PopFindPowerSettingConfiguration @ 0x140751880 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x140751908 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x14075197C (PopStateIsSessionSpecific.c)
 *     PopValidatePowerSettingData @ 0x1407519BC (PopValidatePowerSettingData.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopSetPowerSettingValue(LPCGUID SettingGuid, unsigned int a2, int a3, unsigned int a4, void *Src)
{
  size_t v5; // r13
  bool v6; // bp
  LPCGUID v8; // r12
  _DWORD *v9; // r14
  void *v10; // r15
  __int64 v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // edi
  char v14; // si
  __int64 v16; // rax
  _QWORD *v17; // r15
  char v18; // r12
  __int64 i; // rbp
  bool v20; // zf
  _DWORD *v21; // rax
  signed __int32 v22; // eax
  _QWORD *j; // rax
  __int64 v24; // rax
  __int64 ListHead; // rax
  __int64 *v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 *v29; // r10
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 **v32; // rdx
  __int64 *v33; // rdx
  __int64 *v34; // rax
  char IsSessionSpecific; // [rsp+40h] [rbp-68h]
  char v36; // [rsp+41h] [rbp-67h]
  char v37; // [rsp+42h] [rbp-66h]
  void *Pool2; // [rsp+50h] [rbp-58h]
  __int64 PowerSettingConfiguration; // [rsp+60h] [rbp-48h]

  v5 = a4;
  v6 = 0;
  v36 = 0;
  v8 = SettingGuid;
  v9 = 0LL;
  v37 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, a4, 1952797520LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PopIncrementPowerSettingPendingUpdates(0);
  memmove(Pool2, Src, (unsigned int)v5);
  PopValidatePowerSettingData(v8, (unsigned int)v5, Pool2);
  IsSessionSpecific = PopStateIsSessionSpecific(v8);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(v8, a2);
  v11 = PowerSettingConfiguration;
  if ( !PowerSettingConfiguration )
  {
    v24 = ExAllocatePool2(256LL, 88LL, 1952797520LL);
    PowerSettingConfiguration = v24;
    v11 = v24;
    if ( !v24 )
    {
      v13 = -1073741670;
      v14 = 0;
      goto LABEL_6;
    }
    *(GUID *)(v24 + 32) = *v8;
    ListHead = PopGetListHead(v8);
    v26 = (__int64 *)(v11 + 16);
    v27 = ListHead;
    *(_QWORD *)(v11 + 24) = v11 + 16;
    *(_QWORD *)(v11 + 16) = v11 + 16;
    if ( !IsSessionSpecific )
    {
      v28 = (__int64 *)PopRegisteredPowerSettingCallbacks;
      while ( v28 != &PopRegisteredPowerSettingCallbacks )
      {
        v29 = v28;
        v28 = (__int64 *)*v28;
        v30 = *(__int64 *)((char *)v29 + 36) - *(_QWORD *)&v8->Data1;
        if ( !v30 )
          v30 = *(__int64 *)((char *)v29 + 44) - *(_QWORD *)v8->Data4;
        if ( !v30 )
        {
          v31 = (__int64 **)v28[1];
          if ( *v31 != v28 )
            goto LABEL_60;
          v32 = (__int64 **)v31[1];
          if ( *v32 != (__int64 *)v31 )
            goto LABEL_60;
          v28[1] = (__int64)v32;
          *v32 = v28;
          v33 = *(__int64 **)(v11 + 24);
          if ( (__int64 *)*v33 != v26 )
            goto LABEL_60;
          *v31 = v26;
          v31[1] = v33;
          *v33 = (__int64)v31;
          *(_QWORD *)(v11 + 24) = v31;
        }
      }
      a2 = -1;
    }
    *(_DWORD *)(v11 + 48) = a2;
    v34 = *(__int64 **)(v27 + 8);
    if ( *v34 != v27 )
LABEL_60:
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v34;
    *(_QWORD *)v11 = v27;
    *v34 = v11;
    *(_QWORD *)(v27 + 8) = v11;
    v36 = 1;
    if ( PopPopPowerSettingSetChangeNotification )
      v37 = 1;
  }
  v12 = *(_DWORD **)(v11 + 8LL * a3 + 64);
  if ( (unsigned __int8)PopArePowerSettingsEqual(v12, Pool2, (unsigned int)v5) )
  {
    v13 = 0;
  }
  else
  {
    v16 = a3;
    v17 = (_QWORD *)(v11 + 64);
    v18 = 0;
    for ( i = 0LL; i < 3; ++i )
    {
      if ( i != v16 )
      {
        if ( !v9 )
        {
          v20 = (unsigned __int8)PopArePowerSettingsEqual(*v17, Pool2, (unsigned int)v5) == 0;
          v16 = a3;
          if ( !v20 )
          {
            v9 = (_DWORD *)*v17;
            ++*(_DWORD *)*v17;
          }
        }
        if ( (_DWORD *)*v17 == v12 )
          v18 = 1;
      }
      ++v17;
    }
    v13 = 0;
    if ( v9 )
    {
      v10 = Pool2;
    }
    else
    {
      v21 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v5 + 12), 1952797520LL);
      v9 = v21;
      if ( !v21 )
      {
        v6 = 0;
        v13 = -1073741670;
        v10 = Pool2;
        v8 = SettingGuid;
        v14 = 0;
        goto LABEL_6;
      }
      v21[1] = v5;
      *v21 = 1;
      do
        v22 = _InterlockedIncrement(&PopPowerSettingChangeStamp);
      while ( !v22 );
      v10 = Pool2;
      v9[2] = v22;
      memmove(v9 + 3, Pool2, v5);
    }
    if ( v12 )
    {
      if ( !v18 )
      {
        for ( j = *(_QWORD **)(PowerSettingConfiguration + 16);
              j != (_QWORD *)(PowerSettingConfiguration + 16);
              j = (_QWORD *)*j )
        {
          if ( (_DWORD *)j[9] == v12 )
            j[9] = 0LL;
        }
      }
      v20 = (*v12)-- == 1;
      if ( v20 )
        ExFreePoolWithTag(v12, 0x74655350u);
    }
    v6 = 0;
    *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) = v9;
    if ( dword_140C232CC == a3 )
      v6 = IsSessionSpecific == 0;
    if ( *(_DWORD *)(PowerSettingConfiguration + 56) || *(_DWORD *)(PowerSettingConfiguration + 60) )
    {
      *(_DWORD *)(PowerSettingConfiguration + 52) |= 1u;
      v14 = 1;
      v8 = SettingGuid;
      goto LABEL_6;
    }
    v8 = SettingGuid;
  }
  v14 = 0;
LABEL_6:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v36 )
    PoRegisterPowerSettingCallback(0LL, v8, (PPOWER_SETTING_CALLBACK)PopTracePowerSettingChange, 0LL, 0LL);
  ExFreePoolWithTag(v10, 0x74655350u);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v37 )
      ZwUpdateWnfStateData((__int64)&PopPopPowerSettingSetChangeNotification, 0LL);
    if ( v6 )
    {
      PopIncrementPowerSettingPendingUpdates(1);
      PopSetNotificationWork(0x20u);
    }
    if ( v14 )
      PopSetNotificationWork(0x80u);
  }
  PopDecrementPowerSettingPendingUpdates(0);
  return v13;
}
