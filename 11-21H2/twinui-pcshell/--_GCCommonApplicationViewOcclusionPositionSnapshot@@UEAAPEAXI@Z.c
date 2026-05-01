/*
 * XREFs of ??_GCCommonApplicationViewOcclusionPositionSnapshot@@UEAAPEAXI@Z @ 0x1800396B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CCommonApplicationViewOcclusionPositionSnapshot *__fastcall CCommonApplicationViewOcclusionPositionSnapshot::`scalar deleting destructor'(
        CCommonApplicationViewOcclusionPositionSnapshot *this,
        char a2)
{
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 128);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
