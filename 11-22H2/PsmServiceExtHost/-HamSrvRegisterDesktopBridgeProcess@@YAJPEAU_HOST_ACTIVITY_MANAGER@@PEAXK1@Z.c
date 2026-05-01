/*
 * XREFs of ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180001F1C
 * Callers:
 *     HamRpcSrvRegisterDesktopBridgeProcess @ 0x180001EF0 (HamRpcSrvRegisterDesktopBridgeProcess.c)
 * Callees:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800022C8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     RtlStringCopyWorkerW @ 0x180002328 (RtlStringCopyWorkerW.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180002384 (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x180010D94 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013F28 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180017E20 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C850 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     CempGetTokenHostInfo @ 0x18002CA40 (CempGetTokenHostInfo.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18004CCCC (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall HamSrvRegisterDesktopBridgeProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        unsigned int a3,
        void *a4)
{
  unsigned int v4; // r15d
  __int64 v8; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  unsigned __int64 v10; // r13
  NTSTATUS ProcessFullIdentity; // ebx
  unsigned int v12; // r13d
  char v13; // al
  ULONG v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD i; // edi
  int v18; // eax
  int v19; // eax
  int v20; // edi
  void *TokenHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v27; // [rsp+70h] [rbp-90h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v28; // [rsp+80h] [rbp-80h]
  void *v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-6Ch]
  _BYTE v32[464]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE DestinationSid[68]; // [rsp+268h] [rbp+168h] BYREF
  char v34; // [rsp+2ACh] [rbp+1ACh]
  char v35; // [rsp+2ADh] [rbp+1ADh]
  _WORD v36[232]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE Sid[68]; // [rsp+480h] [rbp+380h] BYREF
  int v38; // [rsp+4C4h] [rbp+3C4h]
  unsigned __int64 v39; // [rsp+4D0h] [rbp+3D0h]
  _BYTE v40[144]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v4 = 0;
  v28 = a1;
  v24 = 0LL;
  Handle = 0LL;
  v29 = a4;
  v8 = -1LL;
  v26 = -1LL;
  v9 = 0LL;
  v10 = -1LL;
  memset_0(&v30, 0, 0x220uLL);
  RtlCopySid(0xCu, DestinationSid, (char *)a1 + 1212);
  HampSrvTraceHostRegisterProcessStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v40);
  if ( a2 )
  {
    HampSystemQueryProcessAppSessionGuid(a2, &v27);
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, &v23, 0LL);
    if ( ProcessFullIdentity >= 0 )
    {
      if ( (a3 & 0x382) == a3 )
      {
        TokenHandle = 0LL;
        ProcessFullIdentity = NtOpenProcessToken(a2, 8u, &TokenHandle);
        if ( ProcessFullIdentity >= 0 )
          ProcessFullIdentity = CempGetTokenHostInfo(TokenHandle, v36);
        if ( TokenHandle )
          NtClose(TokenHandle);
        if ( ProcessFullIdentity >= 0 )
        {
          v12 = v23;
          TokenHandle = (void *)v39;
          v30 = v38;
          v13 = v34;
          if ( !v23 )
            v13 = 4;
          v35 |= 1u;
          v34 = v13;
          v14 = RtlLengthSid(Sid);
          memcpy_0(DestinationSid, Sid, v14);
          do
            ++v8;
          while ( v36[v8] );
          v31 = 2 * v8 + 2;
          if ( (unsigned __int64)v31 >> 1 )
            RtlStringCopyWorkerW(v32, (unsigned __int64)(unsigned int)(2 * v8 + 2) >> 1, v15, v36);
          ProcessFullIdentity = NtOpenProcessTokenEx(a2, 8u, 0, &Handle);
          if ( ProcessFullIdentity >= 0 )
          {
            for ( i = 1; ; i *= 2 )
            {
              LOBYTE(v16) = v12 == 0;
              v18 = HampHostFindOrCreate(v28, v36, v12 == 0 ? 2 : 0, v16, &v24);
              v9 = v24;
              ProcessFullIdentity = v18;
              if ( v18 < 0 )
                break;
              v19 = HampHostRegisterProcess(v24, a2, Handle, (struct _PSM_APP_IDENTITY *)&v30, v39, a3, v29, &v26);
              ProcessFullIdentity = v19;
              if ( v19 != -1073741790 )
              {
                if ( v19 >= 0 )
                {
                  ProcessFullIdentity = 0;
                  break;
                }
LABEL_34:
                v10 = (unsigned __int64)TokenHandle;
                v20 = 1;
                goto LABEL_27;
              }
              if ( v4 >= 0x3E8 )
                goto LABEL_34;
              RmHamHostDereference(v9);
              v24 = 0LL;
              Sleep(i);
              v4 += i;
            }
          }
          v10 = (unsigned __int64)TokenHandle;
        }
      }
      else
      {
        ProcessFullIdentity = -1073741811;
      }
    }
  }
  else
  {
    ProcessFullIdentity = -1073741816;
    v27 = 0LL;
  }
  v20 = 0;
LABEL_27:
  if ( Handle )
    NtClose(Handle);
  if ( v20 )
    HampHostQueueTerminateEx(v9, 1LL, 2304LL);
  if ( v9 )
    RmHamHostDereference(v9);
  CempLockTrackerClearForThread(HampLockTrackerId);
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, (struct _PSM_APP_IDENTITY *)&v30, v10, a3, &v27, v26, v4);
  return (unsigned int)ProcessFullIdentity;
}
