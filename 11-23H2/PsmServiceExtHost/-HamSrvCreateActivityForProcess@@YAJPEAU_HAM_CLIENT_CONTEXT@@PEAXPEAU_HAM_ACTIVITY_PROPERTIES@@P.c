/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000241C
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x180002410 (HamRpcSrvCreateActivityForProcess.c)
 *     ?HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18004AEA0 (-HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800026F4 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180002770 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x1800028A0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002910 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x180013024 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C820 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180030560 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  DWORD ProcessId; // r12d
  const unsigned __int16 *v5; // rdi
  unsigned __int64 v6; // r13
  signed int ProcessFullIdentity; // ebx
  bool v11; // zf
  bool v12; // bl
  __int64 v13; // r8
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rdi
  int v16; // eax
  struct _HAM_ACTIVITY *v17; // rcx
  unsigned int v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+68h] [rbp-98h]
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY *v22; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-80h]
  union _RM_SID *v24; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[464]; // [rsp+A0h] [rbp-60h] BYREF
  char v27; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v28; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 v29; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v30[144]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v25 = a4;
  v22 = 0LL;
  v21 = 0LL;
  ProcessId = 0;
  v5 = 0LL;
  v20 = 0;
  v24 = 0LL;
  v6 = -1LL;
  v23 = -1LL;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  if ( HampUtilCheckAndSanitizeActivityProperties(a3) )
  {
    if ( HampClientIsActive(a1) )
    {
      if ( a2 )
      {
        ProcessId = GetProcessId(a2);
        if ( ProcessId )
        {
          ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, v19, (struct _RM_PSM_HOST_INFO *)v26);
          if ( ProcessFullIdentity >= 0 )
          {
            v11 = v19[0] == 0;
            *(_QWORD *)v19 = v26;
            v20 = v28;
            v12 = v11;
            v24 = (union _RM_SID *)&v27;
            v23 = v29;
            if ( HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v26, a3) )
            {
              if ( ((*(_DWORD *)a3 & 0x2000000) != 0) == v12 )
              {
                LOBYTE(v13) = v12;
                HostWithFullInfo = RmHamFindHostWithFullInfo(
                                     (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                   - 48LL * *((unsigned __int8 *)a1 + 164)
                                   - 16,
                                     v26,
                                     v13,
                                     &v21);
                v15 = v21;
                ProcessFullIdentity = HostWithFullInfo;
                if ( HostWithFullInfo >= 0 )
                {
                  ProcessFullIdentity = HampHostQueryHostGenerationForProcess(v21, a2, (unsigned __int64 *)&v21);
                  if ( ProcessFullIdentity >= 0 )
                  {
                    v16 = HampActCreate(
                            a1,
                            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                                            - 16),
                            v15,
                            a3,
                            0,
                            (unsigned __int64)v21,
                            &v22);
                    v17 = v22;
                    ProcessFullIdentity = v16;
                    if ( v16 >= 0 )
                    {
                      ProcessFullIdentity = 0;
                      v6 = *((_QWORD *)v22 + 5);
                      *v25 = v6;
                    }
                    if ( v17 )
                      CemRcObjectDereference();
                  }
                }
                if ( v15 )
                {
                  RmpAcquireGlobalLock();
                  v11 = (*((_QWORD *)v15 + 75))-- == 1LL;
                  if ( v11 )
                    RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)v15 - 64) & -(__int64)(v15 != 0LL)));
                  RmpReleaseGlobalLock();
                }
              }
              else
              {
                ProcessFullIdentity = -1073741776;
              }
            }
            else
            {
              ProcessFullIdentity = -1073741583;
            }
            v5 = *(const unsigned __int16 **)v19;
          }
        }
        else if ( (int)GetLastError() > 0 )
        {
          ProcessFullIdentity = (unsigned __int16)GetLastError() | 0xC0070000;
        }
        else
        {
          ProcessFullIdentity = GetLastError();
        }
      }
      else
      {
        ProcessFullIdentity = -1073741816;
      }
    }
    else
    {
      ProcessFullIdentity = -1073741661;
    }
  }
  else
  {
    ProcessFullIdentity = -1073741583;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  HampSrvTraceActivityCreateStop(ProcessFullIdentity, v6, a1, v5, v20, v24, v23, a3, ProcessId, 0, 0);
  return (unsigned int)ProcessFullIdentity;
}
