/*
 * XREFs of ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1803B4668
 * Callers:
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803B45E8 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ @ 0x1803B52E0 (-_Destroy@-$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1803B9788 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1DDAScreenCapture@@QEAA@XZ @ 0x1803B4608 (--1DDAScreenCapture@@QEAA@XZ.c)
 */

DDAScreenCapture *__fastcall DDAScreenCapture::`scalar deleting destructor'(DDAScreenCapture *this)
{
  DDAScreenCapture::~DDAScreenCapture(this);
  operator delete(this);
  return this;
}
