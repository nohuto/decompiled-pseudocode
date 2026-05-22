/*
 * XREFs of ??1RIMDevice@@UEAA@XZ @ 0x1800E5760
 * Callers:
 *     ??_GRIMDevice@@UEAAPEAXI@Z @ 0x1800E57B0 (--_GRIMDevice@@UEAAPEAXI@Z.c)
 *     ??1HIDDevice@@UEAA@XZ @ 0x1800E57EC (--1HIDDevice@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall RIMDevice::~RIMDevice(RIMDevice *this)
{
  void *v2; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &RIMDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
