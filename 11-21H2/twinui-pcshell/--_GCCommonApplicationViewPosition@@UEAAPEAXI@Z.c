/*
 * XREFs of ??_GCCommonApplicationViewPosition@@UEAAPEAXI@Z @ 0x1801589C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CCommonApplicationViewPosition *__fastcall CCommonApplicationViewPosition::`scalar deleting destructor'(
        CCommonApplicationViewPosition *this,
        char a2)
{
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
