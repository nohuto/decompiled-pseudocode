/*
 * XREFs of ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800CB8A8
 * Callers:
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1800CD298 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 * Callees:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x180046600 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct IControlChangeNotify *a2)
{
  CVolumeSoftware *result; // rax

  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 256), 0, 0);
  *((_QWORD *)this + 38) = 0LL;
  result = this;
  *((_DWORD *)this + 74) = 1;
  *((_DWORD *)this + 75) = 0;
  return result;
}
