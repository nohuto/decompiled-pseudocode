/*
 * XREFs of RmAcquireResources @ 0x18001C100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180002974 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK_KPEAXHW4RmPend@@PEAHPEA_K@Z @ 0x18001BDFC (-RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK_KPEAXHW4RmPend@@PEAHPEA_K.c)
 */

CLIENT_CALL_RETURN __fastcall RmAcquireResources(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v15; // [rsp+60h] [rbp-18h] BYREF

  result.Simple = GetResourceManagerProxy(&v15);
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = ResourceManagerProxy::RmAcquireResources((__int64)v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10).Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
