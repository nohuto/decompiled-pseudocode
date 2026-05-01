/*
 * XREFs of HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x180002D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     CempGetTokenHostInfo @ 0x18002CA10 (CempGetTokenHostInfo.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivityForDesktopBridge(__int64 a1, void *a2, unsigned __int64 *a3)
{
  NTSTATUS TokenHostInfo; // ebx
  unsigned int v7; // [rsp+28h] [rbp-D8h]
  unsigned int v8; // [rsp+30h] [rbp-D0h]
  void *TokenHandle[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh]
  int v12; // [rsp+58h] [rbp-A8h]
  _BYTE v13[532]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v14; // [rsp+3F4h] [rbp+2F4h]

  TokenHandle[0] = 0LL;
  TokenHostInfo = NtOpenProcessToken(a2, 8u, TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle[0], v13);
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( TokenHostInfo >= 0 )
  {
    HampActivityPropertiesInitialize(L"BridgeAppActivity", &word_1800B66B4, (struct _HAM_ACTIVITY_PROPERTIES *)&v10);
    v10 = v10 & 0xFC7FFFFF | 0x2000000;
    if ( !(unsigned __int8)RtlIsMultiSessionSku() || v14 )
    {
      v11 |= 0x400u;
      v12 |= 0x200u;
    }
    LODWORD(TokenHandle[0]) = 2;
    TokenHostInfo = ArSrvCheckCreateActivityForHost(
                      a3,
                      (struct _RM_PSM_HOST_INFO *)v13,
                      a2,
                      (struct _HAM_ACTIVITY_PROPERTIES *)&v10,
                      (union _HAM_RESTART_PROPERTIES *)TokenHandle,
                      v7,
                      v8);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return (unsigned int)TokenHostInfo;
}
