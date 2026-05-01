/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800566E2
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x18002B070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x18008F3FC (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD SystemInformation[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]

  v3 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  SystemInformation[1] = 22;
  SystemInformation[0] = 1;
  v23 = &v25;
  v24 = 48;
  v25 = 0LL;
  LODWORD(v25.Ptr) = 4;
  v26 = 0LL;
  v27 = 0LL;
  if ( NtQuerySystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u, 0LL) < 0 )
    return 2LL;
  v7 = *(_QWORD *)&v25.Size;
  v8 = v3 >> 2;
  if ( *(_QWORD *)&v25.Size < v3 >> 2 )
  {
    if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v18 = *(_QWORD *)(a3 + 56);
      v9 = *(_QWORD *)(a2 + 56);
      v30 = &v17;
      v19 = v9;
      v28 = &v18;
      v32 = (unsigned __int64 *)&v16;
      *(_QWORD *)&v27 = &v19;
      v16 = v7;
      v17 = v3 >> 2;
      v33 = 8LL;
      v31 = 8LL;
      v29 = 8LL;
      *((_QWORD *)&v27 + 1) = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB1E0,
        (unsigned __int8 *)dword_1800C5B14,
        0LL,
        0LL,
        6u,
        &v25);
    }
    return 2LL;
  }
  v11 = *(_QWORD *)&v25.Size;
  if ( *(_QWORD *)&v25.Size >= v3 )
    v11 = v3;
  v12 = RmpSystemTrimCompressionProcessPrivateWorkingSet(v11);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v14 = *(_QWORD *)(a3 + 56);
    v39 = 0;
    v36 = 0;
    v34 = &v18;
    v32 = &v17;
    v30 = (unsigned __int64 *)&v20;
    v20 = v14;
    v15 = *(_QWORD *)(a2 + 56);
    v28 = &v21;
    v21 = v15;
    *(_QWORD *)&v27 = &v16;
    v37 = &v19;
    v19 = v11;
    v18 = v7;
    v17 = v8;
    LODWORD(v16) = v12;
    v38 = v13 + 7;
    v35 = v13 + 7;
    v33 = (unsigned int)(v13 + 7);
    v31 = v33;
    v29 = v33;
    *((_QWORD *)&v27 + 1) = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C6257,
      0LL,
      0LL,
      v13 + 7,
      &v25);
  }
  if ( v12 < 0
    || (unsigned int)RmpMemoryMonitorWaitForEvents((HANDLE *)a1, 5, *(_DWORD *)(a1 + 72), (DWORD *)&v16)
    || (_DWORD)v16 != 2 )
  {
    return 0LL;
  }
  else
  {
    return 4LL;
  }
}
