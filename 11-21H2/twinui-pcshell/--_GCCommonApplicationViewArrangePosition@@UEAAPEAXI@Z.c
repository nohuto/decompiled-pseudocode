/*
 * XREFs of ??_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z @ 0x180155C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CCommonApplicationViewArrangePosition *__fastcall CCommonApplicationViewArrangePosition::`scalar deleting destructor'(
        CCommonApplicationViewArrangePosition *this,
        char a2)
{
  *((_DWORD *)this + 21) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
