/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x1800CC1DC
 * Callers:
 *     _GazeHidDevice::GazeHidDevice_::_1_::dtor$0 @ 0x1800C7A2A (_GazeHidDevice--GazeHidDevice_--_1_--dtor$0.c)
 *     ??_EDockDevice@@UEAAPEAXI@Z @ 0x1800CC230 (--_EDockDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800CCAAC (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall HIDDevice::~HIDDevice(HIDDevice *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &HIDDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  memset_0((char *)this + 60, 0, 0x40uLL);
  RIMDevice::~RIMDevice(this);
}
