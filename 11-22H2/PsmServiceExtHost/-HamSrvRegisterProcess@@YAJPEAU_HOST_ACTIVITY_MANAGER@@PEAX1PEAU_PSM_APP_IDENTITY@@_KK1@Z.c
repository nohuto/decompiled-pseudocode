/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18002D700
 * Callers:
 *     PsmHamRegisterProcess @ 0x18002DC60 (PsmHamRegisterProcess.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x180010D94 (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C850 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DAA4 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800309B0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18004CCCC (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
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
  struct _RM_HAM_ACTIVITY_HOST *v10; // r14
  unsigned int v11; // esi
  char *v12; // r15
  ULONG v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rdx
  _WORD *v16; // rax
  __int16 v17; // cx
  int ProcessFullIdentity; // ebx
  void *v19; // rsi
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v21; // rdi
  struct _PSM_APP_IDENTITY *v22; // rdi
  bool v23; // zf
  int v25; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v26; // [rsp+40h] [rbp-C0h] BYREF
  struct _PSM_APP_IDENTITY *v27; // [rsp+48h] [rbp-B8h]
  struct _GUID v28; // [rsp+50h] [rbp-B0h] BYREF
  void *v29; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v31; // [rsp+70h] [rbp-90h]
  void *v32; // [rsp+78h] [rbp-88h]
  void *v33; // [rsp+80h] [rbp-80h]
  _BYTE ProcessInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v35; // [rsp+94h] [rbp-6Ch]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v37; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v38; // [rsp+CCh] [rbp-34h]
  _BYTE TlsValue[144]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v40[464]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE DestinationSid[68]; // [rsp+350h] [rbp+250h] BYREF
  int v42; // [rsp+394h] [rbp+294h]
  unsigned int v43; // [rsp+398h] [rbp+298h]
  unsigned __int64 v44; // [rsp+3A0h] [rbp+2A0h]

  v32 = a7;
  v27 = a4;
  v33 = a3;
  v29 = a2;
  v31 = a1;
  HampSrvTraceHostRegisterProcessStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  v30 = -1LL;
  v10 = 0LL;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  v28.Data1 = v35;
  v28.Data2 = v37;
  v28.Data3 = v38;
  *(_QWORD *)v28.Data4 = v36;
  if ( (a6 & 4) != 0 )
  {
    v11 = 8;
  }
  else
  {
    v11 = 2;
    if ( (a6 & 8) != 0 )
      v11 = 4;
  }
  v12 = (char *)a4 + 472;
  LODWORD(v26) = *(_DWORD *)a4;
  v13 = RtlLengthSid((char *)a4 + 472);
  if ( (unsigned __int8)PsmIsValidKey((char *)a4 + 8) )
  {
    if ( v13 >= 0xC && RtlValidSid(v12) && RtlLengthSid(v12) == v13 )
    {
      if ( ((v11 - 1) & v11) != 0 || (_BitScanForward(&v14, v11), v14 >= 4) )
      {
        v25 = -1073741581;
      }
      else
      {
        if ( a5 != -1LL )
        {
          memset_0(v40, 0, 0x228uLL);
          v15 = 232LL;
          v16 = v40;
          while ( v15 != -2147483414 )
          {
            v17 = *(_WORD *)((char *)v16 + (struct _PSM_APP_IDENTITY *)((char *)a4 + 8)
                                         - (struct _PSM_APP_IDENTITY *)v40);
            if ( !v17 )
              break;
            *v16++ = v17;
            if ( !--v15 )
            {
              --v16;
              break;
            }
          }
          *v16 = 0;
          RtlCopySid(0x44u, DestinationSid, v12);
          v42 = (int)v26;
          v43 = v11;
          v44 = a5;
          goto LABEL_23;
        }
        v25 = -1073741580;
      }
    }
    else
    {
      v25 = -1073741584;
    }
  }
  else
  {
    v25 = -1073741585;
  }
  ProcessFullIdentity = v25 + 1;
  if ( ProcessFullIdentity < 0 )
  {
    v19 = v29;
    goto LABEL_35;
  }
LABEL_23:
  v19 = v29;
  ProcessFullIdentity = HampSystemGetProcessFullIdentity(v29, (unsigned int *)&v26, 0LL);
  if ( ProcessFullIdentity < 0 )
    goto LABEL_35;
  v26 = 0LL;
  Host = RmHamFindOrCreateHost(v31);
  v21 = v26;
  ProcessFullIdentity = Host;
  if ( Host < 0 || (ProcessFullIdentity = HampHostCheckCompletePackageInsertion(v26), ProcessFullIdentity < 0) )
  {
    if ( v21 )
    {
      RmpAcquireGlobalLock();
      v23 = (*((_QWORD *)v21 + 75))-- == 1LL;
      if ( v23 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v21 - 64));
      RmpReleaseGlobalLock();
    }
    if ( ProcessFullIdentity >= 0 )
      goto LABEL_27;
LABEL_35:
    v22 = v27;
    goto LABEL_33;
  }
  v10 = v21;
LABEL_27:
  v22 = v27;
  ProcessFullIdentity = HampHostRegisterProcess(v10, v19, v33, v27, a5, a6, v32, &v30);
  if ( ProcessFullIdentity >= 0 )
    ProcessFullIdentity = 0;
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v23 = (*((_QWORD *)v10 + 75))-- == 1LL;
    if ( v23 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
  }
LABEL_33:
  CempLockTrackerClearForThread(HampLockTrackerId);
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, v19, v22, a5, a6, &v28, v30, 0);
  return (unsigned int)ProcessFullIdentity;
}
