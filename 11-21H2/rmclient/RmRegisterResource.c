/*
 * XREFs of RmRegisterResource @ 0x18001C290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180002974 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z @ 0x18001BFC4 (-RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmRegisterResource(int a1, int a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v7; // [rsp+48h] [rbp+20h] BYREF

  result.Simple = GetResourceManagerProxy(&v7);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmRegisterResource((__int64)v7, a1, a2, a3).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
