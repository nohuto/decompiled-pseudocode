/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x1801BFCBC
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x1801BFD90 (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x1801A5588 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 214) = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 213);
  if ( *((_BYTE *)this + 1700) )
    InjectionDevice::Remove((MouseProcessor *)((char *)this + 144));
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 14);
  NonPointerProcessor::~NonPointerProcessor((MouseProcessor *)((char *)this + 16));
}
