/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005219A
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18001B570 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x18008DEA4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180091E38 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180093868 (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x1800939B0 (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // r14d
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-91h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-81h] BYREF
  __int64 v20; // [rsp+60h] [rbp-79h] BYREF
  __int64 v21; // [rsp+68h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 *v23; // [rsp+90h] [rbp-49h]
  int v24; // [rsp+98h] [rbp-41h]
  int v25; // [rsp+9Ch] [rbp-3Dh]
  __int64 *v26; // [rsp+A0h] [rbp-39h]
  int v27; // [rsp+A8h] [rbp-31h]
  int v28; // [rsp+ACh] [rbp-2Dh]
  __int64 *v29; // [rsp+B0h] [rbp-29h]
  int v30; // [rsp+B8h] [rbp-21h]
  int v31; // [rsp+BCh] [rbp-1Dh]
  unsigned __int64 *v32; // [rsp+C0h] [rbp-19h]
  int v33; // [rsp+C8h] [rbp-11h]
  int v34; // [rsp+CCh] [rbp-Dh]
  unsigned __int64 *v35; // [rsp+D0h] [rbp-9h]
  int v36; // [rsp+D8h] [rbp-1h]
  int v37; // [rsp+DCh] [rbp+3h]
  unsigned __int64 *v38; // [rsp+E0h] [rbp+7h]
  int v39; // [rsp+E8h] [rbp+Fh]
  int v40; // [rsp+ECh] [rbp+13h]

  v4 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  if ( (int)RmpSystemQueryCompressionProcessPrivateWorkingSet(&v16) < 0 )
    return 2LL;
  v8 = v16;
  v9 = v4 >> 2;
  if ( v16 < v4 >> 2 )
  {
    if ( (unsigned int)dword_1800DC1E0 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v18 = *(_QWORD *)(a3 + 56);
        v19 = *(_QWORD *)(a2 + 56);
        v16 = v8;
        v17 = v4 >> 2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v10,
          (unsigned int)&unk_1800C5375,
          v11,
          v12,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16);
      }
    }
    return 2LL;
  }
  if ( v16 < v4 )
    v4 = v16;
  v13 = RmpSystemTrimCompressionProcessPrivateWorkingSet(v4);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v15 = *(_QWORD *)(a3 + 56);
    v40 = 0;
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v20 = v15;
    v21 = *(_QWORD *)(a2 + 56);
    v38 = &v19;
    v35 = &v18;
    v32 = &v17;
    v29 = &v20;
    v26 = &v21;
    v23 = &v16;
    v39 = v14 + 7;
    v36 = v14 + 7;
    v33 = v14 + 7;
    v30 = v14 + 7;
    v27 = v14 + 7;
    v19 = v4;
    v18 = v8;
    v17 = v9;
    LODWORD(v16) = v13;
    v24 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C5AB3,
      0LL,
      0LL,
      v14 + 7,
      &v22);
  }
  if ( v13 < 0
    || RmpMemoryMonitorWaitForEvents(
         (struct _RM_MEMORY_MONITOR_DATA *)a1,
         5u,
         *(_DWORD *)(a1 + 72),
         (enum _RM_MEMORY_MONITOR_EVENT *)&v16)
    || (_DWORD)v16 != 2 )
  {
    return 0LL;
  }
  else
  {
    return 4LL;
  }
}
