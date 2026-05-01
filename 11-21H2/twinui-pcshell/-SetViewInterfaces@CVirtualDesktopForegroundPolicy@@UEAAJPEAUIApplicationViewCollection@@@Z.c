/*
 * XREFs of ?SetViewInterfaces@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE590
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 */

__int64 __fastcall CVirtualDesktopForegroundPolicy::SetViewInterfaces(
        CVirtualDesktopForegroundPolicy *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 40, a2);
  return 0LL;
}
