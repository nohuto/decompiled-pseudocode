/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D0F4
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D3F0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18008C4F4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_MEMORY_MONITOR_DATA *a1, struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  char v2; // di
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-9Ch] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-98h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-90h] BYREF
  __int64 v13; // [rsp+80h] [rbp-88h] BYREF
  __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  __int64 v15; // [rsp+90h] [rbp-78h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp-40h]
  __int64 *v21; // [rsp+D8h] [rbp-30h]
  int v22; // [rsp+E0h] [rbp-28h]
  int v23; // [rsp+E4h] [rbp-24h]
  _BYTE SystemInformation[8]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+110h] [rbp+8h]
  _BYTE v26[48]; // [rsp+148h] [rbp+40h] BYREF
  int v27; // [rsp+178h] [rbp+70h]
  int v28; // [rsp+17Ch] [rbp+74h]
  int v29; // [rsp+180h] [rbp+78h]
  int v30; // [rsp+1B8h] [rbp+B0h]
  int v31; // [rsp+1BCh] [rbp+B4h]
  __int64 v32; // [rsp+298h] [rbp+190h]

  phkResult = 0LL;
  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( dword_1800DB1E0 )
  {
    memset_0(SystemInformation, 0, 0x40uLL);
    memset_0(v26, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v26, 0x158u, 0LL);
    if ( (*((_BYTE *)a1 + 92) & 2) == 0 )
    {
      if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 0x400000000009LL) )
      {
        LOBYTE(v9) = *(_BYTE *)(v5 + 508) & 1;
        v14 = v30 * v25;
        v15 = v25 * v31;
        v16 = v32 * v25;
        v17 = v25 * v28;
        v18 = v25 * v29;
        v13 = v25 * v27;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v25,
          byte_1800C5D6C,
          v6,
          v7,
          (__int64)&v13,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v9);
      }
      *((_DWORD *)a1 + 23) |= 2u;
      v2 = 1;
    }
  }
  if ( (*(_BYTE *)(v5 + 508) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 52, *((_DWORD *)a1 + 18), (DWORD *)&v14) )
      {
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v19);
        if ( v20 >= *((_QWORD *)a2 + 15) )
          __fastfail(0xC00001AD);
        if ( v2 && (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 0x400000000009LL) )
        {
          v23 = 0;
          v21 = &v13;
          v13 = v8;
          v22 = 8;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DB1E0,
            (unsigned __int8 *)dword_1800C5CFF,
            0LL,
            0LL,
            3u,
            &v19);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
