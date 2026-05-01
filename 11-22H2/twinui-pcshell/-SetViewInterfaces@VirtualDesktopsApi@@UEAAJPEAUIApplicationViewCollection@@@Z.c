/*
 * XREFs of ?SetViewInterfaces@VirtualDesktopsApi@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x18013A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 */

__int64 __fastcall VirtualDesktopsApi::SetViewInterfaces(
        VirtualDesktopsApi *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 88);
  return 0LL;
}
