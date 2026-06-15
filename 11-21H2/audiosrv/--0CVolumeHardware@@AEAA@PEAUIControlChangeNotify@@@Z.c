/*
 * XREFs of ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x180046548
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180044D2C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 * Callees:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x180046600 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 */

CVolumeHardware *__fastcall CVolumeHardware::CVolumeHardware(CVolumeHardware *this, struct IControlChangeNotify *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeHardware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(GUID *)((char *)this + 264) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 288), 0, 0);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_BYTE *)this + 344) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  return this;
}
