/*
 * XREFs of ??$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA?AV?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@0@AEAPEAX0AEAK1@Z @ 0x1800C824C
 * Callers:
 *     ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800C8630 (-CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<DockDevice,void * &,void * &,unsigned long &,unsigned long &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  __int64 v9; // r8
  int v10; // r11d
  int v11; // r9d
  _QWORD *result; // rax
  _QWORD *v13; // [rsp+40h] [rbp+8h]

  v13 = operator new(0x80uLL);
  v9 = *a3;
  v10 = *a5;
  v11 = *a4;
  v13[1] = *a2;
  v13[2] = v9;
  *((_DWORD *)v13 + 6) = v11;
  *((_DWORD *)v13 + 10) = v10;
  v13[4] = 0LL;
  v13[6] = 0LL;
  *((_DWORD *)v13 + 14) = 0;
  memset_0((char *)v13 + 60, 0, 0x40uLL);
  *v13 = &DockDevice::`vftable';
  result = a1;
  *a1 = v13;
  return result;
}
