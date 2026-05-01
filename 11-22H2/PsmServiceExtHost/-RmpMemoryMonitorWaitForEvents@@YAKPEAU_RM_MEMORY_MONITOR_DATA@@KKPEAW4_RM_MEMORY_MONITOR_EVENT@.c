/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18000CDF0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040AD0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800566E2 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056998 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180056D10 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008C95C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D454 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008D750 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(HANDLE *a1, int a2, DWORD a3, DWORD *a4)
{
  char *v4; // rsi
  _DWORD *v7; // r14
  DWORD v9; // edi
  unsigned int v10; // r9d
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  void *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  void *v26; // rdx
  __int64 v27; // r8
  DWORD v28; // eax
  unsigned int v29; // edi
  DWORD v30; // ecx
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v33[3]; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v35; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v36; // [rsp+60h] [rbp-A0h]
  __int16 v37; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v38[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+90h] [rbp-70h] BYREF
  void *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  _DWORD *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  DWORD *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  __int16 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  _DWORD *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  DWORD *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  HANDLE Handles[6]; // [rsp+120h] [rbp+20h] BYREF

  v4 = (char *)(a1 + 1);
  v7 = (_DWORD *)a1 + 23;
  v9 = 0;
  if ( WaitForSingleObjectEx(a1[1], 0, 0) )
    *v7 &= ~1u;
  v10 = 0;
  v11 = 1;
  do
  {
    if ( (v11 & a2) != 0 && (v10 || (*(_BYTE *)v7 & 1) == 0) )
    {
      v12 = v9++;
      v38[v12] = v10;
      Handles[v12] = *(HANDLE *)&v4[8 * v10];
    }
    if ( (__ROL4__(v11, 1) & a2) != 0 )
    {
      v13 = v10 + 1;
      v14 = *(void **)&v4[8 * v13];
      v15 = v9++;
      v38[v15] = v13;
      Handles[v15] = v14;
    }
    if ( (__ROL4__(v11, 2) & a2) != 0 )
    {
      v16 = v10 + 2;
      v17 = *(void **)&v4[8 * v16];
      v18 = v9++;
      v38[v18] = v16;
      Handles[v18] = v17;
    }
    if ( (__ROL4__(v11, 3) & a2) != 0 )
    {
      v19 = v10 + 3;
      v20 = *(void **)&v4[8 * v19];
      v21 = v9++;
      v38[v21] = v19;
      Handles[v21] = v20;
    }
    if ( (__ROL4__(v11, 4) & a2) != 0 )
    {
      v22 = v10 + 4;
      v23 = *(void **)&v4[8 * v22];
      v24 = v9++;
      v38[v24] = v22;
      Handles[v24] = v23;
    }
    if ( (__ROL4__(v11, 5) & a2) != 0 )
    {
      v25 = v10 + 5;
      v26 = *(void **)&v4[8 * v25];
      v27 = v9++;
      v38[v27] = v25;
      Handles[v27] = v26;
    }
    v10 += 6;
    v11 = __ROL4__(v11, 6);
  }
  while ( v10 < 6 );
  if ( (unsigned int)dword_1800DB1E0 > 5 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    v32 = a3;
    v36 = v38;
    v56 = &v32;
    v37 = v9;
    v54 = 4 * (unsigned __int16)v9;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v51 = &v37;
    v53 = v38;
    v57 = 4LL;
    v52 = 2LL;
    v55 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v48 = &unk_1800C5C23;
    UserData.Reserved = 2;
    v49 = 51;
    v50 = 1;
    v33[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v28 = WaitForMultipleObjectsEx(v9, Handles, 0, a3, 0);
  if ( v28 >= 0x40 )
  {
    v29 = 258;
    if ( v28 != 258 )
    {
      v29 = 0;
      *a4 = v38[0];
    }
  }
  else
  {
    v29 = 0;
    v30 = v38[v28];
    *a4 = v30;
    if ( !v30 )
      *v7 |= 1u;
  }
  if ( (unsigned int)dword_1800DB1E0 > 5 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    v32 = *a4;
    v33[0] = v29;
    v45 = &v32;
    v46 = 4LL;
    v43 = v33;
    *(_DWORD *)&v35.Level = 517;
    v39.Ptr = (ULONGLONG)off_1800DB1E8;
    v44 = 4LL;
    *(_DWORD *)&v35.Id = 184549376;
    v35.Keyword = 1LL;
    v39.Size = *(unsigned __int16 *)off_1800DB1E8;
    v40 = &unk_1800C5EA2;
    v39.Reserved = 2;
    v41 = 57;
    v42 = 1;
    v33[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v35, 0LL, 0LL, 4u, &v39);
  }
  return v29;
}
