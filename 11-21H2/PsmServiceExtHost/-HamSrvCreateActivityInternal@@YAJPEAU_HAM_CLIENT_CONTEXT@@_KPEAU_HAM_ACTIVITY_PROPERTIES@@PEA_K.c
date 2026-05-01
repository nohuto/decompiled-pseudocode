/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180001564
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800344CC (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 * Callees:
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002488 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000266C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800026DC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800045C4 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  int v7; // r8d
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  const unsigned __int16 *v10; // rbp
  unsigned int v11; // r12d
  union _RM_SID *v12; // r13
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rbx
  unsigned int v15; // edi
  int v16; // eax
  struct _HAM_ACTIVITY *v17; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+B8h] [rbp+10h]
  struct _HAM_ACTIVITY *v22; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 *v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v21 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *(_DWORD *)a3;
  v8 = *(_QWORD *)a1;
  v22 = 0LL;
  v9 = -1LL;
  v20 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  Host = RmHamFindHost(v8, a2, (v7 & 0x2000000) != 0, &v20);
  v14 = v20;
  v15 = Host;
  if ( Host >= 0 )
  {
    v11 = *((_DWORD *)v20 + 140);
    v10 = (const unsigned __int16 *)((char *)v20 + 24);
    v12 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v20 + 488);
    v16 = HampActCreate(a1, *(struct _HOST_ACTIVITY_MANAGER **)a1, v20, a3, 0, 0LL, &v22);
    v17 = v22;
    v15 = v16;
    if ( v16 >= 0 )
    {
      v15 = 0;
      v9 = *((_QWORD *)v22 + 5);
      *v23 = v9;
    }
    if ( v17 )
      CemRcObjectDereference();
  }
  HampSrvTraceActivityCreateStop(v15, v9, 0LL, v10, v11, v12, v21, a3, 0, 0, 0);
  if ( v14 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v14 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v14 - 64));
    RmpReleaseGlobalLock();
  }
  return v15;
}
