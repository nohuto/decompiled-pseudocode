/*
 * XREFs of ??0HidLampArrayDevice@@AEAA@XZ @ 0x1800EFF14
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800F0448 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

HidLampArrayDevice *__fastcall HidLampArrayDevice::HidLampArrayDevice(HidLampArrayDevice *this)
{
  HidLampArrayDevice *result; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *(_QWORD *)this = &HidLampArrayDevice::`vftable';
  *((_OWORD *)this + 34) = 0LL;
  *(_DWORD *)((char *)this + 538) = 0;
  *((_WORD *)this + 271) = 0;
  result = this;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *((_WORD *)this + 318) = 0;
  *((_QWORD *)this + 71) = 0LL;
  return result;
}
