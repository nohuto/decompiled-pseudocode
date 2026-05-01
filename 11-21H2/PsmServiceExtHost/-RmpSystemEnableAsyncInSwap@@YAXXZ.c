/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x180093414
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004B758 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // edi
  NTSTATUS v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp-29h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v5[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD SystemInformation[2]; // [rsp+50h] [rbp-11h] BYREF
  _DWORD *v7; // [rsp+58h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp-1h]
  struct _TOKEN_PRIVILEGES NewState; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+78h] [rbp+17h] BYREF
  __int64 *v11; // [rsp+98h] [rbp+37h]
  __int64 v12; // [rsp+A0h] [rbp+3Fh]

  TokenHandle = 0LL;
  v0 = 0;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v1 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, &TokenHandle);
    if ( v1 >= 0 )
    {
      v3 = 13LL;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v1 = NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v1 )
      {
        v8 = 8LL;
        v7 = v5;
        SystemInformation[0] = 1;
        SystemInformation[1] = 19;
        v5[0] = 16777220;
        v5[1] = 1;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
      }
    }
  }
  else
  {
    v1 = -1073741555;
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( v0 )
    RevertToSelf();
  if ( (unsigned int)dword_1800DC1E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    {
      LODWORD(v3) = v1;
      v11 = &v3;
      v12 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800C6161, 0LL, 0LL, 3u, &v10);
    }
  }
}
