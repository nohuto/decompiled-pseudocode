/*
 * XREFs of HamRpcSrvCloseDesktopBridgeActivity @ 0x1800984B0
 * Callers:
 *     <none>
 * Callees:
 *     CempGetTokenHostInfo @ 0x18002CA40 (CempGetTokenHostInfo.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006CBC8 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 */

__int64 __fastcall HamRpcSrvCloseDesktopBridgeActivity(__int64 a1, void *a2, __int64 a3)
{
  int TokenHostInfo; // ebx
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  char v7[544]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v8; // [rsp+250h] [rbp-28h]

  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken(a2, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle, v7);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    TokenHostInfo = ArSrvCloseActivity(v8, a3);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return (unsigned int)TokenHostInfo;
}
