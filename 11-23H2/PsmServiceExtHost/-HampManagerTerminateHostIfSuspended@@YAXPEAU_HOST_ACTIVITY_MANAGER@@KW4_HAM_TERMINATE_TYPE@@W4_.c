/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x180055382
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800479B0 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x1800742A8 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A5A4 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180054FA2 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18006FD70 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  char v7; // di
  int HostByPid; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF

  v18 = a3;
  v17 = 0LL;
  v7 = 0;
  LOBYTE(a5) = 0;
  HostByPid = RmHamFindHostByPid(a1, a2, a3, (__int64)&v17);
  v11 = v17;
  if ( HostByPid >= 0 )
  {
    HampHostTerminateIfSuspended(v17, v10, a4, &a5);
    v7 = a5;
  }
  else if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    a5 = v13;
    v18 = a4;
    v16 = 1;
    LODWORD(v17) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_1800C1CCE,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&a5);
  }
  if ( a6 )
    *a6 = v7;
  if ( v11 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v11 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v11 - 64) & -(__int64)(v11 != 0)));
    RmpReleaseGlobalLock();
  }
}
