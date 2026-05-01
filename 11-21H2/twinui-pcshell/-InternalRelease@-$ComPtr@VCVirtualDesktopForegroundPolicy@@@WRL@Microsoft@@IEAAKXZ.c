/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C930
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180110D50 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180112588 (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopForegroundPolicy@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFB70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopF.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopForegroundPolicy>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
