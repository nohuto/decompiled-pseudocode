/*
 * XREFs of ??1TabletModeInputHandler@@EEAA@XZ @ 0x1805D8E24
 * Callers:
 *     ??_ETabletModeInputHandler@@EEAAPEAXI@Z @ 0x1805D8E70 (--_ETabletModeInputHandler@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall TabletModeInputHandler::~TabletModeInputHandler(TabletModeInputHandler *this)
{
  *(_QWORD *)this = &TabletModeInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputHandler>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
