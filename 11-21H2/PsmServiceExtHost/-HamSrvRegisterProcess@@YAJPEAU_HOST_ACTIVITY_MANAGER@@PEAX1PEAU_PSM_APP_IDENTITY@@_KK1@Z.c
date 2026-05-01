/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18000AB58
 * Callers:
 *     PsmHamRegisterProcess @ 0x18000A3A0 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x18000A3E8 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18000A4D8 (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AAF8 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEA.c)
 *     CempUtilValidateSid @ 0x18000AE40 (CempUtilValidateSid.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2@Z @ 0x18000AEA8 (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7)
{
  DWORD v9; // ebx
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rax
  int ProcessFullIdentity; // ebx
  __int64 v18; // r9
  int v19; // eax
  struct _RM_HAM_ACTIVITY_HOST *v20; // rdi
  int v21; // eax
  unsigned int v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v27; // [rsp+58h] [rbp-A8h]
  void *v28; // [rsp+60h] [rbp-A0h]
  void *v29; // [rsp+68h] [rbp-98h]
  struct _GUID v30; // [rsp+70h] [rbp-90h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[464]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v34; // [rsp+324h] [rbp+224h]
  unsigned int v35; // [rsp+328h] [rbp+228h]
  unsigned __int64 v36; // [rsp+330h] [rbp+230h]

  v28 = a7;
  v29 = a3;
  v27 = a1;
  HampSrvTraceHostRegisterProcessStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  v10 = -1LL;
  v25 = 0LL;
  v26 = -1LL;
  HampSystemQueryProcessAppSessionGuid(a2, &v30);
  if ( (a6 & 4) != 0 )
    v11 = 8;
  else
    v11 = (a6 & 8) != 0 ? 4 : 2;
  v24[0] = *(_DWORD *)a4;
  v24[1] = RtlLengthSid((char *)a4 + 472);
  if ( (unsigned __int8)PsmIsValidKey((char *)a4 + 8) )
  {
    if ( (int)CempUtilValidateSid((char *)a4 + 472) < 0 )
    {
      ProcessFullIdentity = -1073741583;
    }
    else if ( ((v11 - 1) & v11) != 0 || (_BitScanForward(&v12, v11), v12 >= 4) )
    {
      ProcessFullIdentity = -1073741580;
    }
    else if ( a5 == -1LL )
    {
      ProcessFullIdentity = -1073741579;
    }
    else
    {
      memset_0(v32, 0, 0x228uLL);
      v13 = 232LL;
      v14 = v32;
      do
      {
        if ( v13 == -2147483414 )
          break;
        v15 = *(_WORD *)((char *)v14 + (struct _PSM_APP_IDENTITY *)((char *)a4 + 8) - (struct _PSM_APP_IDENTITY *)v32);
        if ( !v15 )
          break;
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v16 = v14 - 1;
      if ( v13 )
        v16 = v14;
      *v16 = 0;
      RtlCopySid(0x44u, DestinationSid, (char *)a4 + 472);
      v34 = v24[0];
      v35 = v11;
      v36 = a5;
      ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, v24, 0LL);
      if ( ProcessFullIdentity >= 0 )
      {
        LOBYTE(v18) = v24[0] == 0;
        v19 = HampHostFindOrCreate((__int64)v27, (__int64)v32, 0LL, v18, &v25);
        v20 = v25;
        ProcessFullIdentity = v19;
        if ( v19 >= 0 )
        {
          v21 = HampHostRegisterProcess(v25, a2, v29, a4, a5, a6, v28, &v26);
          v10 = v26;
          ProcessFullIdentity = v21;
          if ( v21 >= 0 )
            ProcessFullIdentity = 0;
        }
        if ( v20 )
        {
          RmpAcquireGlobalLock();
          if ( (*((_QWORD *)v20 + 75))-- == 1LL )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v20 - 64));
          RmpReleaseGlobalLock();
        }
      }
    }
  }
  else
  {
    ProcessFullIdentity = -1073741584;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, a4, a5, a6, &v30, v10);
  return (unsigned int)ProcessFullIdentity;
}
