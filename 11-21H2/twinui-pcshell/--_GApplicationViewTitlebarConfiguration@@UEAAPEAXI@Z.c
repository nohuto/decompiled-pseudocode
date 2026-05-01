/*
 * XREFs of ??_GApplicationViewTitlebarConfiguration@@UEAAPEAXI@Z @ 0x180153320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ApplicationViewTitlebarConfiguration *__fastcall ApplicationViewTitlebarConfiguration::`scalar deleting destructor'(
        ApplicationViewTitlebarConfiguration *this,
        char a2)
{
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
