/*
 * XREFs of ??1DragInputHandler@@EEAA@XZ @ 0x1804CFF20
 * Callers:
 *     ??_EDragInputHandler@@EEAAPEAXI@Z @ 0x1804D0030 (--_EDragInputHandler@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DragInputHandler::~DragInputHandler(DragInputHandler *this)
{
  *(_QWORD *)this = &DragInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
