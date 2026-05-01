/*
 * XREFs of RmpLaunchAllRpcServers @ 0x1800446B8
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180043960 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x180044808 (RmpLaunchRpcServer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     RmpShutdownRpcServer @ 0x18006BE00 (RmpShutdownRpcServer.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  RPC_IF_HANDLE **v4; // rdi
  int v5; // ebx
  void **v6; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-38h] BYREF
  void *v9[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]

  v0 = 0;
  *(_OWORD *)v9 = 0LL;
  v1 = 0LL;
  v10 = 0LL;
  v2 = 4LL;
  do
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(RmpRpcSddlStrings[v1], 1u, &SecurityDescriptor, 0LL) )
    {
      v9[v1] = 0LL;
      goto LABEL_15;
    }
    ++v0;
    v9[v1++] = SecurityDescriptor;
  }
  while ( v0 < 4 );
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v9[0]) )
  {
LABEL_15:
    v5 = -1073741823;
    goto LABEL_8;
  }
  v3 = 0;
  v4 = (RPC_IF_HANDLE **)&RmpRpcBindings;
  while ( 1 )
  {
    v5 = RmpLaunchRpcServer(**v4);
    if ( v5 < 0 )
      break;
    ++v3;
    v4 += 3;
    if ( v3 >= 0xB )
      goto LABEL_8;
  }
  RmpShutdownRpcServer();
LABEL_8:
  v6 = v9;
  do
  {
    if ( *v6 )
      LocalFree(*v6);
    ++v6;
    --v2;
  }
  while ( v2 );
  return (unsigned int)v5;
}
