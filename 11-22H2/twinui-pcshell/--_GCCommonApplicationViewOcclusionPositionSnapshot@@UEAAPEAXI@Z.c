/*
 * XREFs of ??_GCCommonApplicationViewOcclusionPositionSnapshot@@UEAAPEAXI@Z @ 0x180069E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CCommonApplicationViewOcclusionPositionSnapshot *__fastcall CCommonApplicationViewOcclusionPositionSnapshot::`scalar deleting destructor'(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        char a2)
{
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
