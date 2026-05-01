/*
 * XREFs of ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A610
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000A560 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18000AB58 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180072020 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180072264 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     CempGetTokenHostInfo @ 0x18000A820 (CempGetTokenHostInfo.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18003BE58 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HampSystemGetProcessFullIdentity(void *a1, unsigned int *a2, struct _RM_PSM_HOST_INFO *a3)
{
  int v3; // ebp
  __int64 v6; // rdx
  NTSTATUS TokenHostInfo; // ebx
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // rdx
  struct _RM_PSM_HOST_INFO *v12; // rax
  __int16 v13; // cx
  int Policy_Internal; // eax
  int v16; // [rsp+30h] [rbp-298h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-290h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE v20[464]; // [rsp+50h] [rbp-278h] BYREF
  _BYTE SourceSid[68]; // [rsp+220h] [rbp-A8h] BYREF
  int v22; // [rsp+264h] [rbp-64h]
  int v23; // [rsp+268h] [rbp-60h]
  __int64 v24; // [rsp+270h] [rbp-58h]

  v3 = 0x10000;
  v16 = 0x10000;
  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    if ( a2 )
    {
      Policy_Internal = AppModelPolicy_GetPolicy_Internal(TokenHandle, v6, &v16, v19, v18);
      TokenHostInfo = Policy_Internal | 0x10000000;
      if ( Policy_Internal < 0 )
        goto LABEL_14;
      v3 = v16;
    }
    if ( a3 )
    {
      TokenHostInfo = CempGetTokenHostInfo(TokenHandle, v20);
      if ( TokenHostInfo < 0 )
        goto LABEL_14;
      v8 = v24;
      v9 = v23;
      v10 = v22;
      memset_0(a3, 0, 0x228uLL);
      v11 = 232LL;
      v12 = a3;
      while ( v11 != -2147483414 )
      {
        v13 = *(_WORD *)((char *)v12 + v20 - (_BYTE *)a3);
        if ( !v13 )
          break;
        *(_WORD *)v12 = v13;
        v12 = (struct _RM_PSM_HOST_INFO *)((char *)v12 + 2);
        if ( !--v11 )
        {
          v12 = (struct _RM_PSM_HOST_INFO *)((char *)v12 - 2);
          break;
        }
      }
      *(_WORD *)v12 = 0;
      RtlCopySid(0x44u, (char *)a3 + 464, SourceSid);
      *((_DWORD *)a3 + 133) = v10;
      *((_DWORD *)a3 + 134) = v9;
      *((_QWORD *)a3 + 68) = v8;
    }
    if ( a2 )
      *a2 = v3 == 65537;
    TokenHostInfo = 0;
  }
LABEL_14:
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)TokenHostInfo;
}
