/*
 * XREFs of HamQueryCallerTerminateReason @ 0x180007B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007BFC (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     CempGetTokenHostInfo @ 0x180007FD0 (CempGetTokenHostInfo.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall HamQueryCallerTerminateReason(enum _HAM_TERMINATE_REASON *a1)
{
  NTSTATUS TokenHostInfo; // ebx
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int16 v5[232]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v6[96]; // [rsp+200h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle, v5);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    if ( (unsigned __int8)PsmIsDynamicKey(v5) )
    {
      *(_DWORD *)a1 = 0;
      return 0;
    }
    else
    {
      TokenHostInfo = HampUtilQueryRegistryTerminateReason(v5, v6, a1);
      if ( TokenHostInfo >= 0 )
        return 0;
    }
  }
  return (unsigned int)TokenHostInfo;
}
