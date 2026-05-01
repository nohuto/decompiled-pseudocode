/*
 * XREFs of BiHamExtHostQueryResourceUsage @ 0x18006BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall BiHamExtHostQueryResourceUsage(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  int Host; // edi
  __int64 v6; // rsi
  void *v7; // rbx
  __int64 v8; // rbx
  void *v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE JobInformation[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  _BYTE v21[144]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  char v24[144]; // [rsp+250h] [rbp+150h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  LOBYTE(v4) = 2;
  Host = RmHamFindHost((__int64)RmSvcGlobals + 2248, a1, v4, &v15);
  if ( Host >= 0 )
  {
    v6 = v15;
    v7 = *(void **)(v15 + 576);
    memset_0(JobInformation, 0, 0x48uLL);
    Host = NtQueryInformationJobObject(v7, JobObjectJobSetInformation|0x20, JobInformation, 0x48u, 0LL);
    v8 = v6;
    if ( Host >= 0 )
    {
      v9 = *(void **)(v6 + 576);
      memset_0(v21, 0, 0x1C0uLL);
      Host = NtQueryInformationJobObject(v9, JobObjectBasicProcessIdList|0x10, v21, 0x1C0u, 0LL);
      v8 = v6;
      if ( Host >= 0 )
      {
        v10 = v17 + v19;
        *a2 = v22;
        a2[1] = v23;
        v11 = -1LL;
        if ( v10 >= v17 )
          v11 = v10;
        a2[2] = v11;
        v12 = -1LL;
        if ( v18 + v20 >= v18 )
          v12 = v18 + v20;
        Host = 0;
        a2[3] = v12;
      }
    }
    if ( v8 )
    {
      RmpAcquireGlobalLock();
      if ( (*(_QWORD *)(v8 + 600))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v8 - 64));
      RmpReleaseGlobalLock();
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)Host;
}
