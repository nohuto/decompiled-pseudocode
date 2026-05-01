/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071C4C
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x1800557A0 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x1800028A0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002910 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18004BDD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E0C0 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180081320 (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18008145C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, int a2, const unsigned __int16 *a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r14
  struct _HAM_ACTIVITY *v7; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int v9; // r12d
  const unsigned __int16 *v10; // r15
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  int v14; // edi
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int Pid; // eax
  int v20; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v21; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-88h]
  union _RM_SID *v24; // [rsp+80h] [rbp-80h]
  unsigned __int64 v25; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v26; // [rsp+90h] [rbp-70h]
  unsigned __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+E0h] [rbp-20h]
  _BYTE v30[400]; // [rsp+F0h] [rbp-10h] BYREF
  char v31[144]; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int16 v32[232]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int16 v33[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v26 = a4;
  v5 = a2;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v31);
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v25 = -1LL;
  v20 = 0;
  v24 = 0LL;
  v23 = -1LL;
  if ( dword_1800DB218 )
  {
    v9 = 1;
    memset_0(v32, 0, sizeof(v32));
  }
  else
  {
    v9 = 0;
  }
  v10 = L"BAD_INPUT";
  if ( !a3 || !*a3 )
  {
    if ( (v5 & 0x80000000) != 0LL || v5 >= 5 )
      a3 = L"BAD_INPUT";
    else
      a3 = (const unsigned __int16 *)(&EeDefaultDescription)[v5];
  }
  memset_0(v33, 0, sizeof(v33));
  StringCbPrintfW(v33, 0x80uLL, L"Ee%d_%s", (unsigned int)v5, a3);
  if ( (v5 & 0x80000000) == 0LL && v5 < 5 )
    v10 = (const unsigned __int16 *)(&EeResourcePolicyNames)[v5];
  HampActivityPropertiesInitialize(v33, v10, (struct _HAM_ACTIVITY_PROPERTIES *)v30);
  if ( (unsigned int)v5 > 4 )
  {
    v14 = -1073741584;
LABEL_26:
    if ( v7 )
      CemRcObjectDereference(v7);
    LODWORD(v7) = v20;
    goto LABEL_29;
  }
  v12 = HampHostFindByClient(a1, 0, &v22, &v27);
  v8 = v22;
  v14 = v12;
  if ( v12 < 0 )
    goto LABEL_29;
  if ( *((_BYTE *)v22 + 592) )
  {
    v14 = -1073741811;
    goto LABEL_29;
  }
  if ( v9 )
  {
    StringCchCopyW((char *)v32, 232LL, (char *)v22 + 24);
    v15 = *(_OWORD *)((char *)v8 + 488);
    v23 = *((_QWORD *)v8 - 4);
    v28[0] = v15;
    v28[1] = *(_OWORD *)((char *)v8 + 504);
    v28[2] = *(_OWORD *)((char *)v8 + 520);
    v28[3] = *(_OWORD *)((char *)v8 + 536);
    v29 = *((_DWORD *)v8 + 138);
    v24 = (union _RM_SID *)v28;
  }
  LODWORD(v7) = *((_DWORD *)v8 + 140);
  v20 = (int)v7;
  if ( (_DWORD)v7 != 2 )
  {
    v14 = -1073741790;
    goto LABEL_29;
  }
  v14 = HampExtendedExecutionCheckPolicy(v30, *(_QWORD *)(a1 + 184), v13, (unsigned int)v5);
  if ( v14 >= 0 )
  {
    v16 = HampActCreate(
            (struct _HAM_CLIENT_CONTEXT *)a1,
            (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *(unsigned __int8 *)(a1 + 164)
                                            - 16),
            v8,
            (struct _HAM_ACTIVITY_PROPERTIES *)v30,
            0,
            0LL,
            &v21);
    v7 = v21;
    v14 = v16;
    if ( v16 >= 0 )
    {
      v14 = 0;
      v25 = *((_QWORD *)v21 + 5);
      *v26 = v25;
    }
    goto LABEL_26;
  }
LABEL_29:
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v8 - 64) & -(__int64)(v8 != 0LL)));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    Pid = HampClientGetPid((struct _HAM_CLIENT_CONTEXT *)a1, v11);
    HampSrvTraceActivityCreateStop(
      v14,
      v25,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v32,
      (unsigned int)v7,
      v24,
      v23,
      (struct _HAM_ACTIVITY_PROPERTIES *)v30,
      Pid,
      0,
      0);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v14;
}
