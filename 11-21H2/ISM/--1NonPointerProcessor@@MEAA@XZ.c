/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x180194A64
 * Callers:
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x180057212 (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x180175959 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180175A74 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x180193DCC (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180194AC4 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801BA854 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801BAC88 (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801BACD8 (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801BBC24 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801CC0CC (--1TouchProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
