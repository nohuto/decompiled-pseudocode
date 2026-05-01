/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18007187C
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18000FFF4 (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 * Callees:
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002824 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x1800028A0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002910 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r8d
  unsigned __int64 v10; // rcx
  const unsigned __int16 *v11; // r14
  unsigned int v12; // r15d
  union _RM_SID *v13; // rbp
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  unsigned int v16; // edi
  char *v17; // rax
  char *v18; // rax
  int v19; // eax
  struct _HAM_ACTIVITY *v20; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+10h]
  struct _HAM_ACTIVITY *v25; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 *v26; // [rsp+C8h] [rbp+20h]

  v26 = a4;
  v24 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *((unsigned __int8 *)a1 + 164);
  v8 = -1LL;
  v9 = *(_DWORD *)a3;
  v10 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  v12 = 0;
  v13 = 0LL;
  Host = RmHamFindHost(v10 - 48 * v7 - 16, a2, (v9 & 0x2000000) != 0, &v23);
  v15 = v23;
  v16 = Host;
  if ( Host >= 0 )
  {
    v11 = (const unsigned __int16 *)((char *)v23 + 24);
    if ( v23 )
      v17 = (char *)v23 - 64;
    else
      v17 = 0LL;
    v13 = (union _RM_SID *)(v17 + 552);
    if ( v23 )
      v18 = (char *)v23 - 64;
    else
      v18 = 0LL;
    v12 = *((_DWORD *)v18 + 156);
    v19 = HampActCreate(
            a1,
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                            - 16),
            v23,
            a3,
            0,
            0LL,
            &v25);
    v20 = v25;
    v16 = v19;
    if ( v19 >= 0 )
    {
      v16 = 0;
      v8 = *((_QWORD *)v25 + 5);
      *v26 = v8;
    }
    if ( v20 )
      CemRcObjectDereference(v20);
  }
  HampSrvTraceActivityCreateStop(v16, v8, 0LL, v11, v12, v13, v24, a3, 0, 0, 0);
  if ( v15 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v15 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v15 - 64) & -(__int64)(v15 != 0LL)));
    RmpReleaseGlobalLock();
  }
  return v16;
}
