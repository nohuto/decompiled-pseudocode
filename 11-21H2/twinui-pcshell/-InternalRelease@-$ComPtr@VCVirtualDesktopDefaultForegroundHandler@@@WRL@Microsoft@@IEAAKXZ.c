/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C958
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110C88 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180112080 (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18016529C (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801657CC (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180165880 (--$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopLock@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopL.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopLock>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
