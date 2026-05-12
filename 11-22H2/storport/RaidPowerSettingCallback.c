/*
 * XREFs of RaidPowerSettingCallback @ 0x1C003D090
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0024800 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024824 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x1C002484A (RaidAdapterSystemPowerHintsEnabled.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0033820 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C004BF18 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C006B4FC (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C006B950 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // rcx
  int SystemPowerHint; // eax
  char v9; // cl
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r9
  char v15; // al
  int SystemPowerResumeLatency; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  int v25; // eax
  char v26; // al
  char v27; // r9
  __int64 v28; // rcx
  char v29; // r10
  char v30; // cl
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int128 v35; // xmm0
  unsigned __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  __int128 v37; // [rsp+48h] [rbp-38h]
  unsigned int *v38; // [rsp+58h] [rbp-28h]
  int v39; // [rsp+60h] [rbp-20h]
  int v40; // [rsp+64h] [rbp-1Ch]
  int v41; // [rsp+68h] [rbp-18h]
  int v42; // [rsp+6Ch] [rbp-14h]
  __int64 v43; // [rsp+70h] [rbp-10h]

  v37 = 0uLL;
  v40 = 0;
  v43 = 0LL;
  v5 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v5 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( !v5 )
  {
    if ( (_DWORD)ValueLength == 4 && Value )
    {
      v6 = *(_BYTE *)Value;
      if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
        || !RaidAdapterSystemPowerHintsEnabled(Context) )
      {
        return 0LL;
      }
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v7);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v41 = 1;
      v42 = 16;
      if ( v6 != 1 )
      {
        if ( v6 )
          return 0LL;
        v15 = *((_BYTE *)Context + 108);
        if ( (v15 & 1) == 0 )
          return 0LL;
        *((_BYTE *)Context + 108) = v15 & 0xFE;
        LODWORD(v43) = RaidAdapterGetSystemPowerHint((__int64)Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v43);
        HIDWORD(v43) = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v18,
            v17,
            v19,
            *((_DWORD *)Context + 14),
            v17,
            v20,
            v19,
            SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_46;
      }
      v9 = *((_BYTE *)Context + 108);
      if ( (v9 & 1) == 0 )
      {
        *((_BYTE *)Context + 108) = v9 | 1;
        LODWORD(v43) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v10 = RaidAdapterGetSystemPowerResumeLatency(v43);
        HIDWORD(v43) = v10;
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_1C0092A02 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v12, v11, v13, *((_DWORD *)Context + 14), v11, v14, v13, v10);
        }
        StorpCSEntryTelemetry(Context);
        goto LABEL_46;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  v21 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
    v21 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
  if ( !v21 )
  {
    v36 = *Value;
    if ( v36 <= 0x64 )
    {
      LOBYTE(ValueLength) = 1;
      RaidAdapterSetMaxOperationalPower(Context, &v36, ValueLength, 1LL);
    }
    return 0LL;
  }
  v22 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v22 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v22 )
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v23 = *Value;
    if ( ((*((_BYTE *)Context + 111) & 8) != 0) == (*Value != 0)
      || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
      || !RaidAdapterSystemPowerHintsEnabled(Context) )
    {
      return 0LL;
    }
    v25 = RaidAdapterGetSystemPowerHint(v24);
    v26 = RaidAdapterGetSystemPowerResumeLatency(v25);
    LOBYTE(v28) = *((_BYTE *)Context + 111);
    v29 = v26;
    v41 = 1;
    v42 = 16;
    if ( v23 )
    {
      if ( (v28 & 8) == 0 )
      {
        v30 = v28 | 8;
LABEL_37:
        *((_BYTE *)Context + 111) = v30;
        LODWORD(v43) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v31 = RaidAdapterGetSystemPowerResumeLatency(v43);
        v33 = v31;
        HIDWORD(v43) = v31;
LABEL_41:
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(v28, v32, v33, *((_DWORD *)Context + 14), v27, v29, v32, v33);
        goto LABEL_46;
      }
    }
    else if ( (v28 & 8) != 0 )
    {
      v30 = v28 & 0xF7;
      goto LABEL_37;
    }
    v33 = HIDWORD(v43);
    v32 = (unsigned int)v43;
    goto LABEL_41;
  }
  v35 = *SettingGuid;
  v38 = Value;
  v39 = ValueLength;
  v37 = v35;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
LABEL_46:
    RaCallMiniportAdapterControl((__int64)(Context + 42));
  return 0LL;
}
