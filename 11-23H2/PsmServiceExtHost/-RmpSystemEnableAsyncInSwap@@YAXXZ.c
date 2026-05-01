/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18008EB8C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004695C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // edi
  NTSTATUS v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp-29h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-21h] BYREF
  int v5; // [rsp+48h] [rbp-19h] BYREF
  __int64 v6; // [rsp+4Ch] [rbp-15h]
  int v7; // [rsp+54h] [rbp-Dh]
  _DWORD SystemInformation[2]; // [rsp+58h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 *v13; // [rsp+A0h] [rbp+3Fh]
  __int64 v14; // [rsp+A8h] [rbp+47h]

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
        v10 = 16LL;
        v9 = &v5;
        SystemInformation[0] = 1;
        SystemInformation[1] = 19;
        v7 = 0;
        v5 = 16777221;
        v6 = 1LL;
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
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    LODWORD(v3) = v1;
    v13 = &v3;
    v14 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800C687D, 0LL, 0LL, 3u, &v12);
  }
}
