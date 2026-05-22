/*
 * XREFs of ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x1800D9A78
 * Callers:
 *     ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x1800D99A4 (--0HidLampMultiUpdateReportBuilder@@AEAA@XZ.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800D9A30 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport(LampMultiUpdateDeviceReport *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    operator delete[](v3);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    operator delete[](v4);
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
    operator delete[](v5);
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
    operator delete[](v6);
}
