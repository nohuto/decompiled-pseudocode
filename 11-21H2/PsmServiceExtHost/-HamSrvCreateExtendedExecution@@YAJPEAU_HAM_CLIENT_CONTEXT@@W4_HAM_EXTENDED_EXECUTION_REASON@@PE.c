/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18006F564
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x180073760 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002488 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000266C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800026DC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180005E58 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800423C0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x18007B85C (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18007B9B8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const unsigned __int16 *v4; // rdi
  __int64 v5; // rsi
  struct _HAM_ACTIVITY *v7; // r14
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int v9; // r13d
  const unsigned __int16 *v10; // r12
  int HostByProcessHandle; // eax
  __int64 v12; // r8
  int v13; // edi
  unsigned int v14; // r14d
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v20; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-88h]
  union _RM_SID *v23; // [rsp+80h] [rbp-80h]
  unsigned __int64 v24; // [rsp+88h] [rbp-78h]
  _QWORD *v25; // [rsp+90h] [rbp-70h]
  _OWORD v26[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+E0h] [rbp-20h]
  _BYTE v28[400]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v29[144]; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int16 v30[232]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int16 v31[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v25 = (_QWORD *)a4;
  v4 = (const unsigned __int16 *)a3;
  v5 = (int)a2;
  HampSrvTraceActivityCreateStart(a1, a2, a3, a4);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  v7 = 0LL;
  v20 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v24 = -1LL;
  v19 = 0;
  v23 = 0LL;
  v22 = -1LL;
  if ( dword_1800DC218 )
  {
    v9 = 1;
    memset_0(v30, 0, sizeof(v30));
  }
  else
  {
    v9 = 0;
  }
  v10 = L"BAD_INPUT";
  if ( !v4 || !*v4 )
  {
    if ( (unsigned int)v5 > 4 )
      v4 = L"BAD_INPUT";
    else
      v4 = (const unsigned __int16 *)(&EeDefaultDescription)[v5];
  }
  memset_0(v31, 0, sizeof(v31));
  StringCbPrintfW(v31, 0x80uLL, L"Ee%d_%s", (unsigned int)v5, v4);
  if ( (unsigned int)v5 <= 4 )
    v10 = (const unsigned __int16 *)(&EeResourcePolicyNames)[v5];
  HampActivityPropertiesInitialize(v31, v10, (struct _HAM_ACTIVITY_PROPERTIES *)v28);
  if ( (unsigned int)v5 > 4 )
  {
    v13 = -1073741584;
LABEL_24:
    if ( v7 )
      CemRcObjectDereference(v7);
    v14 = v19;
    goto LABEL_27;
  }
  HostByProcessHandle = RmHamFindHostByProcessHandle(*(_QWORD *)a1, *(void **)(a1 + 168), 0, &v21);
  v8 = v21;
  v13 = HostByProcessHandle;
  if ( HostByProcessHandle < 0 )
  {
LABEL_15:
    v14 = 0;
    goto LABEL_27;
  }
  if ( *((_BYTE *)v21 + 592) )
  {
    v13 = -1073741811;
    goto LABEL_15;
  }
  if ( v9 )
  {
    StringCchCopyW((char *)v30, 232LL, (char *)v21 + 24);
    v15 = *(_OWORD *)((char *)v8 + 488);
    v22 = *((_QWORD *)v8 - 4);
    v26[0] = v15;
    v26[1] = *(_OWORD *)((char *)v8 + 504);
    v26[2] = *(_OWORD *)((char *)v8 + 520);
    v26[3] = *(_OWORD *)((char *)v8 + 536);
    v27 = *((_DWORD *)v8 + 138);
    v23 = (union _RM_SID *)v26;
  }
  v14 = *((_DWORD *)v8 + 140);
  v19 = v14;
  if ( v14 != 2 )
  {
    v13 = -1073741790;
    goto LABEL_27;
  }
  v13 = HampExtendedExecutionCheckPolicy(v28, *(_QWORD *)(a1 + 160), v12, (unsigned int)v5);
  if ( v13 >= 0 )
  {
    v16 = HampActCreate(
            (struct _HAM_CLIENT_CONTEXT *)a1,
            *(struct _HOST_ACTIVITY_MANAGER **)a1,
            v8,
            (struct _HAM_ACTIVITY_PROPERTIES *)v28,
            0,
            0LL,
            &v20);
    v7 = v20;
    v13 = v16;
    if ( v16 >= 0 )
    {
      v13 = 0;
      v24 = *((_QWORD *)v20 + 5);
      *v25 = v24;
    }
    goto LABEL_24;
  }
LABEL_27:
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( v9 )
    HampSrvTraceActivityCreateStop(
      v13,
      v24,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v30,
      v14,
      v23,
      v22,
      (struct _HAM_ACTIVITY_PROPERTIES *)v28,
      *(_DWORD *)(a1 + 140),
      0,
      0);
  return (unsigned int)v13;
}
