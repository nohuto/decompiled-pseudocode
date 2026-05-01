/*
 * XREFs of ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180090464
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18008FF70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800903A4 (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(char *, _QWORD, char *, _QWORD, _QWORD, int, __int64 *); // rbx
  int ManagerType; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  if ( (*(_BYTE *)(v1 + 3224) & 1) == 0 )
  {
    v3 = v1 + 48;
    v4 = *(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, __int64 *))(*(_QWORD *)(v1 + 40) + 88LL);
    ManagerType = RmpActivityHostGetManagerType(a1);
    v6 = v4(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           ManagerType,
           &v12);
    v7 = v12;
    if ( v6 < 0 )
      v7 = 0LL;
    *((_QWORD *)a1 + 154) = v7;
    v12 = v7;
    ++*(_DWORD *)(v3 + 32);
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      v13 = v12;
      v14 = *((_QWORD *)a1 + 4);
      v11 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v8,
        byte_1800C528C,
        v9,
        v10,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11);
    }
    if ( (*(_BYTE *)(v3 + 44) & 1) == 0 )
      RmpGpuMonitorEnable((struct _RM_GPU_MONITOR *)v3);
  }
}
