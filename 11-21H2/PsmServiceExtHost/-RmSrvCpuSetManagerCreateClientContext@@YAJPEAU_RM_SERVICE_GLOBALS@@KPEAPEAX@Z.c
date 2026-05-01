/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180085338
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x18006D150 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18004AB1C (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180051542 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180089EA8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  int v6; // ebx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _RM_CPU_SET_CLIENT_CONTEXT *v11; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-7Dh] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp+17h] BYREF

  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v14);
  v11 = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C2FFA,
      0LL,
      0LL,
      2u,
      &v15);
  RmpAcquireGlobalLock();
  v6 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680), a2, &v11);
  if ( v6 < 0 )
  {
    v7 = v11;
  }
  else
  {
    v7 = 0LL;
    *a3 = v11;
    v6 = 0;
  }
  if ( v7 )
    RmpCpuSetManagerReleaseClientContext(v7);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v12 = a2;
    LODWORD(v11) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC1E0,
      byte_1800C2B2C,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v12);
  }
  if ( v13 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v6;
}
