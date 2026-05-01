/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x1800422CC
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180042170 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180072264 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x1800067C0 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800423C0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18006C9CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007A878 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        NTSTATUS a5,
        _BYTE *a6)
{
  __int64 v8; // rbx
  char v10; // si
  __int64 v11; // rdx
  NTSTATUS v12; // edi
  int HostByProcessHandle; // eax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+40h] BYREF

  v20 = a3;
  LOBYTE(a5) = 0;
  Handle = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v10 = 0;
  v12 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v12 >= 0 )
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(a1, Handle, 0LL, &v18);
    v8 = v18;
    v12 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
      v12 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v12 >= 0 )
  {
    HampHostTerminateIfSuspended(v8, v11, a4, &a5);
    v10 = a5;
  }
  else if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    a5 = v12;
    v20 = a4;
    LODWORD(v18) = 1;
    LODWORD(Handle) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_1800BFD01,
      v15,
      v16,
      (__int64)&Handle,
      (__int64)&v18,
      (__int64)&v20,
      (__int64)&a5);
  }
  if ( a6 )
    *a6 = v10;
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v8 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v8 - 64));
    RmpReleaseGlobalLock();
  }
}
