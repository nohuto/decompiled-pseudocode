/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180091E38
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005219A (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x1800523BC (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180090B00 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800915A8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800919A0 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180091CA8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180051542 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18009087C (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180090E74 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(struct _RM_MEMORY_MONITOR_DATA *a1, int a2, DWORD a3, DWORD *a4)
{
  HANDLE *v4; // rsi
  __int64 v9; // rbx
  unsigned int i; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DWORD v14; // eax
  unsigned int v15; // ebx
  DWORD v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DWORD v21; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-45h] BYREF
  BOOL v23[2]; // [rsp+38h] [rbp-41h] BYREF
  __int16 v24; // [rsp+40h] [rbp-39h]
  _DWORD v25[6]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handles[6]; // [rsp+60h] [rbp-19h] BYREF

  v4 = (HANDLE *)((char *)a1 + 8);
  v9 = 0LL;
  if ( !RmpMemoryMonitorCheckEvent(*((void **)a1 + 1)) )
    *((_DWORD *)a1 + 23) &= ~1u;
  for ( i = 0; i < 6; ++i )
  {
    if ( _bittest(&a2, i) && (i || (*((_BYTE *)a1 + 92) & 1) == 0) )
    {
      Handles[v9] = *v4;
      v25[v9] = i;
      v9 = (unsigned int)(v9 + 1);
    }
    ++v4;
  }
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v21 = a3;
    *(_QWORD *)v23 = v25;
    v24 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned __int8 *)&unk_1800C5417,
      v12,
      v13,
      (__int64 *)v23,
      (__int64)&v21);
  }
  v14 = WaitForMultipleObjectsEx(v9, Handles, 0, a3, 0);
  if ( v14 >= 0x40 )
  {
    v15 = 258;
    if ( v14 != 258 )
    {
      v15 = 0;
      *a4 = v25[0];
    }
  }
  else
  {
    v15 = 0;
    v16 = v25[v14];
    *a4 = v16;
    if ( !v16 )
      *((_DWORD *)a1 + 23) |= 1u;
  }
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v21 = *a4;
    v22 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned __int8 *)&unk_1800C56F3,
      v18,
      v19,
      (__int64)&v22,
      (__int64)&v21);
  }
  return v15;
}
