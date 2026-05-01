/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18007302C
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x18007B260 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A79C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BDD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E0C0 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F794 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        unsigned __int64 *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  unsigned __int64 v6; // r12
  __int64 TransitiveAppliedTaskCompletions; // r15
  int v8; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  unsigned int v10; // esi
  char *v11; // rax
  int HostByProcessHandle; // eax
  char *v13; // rax
  bool v14; // zf
  __int64 v15; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Process; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+100h] [rbp+0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  __int64 *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  __int64 *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  struct _RM_HAM_ACTIVITY_HOST **v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  HANDLE *p_Process; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+180h] [rbp+80h] BYREF

  Process = a2;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1673,
      0LL,
      0LL,
      2u,
      &v38);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v19 = 0LL;
  v5 = 0LL;
  v20 = -1LL;
  v17 = 0LL;
  v6 = -1LL;
  TransitiveAppliedTaskCompletions = 0LL;
  v8 = HampHostFindByClient((__int64)a1, 0, &v19, &v21);
  v9 = v19;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = v19 ? (char *)v19 - 64 : 0LL;
    v20 = *((_QWORD *)v11 + 4);
    HostByProcessHandle = RmHamFindHostByProcessHandle(
                            (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) - 16,
                            Process,
                            0,
                            &v17);
    v5 = v17;
    v10 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
    {
      if ( v17 )
        v13 = (char *)v17 - 64;
      else
        v13 = 0LL;
      v6 = *((_QWORD *)v13 + 4);
      if ( *(_QWORD *)(*((_QWORD *)v17 + 99) + 88LL) == *(_QWORD *)(*((_QWORD *)v9 + 99) + 88LL) )
      {
        TransitiveAppliedTaskCompletions = HampHostGetTransitiveAppliedTaskCompletions(v17);
        *a3 = TransitiveAppliedTaskCompletions;
        v10 = 0;
      }
      else
      {
        v10 = -1073741790;
      }
    }
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    v14 = (*((_QWORD *)v9 + 75))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v9 - 64) & -(__int64)(v9 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    v14 = (*((_QWORD *)v5 + 75))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v5 - 64) & -(__int64)(v5 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    LODWORD(Process) = GetProcessId(Process);
    LODWORD(v19) = HampClientGetPid(a1, v15);
    v22 = v20;
    v23 = TransitiveAppliedTaskCompletions;
    p_Process = &Process;
    v21 = v6;
    v34 = &v19;
    v32 = &v22;
    v30 = &v23;
    v28 = &v21;
    v26 = &v17;
    LODWORD(v17) = v10;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 8LL;
    v31 = 8LL;
    v29 = 8LL;
    v27 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C1318,
      0LL,
      0LL,
      8u,
      &v25);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v10;
}
