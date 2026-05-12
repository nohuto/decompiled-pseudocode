/*
 * XREFs of RaidPowerSettingCallback @ 0x1C003B2A0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0024B84 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024BA8 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0032BC4 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x1C0038CB8 (RaidAdapterSystemPowerHintsEnabled.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0048EB8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C005DF98 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C005E3EC (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  char v5; // si
  __int64 v6; // rcx
  int SystemPowerHint; // eax
  char v8; // cl
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r9
  char v14; // al
  int SystemPowerResumeLatency; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // r9
  int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  char v23; // al
  char v24; // r9
  __int64 v25; // rcx
  char v26; // r10
  char v27; // cl
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int128 v32; // xmm0
  unsigned __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+48h] [rbp-38h]
  unsigned int *v35; // [rsp+58h] [rbp-28h]
  int v36; // [rsp+60h] [rbp-20h]
  int v37; // [rsp+64h] [rbp-1Ch]
  int v38; // [rsp+68h] [rbp-18h]
  int v39; // [rsp+6Ch] [rbp-14h]
  __int64 v40; // [rsp+70h] [rbp-10h]

  v37 = 0;
  v40 = 0LL;
  if ( *SettingGuid == *(_OWORD *)&GUID_LOW_POWER_EPOCH )
  {
    if ( (_DWORD)ValueLength == 4 && Value )
    {
      v5 = *(_BYTE *)Value;
      if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
        || !RaidAdapterSystemPowerHintsEnabled(Context) )
      {
        return 0LL;
      }
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v6);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v38 = 1;
      v39 = 16;
      if ( v5 != 1 )
      {
        if ( v5 )
          return 0LL;
        v14 = *((_BYTE *)Context + 108);
        if ( (v14 & 1) == 0 )
          return 0LL;
        *((_BYTE *)Context + 108) = v14 & 0xFE;
        LODWORD(v40) = RaidAdapterGetSystemPowerHint((__int64)Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v40);
        HIDWORD(v40) = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v17,
            v16,
            v18,
            *((_DWORD *)Context + 14),
            v16,
            v19,
            v18,
            SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_42;
      }
      v8 = *((_BYTE *)Context + 108);
      if ( (v8 & 1) == 0 )
      {
        *((_BYTE *)Context + 108) = v8 | 1;
        LODWORD(v40) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v9 = RaidAdapterGetSystemPowerResumeLatency(v40);
        HIDWORD(v40) = v9;
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_1C00799E2 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v11, v10, v12, *((_DWORD *)Context + 14), v10, v13, v12, v9);
        }
        StorpCSEntryTelemetry(Context);
        goto LABEL_42;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_DISK_MAX_POWER.Data4 )
  {
    v33 = *Value;
    if ( v33 <= 0x64 )
    {
      LOBYTE(ValueLength) = 1;
      RaidAdapterSetMaxOperationalPower(Context, &v33, ValueLength, 1LL);
    }
    return 0LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 )
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v20 = *Value;
    if ( ((*((_BYTE *)Context + 111) & 4) != 0) == (*Value != 0)
      || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
      || !RaidAdapterSystemPowerHintsEnabled(Context) )
    {
      return 0LL;
    }
    v22 = RaidAdapterGetSystemPowerHint(v21);
    v23 = RaidAdapterGetSystemPowerResumeLatency(v22);
    LOBYTE(v25) = *((_BYTE *)Context + 111);
    v26 = v23;
    v38 = 1;
    v39 = 16;
    if ( v20 )
    {
      if ( (v25 & 4) == 0 )
      {
        v27 = v25 | 4;
LABEL_33:
        *((_BYTE *)Context + 111) = v27;
        LODWORD(v40) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v28 = RaidAdapterGetSystemPowerResumeLatency(v40);
        v30 = v28;
        HIDWORD(v40) = v28;
LABEL_37:
        if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(v25, v29, v30, *((_DWORD *)Context + 14), v24, v26, v29, v30);
        goto LABEL_42;
      }
    }
    else if ( (v25 & 4) != 0 )
    {
      v27 = v25 & 0xFB;
      goto LABEL_33;
    }
    v30 = HIDWORD(v40);
    v29 = (unsigned int)v40;
    goto LABEL_37;
  }
  v32 = *SettingGuid;
  v35 = Value;
  v36 = ValueLength;
  v34 = v32;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
LABEL_42:
    RaCallMiniportAdapterControl((__int64)(Context + 42));
  return 0LL;
}
