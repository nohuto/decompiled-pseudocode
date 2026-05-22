/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x1800E57EC
 * Callers:
 *     _GazeHidDevice::GazeHidDevice_::_1_::dtor$0 @ 0x1800E13BA (_GazeHidDevice--GazeHidDevice_--_1_--dtor$0.c)
 *     ??_EDockDevice@@UEAAPEAXI@Z @ 0x1800E5840 (--_EDockDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800E60C4 (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
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
