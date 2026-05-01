/*
 * XREFs of ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C
 * Callers:
 *     HamRpcSrvRegisterDesktopBridgeProcess @ 0x18003A640 (HamRpcSrvRegisterDesktopBridgeProcess.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x18000A3E8 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18000A4D8 (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     CempGetTokenHostInfo @ 0x18000A820 (CempGetTokenHostInfo.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AAF8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2@Z @ 0x18000AEA8 (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003A980 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HamSrvRegisterDesktopBridgeProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        unsigned int a3,
        void *a4)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rsi
  unsigned __int64 v8; // r13
  int ProcessFullIdentity; // ebx
  unsigned int v11; // ebx
  char v12; // al
  ULONG v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  NTSTATUS v16; // eax
  int v17; // edi
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+48h] [rbp-B8h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v27; // [rsp+84h] [rbp-7Ch]
  unsigned __int16 v28[232]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE DestinationSid[68]; // [rsp+258h] [rbp+158h] BYREF
  char v30; // [rsp+29Ch] [rbp+19Ch]
  char v31; // [rsp+29Dh] [rbp+19Dh]
  unsigned __int16 v32[232]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE Sid[68]; // [rsp+470h] [rbp+370h] BYREF
  int v34; // [rsp+4B4h] [rbp+3B4h]
  unsigned __int64 v35; // [rsp+4C0h] [rbp+3C0h]
  _BYTE v36[144]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v21 = 0LL;
  Handle = 0LL;
  v24 = -1LL;
  v7 = 0LL;
  v8 = -1LL;
  memset_0(&v26, 0, 0x220uLL);
  RtlCopySid(0xCu, DestinationSid, (char *)a1 + 908);
  HampSrvTraceHostRegisterProcessStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v36);
  if ( !a2 )
  {
    ProcessFullIdentity = -1073741816;
    v25 = 0LL;
    goto LABEL_17;
  }
  HampSystemQueryProcessAppSessionGuid(a2, &v25);
  ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, &v20, 0LL);
  if ( ProcessFullIdentity < 0 )
  {
LABEL_17:
    v17 = 0;
    goto LABEL_18;
  }
  if ( (a3 & 0x182) != a3 )
  {
    ProcessFullIdentity = -1073741811;
    goto LABEL_17;
  }
  TokenHandle = 0LL;
  ProcessFullIdentity = NtOpenProcessToken(a2, 8u, &TokenHandle);
  if ( ProcessFullIdentity >= 0 )
    ProcessFullIdentity = CempGetTokenHostInfo(TokenHandle, (char *)v32);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( ProcessFullIdentity < 0 )
    goto LABEL_17;
  v11 = v20;
  v8 = v35;
  v26 = v34;
  v12 = v30;
  if ( !v20 )
    v12 = 4;
  v31 |= 1u;
  v30 = v12;
  v13 = RtlLengthSid(Sid);
  memcpy_0(DestinationSid, Sid, v13);
  v14 = -1LL;
  do
    ++v14;
  while ( v32[v14] );
  v27 = 2 * v14 + 2;
  RtlStringCbCopyW(v28, v27, v32);
  LOBYTE(v15) = v11 == 0;
  ProcessFullIdentity = HampHostFindOrCreate((__int64)a1, (__int64)v32, v11 == 0 ? 2 : 0, v15, &v21);
  if ( ProcessFullIdentity < 0 )
  {
    v7 = v21;
    goto LABEL_17;
  }
  v16 = NtOpenProcessTokenEx(a2, 8u, 0, &Handle);
  v7 = v21;
  ProcessFullIdentity = v16;
  if ( v16 >= 0 )
  {
    ProcessFullIdentity = HampHostRegisterProcess(v21, a2, Handle, (struct _PSM_APP_IDENTITY *)&v26, v35, a3, a4, &v24);
    if ( ProcessFullIdentity >= 0 )
    {
      ProcessFullIdentity = 0;
      goto LABEL_17;
    }
  }
  v17 = 1;
LABEL_18:
  if ( Handle )
    NtClose(Handle);
  if ( v17 )
    HampHostQueueTerminateEx((__int64)v7, 1u, 0x900u, 0LL, 0, 0, 0LL, &v20);
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 75))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, (struct _PSM_APP_IDENTITY *)&v26, v8, a3, &v25, v24);
  return (unsigned int)ProcessFullIdentity;
}
