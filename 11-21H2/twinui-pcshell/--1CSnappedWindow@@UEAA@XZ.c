/*
 * XREFs of ??1CSnappedWindow@@UEAA@XZ @ 0x1805AB35C
 * Callers:
 *     ??_GCSnappedWindow@@UEAAPEAXI@Z @ 0x1805AB390 (--_GCSnappedWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSnappedWindow::~CSnappedWindow(CSnappedWindow *this)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
