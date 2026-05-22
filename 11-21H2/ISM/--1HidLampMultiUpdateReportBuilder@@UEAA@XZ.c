/*
 * XREFs of ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800D9A30
 * Callers:
 *     ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x1800D9AE0 (--_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??1LampMultiUpdateDeviceReport@@QEAA@XZ @ 0x1800D9A78 (--1LampMultiUpdateDeviceReport@@QEAA@XZ.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(
        HidLampMultiUpdateReportBuilder *this)
{
  RefCountedObject *v2; // rcx

  *(_QWORD *)this = &HidLampMultiUpdateReportBuilder::`vftable';
  v2 = (RefCountedObject *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    RefCountedObject::Release(v2);
  }
  LampMultiUpdateDeviceReport::~LampMultiUpdateDeviceReport((HidLampMultiUpdateReportBuilder *)((char *)this + 24));
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
