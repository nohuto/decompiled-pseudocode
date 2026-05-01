/*
 * XREFs of ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x180074464
 * Callers:
 *     HamRpcSrvTerminateSelf @ 0x18007AF70 (HamRpcSrvTerminateSelf.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BD0C (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E100 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180070D3C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall HamSrvTerminateSelf(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  unsigned __int64 v4; // r14
  unsigned int v5; // edi
  int v6; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char *v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+48h] [rbp-B8h] BYREF
  int Pid; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C040C,
      0LL,
      0LL,
      2u,
      &v20);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v16 = 0LL;
  v4 = -1LL;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    v5 = -1073741584;
  }
  else
  {
    v6 = HampHostFindByClient((__int64)a1, 2, &v16, &v18);
    v7 = v16;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( v16 )
        v8 = (char *)v16 - 64;
      else
        v8 = 0LL;
      v4 = *((_QWORD *)v8 + 4);
      HampHostQueueTerminateEx((__int64)v16, a2, 0x1700u, a1, 0, 0, 0LL, (unsigned int *)&v16);
      v5 = 0;
    }
    if ( v7 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v7 + 75))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v7 - 64) & -(__int64)(v7 != 0LL)));
      RmpReleaseGlobalLock();
    }
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v15[0] = a2;
    v18 = v4;
    Pid = HampClientGetPid(a1, v10);
    LODWORD(v16) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v11,
      byte_1800C110A,
      v12,
      v13,
      (__int64)&v16,
      (__int64)&Pid,
      (__int64)&v18,
      (__int64)v15);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v5;
}
