/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18008297C
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x18006C2D0 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A71C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180054FA2 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008B260 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        unsigned int a5)
{
  ExecutionModel::ResourceManager *v5; // r13
  __int64 v6; // rdi
  int v7; // esi
  int v10; // ebx
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v21; // [rsp+44h] [rbp-9Dh] BYREF
  __int64 v22; // [rsp+48h] [rbp-99h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-8Dh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v26[144]; // [rsp+60h] [rbp-81h] BYREF

  v5 = g_pResourceManager;
  v6 = 0LL;
  v21 = a4;
  Handle = 0LL;
  v7 = a4;
  v22 = 0LL;
  v20[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  if ( a3 )
  {
    v11 = RmpSystemOpenProcess(&Handle, 0x1000u, a5);
    if ( v11 >= 0 )
    {
      RmHamFindHostByProcessHandle(*((_QWORD *)v5 + 16) + 2248LL, Handle, 0, &v22);
      RmpAcquireGlobalLock();
      v13 = 0;
      if ( a2 )
      {
        v14 = a3;
        while ( 1 )
        {
          v10 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
                  (struct _RM_SERVICE_GLOBALS **)v5,
                  *v14,
                  a5,
                  1);
          if ( v10 < 0 )
            break;
          ++v13;
          v14 += 6;
          if ( v13 >= a2 )
            goto LABEL_9;
        }
        v6 = v22;
        v7 = v21;
      }
      else
      {
LABEL_9:
        v6 = v22;
        v7 = v21;
        v10 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(
                v12,
                *((_QWORD *)v5 + 3),
                a2,
                a3,
                v21,
                a5,
                v22,
                v20);
        if ( v10 >= 0 && !v20[0] )
          v10 = -2147467259;
      }
    }
    else
    {
      v10 = v11 | 0x10000000;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  RmpReleaseGlobalLock();
  if ( Handle )
    NtClose(Handle);
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v6 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v6 - 64) & -(__int64)(v6 != 0)));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v21 = v7;
    v23 = a2;
    v24 = a5;
    LODWORD(v22) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      byte_1800C33DC,
      v17,
      v18,
      (__int64)&v22,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v21);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v10;
}
