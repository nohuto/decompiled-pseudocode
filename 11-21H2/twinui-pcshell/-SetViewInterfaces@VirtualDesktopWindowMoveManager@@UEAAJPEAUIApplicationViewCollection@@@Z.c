/*
 * XREFs of ?SetViewInterfaces@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::SetViewInterfaces(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 64, a2);
  return 0LL;
}
