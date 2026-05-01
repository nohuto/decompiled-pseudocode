/*
 * XREFs of ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800902EC
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A410 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006F0D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180090278 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorDisableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  --*(_DWORD *)(v1 + 80);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v7 = (unsigned int)v5;
    v8 = *((_QWORD *)a1 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      byte_1800C5147,
      v4,
      v5,
      (__int64)&v8,
      (__int64)&v7);
  }
  v6 = *((_DWORD *)a1 + 314);
  if ( (v6 & 1) != 0 )
  {
    *((_DWORD *)a1 + 314) = v6 & 0xFFFFFFFE;
    RmpActivityHostCheckQueueWork(a1);
  }
  if ( !*(_DWORD *)(v1 + 80) && (*(_BYTE *)(v1 + 92) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_GPU_MONITOR *)(v1 + 48));
}
