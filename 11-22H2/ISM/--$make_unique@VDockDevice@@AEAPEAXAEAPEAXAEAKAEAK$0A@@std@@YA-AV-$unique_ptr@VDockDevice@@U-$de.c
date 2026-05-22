/*
 * XREFs of ??$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA?AV?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@0@AEAPEAX0AEAK1@Z @ 0x1800F0B18
 * Callers:
 *     ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800F0F40 (-CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<DockDevice,void * &,void * &,unsigned long &,unsigned long &,0>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r11d
  int v12; // r9d
  _QWORD *result; // rax
  _QWORD *v14; // [rsp+50h] [rbp+8h]

  v14 = operator new(0x80uLL);
  v9 = *a2;
  v10 = *a3;
  v11 = *a5;
  v12 = *a4;
  v14[4] = 0LL;
  v14[6] = 0LL;
  *((_DWORD *)v14 + 14) = 0;
  v14[1] = v9;
  v14[2] = v10;
  *((_DWORD *)v14 + 6) = v12;
  *((_DWORD *)v14 + 10) = v11;
  memset_0((char *)v14 + 60, 0, 0x40uLL);
  *v14 = &DockDevice::`vftable';
  result = a1;
  *a1 = v14;
  return result;
}
