/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x180070F10
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x180073770 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800423C0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A0C0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // r14
  void *v6; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  unsigned __int64 TransitiveAppliedTaskCompletions; // r12
  int HostByProcessHandle; // eax
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // r14
  bool v14; // zf
  DWORD ProcessId; // eax
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  char v24[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+100h] [rbp+0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  HANDLE *p_Process; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  __int64 *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  __int64 *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+180h] [rbp+80h] BYREF

  Process = a2;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF814,
      0LL,
      0LL,
      2u,
      &v38);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v5 = *(_QWORD *)a1;
  v6 = (void *)*((_QWORD *)a1 + 21);
  v19 = 0LL;
  v7 = 0LL;
  v21 = -1LL;
  v18 = -1LL;
  v17 = 0LL;
  TransitiveAppliedTaskCompletions = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v6, 0, &v19);
  v10 = v19;
  v11 = HostByProcessHandle;
  if ( HostByProcessHandle < 0
    || (v21 = *(_QWORD *)(v19 - 32),
        v12 = RmHamFindHostByProcessHandle(v5, Process, 0, &v17),
        v7 = v17,
        v11 = v12,
        v12 < 0) )
  {
    v13 = v18;
  }
  else
  {
    v13 = *((_QWORD *)v17 - 4);
    if ( *(_QWORD *)(*((_QWORD *)v17 + 99) + 88LL) == *(_QWORD *)(*(_QWORD *)(v10 + 792) + 88LL) )
    {
      TransitiveAppliedTaskCompletions = HampHostGetTransitiveAppliedTaskCompletions(v17);
      *a3 = TransitiveAppliedTaskCompletions;
      v11 = 0;
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v14 = (*(_QWORD *)(v10 + 600))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v10 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v14 = (*((_QWORD *)v7 + 75))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    ProcessId = GetProcessId(Process);
    v22 = TransitiveAppliedTaskCompletions;
    LODWORD(v18) = ProcessId;
    LODWORD(v19) = *((_DWORD *)a1 + 35);
    Process = (HANDLE)v21;
    v36 = &v18;
    v34 = &v19;
    p_Process = &Process;
    v30 = &v22;
    v28 = &v23;
    v26 = &v17;
    v23 = v13;
    LODWORD(v17) = v11;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 8LL;
    v31 = 8LL;
    v29 = 8LL;
    v27 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF58C,
      0LL,
      0LL,
      8u,
      &v25);
  }
  return v11;
}
