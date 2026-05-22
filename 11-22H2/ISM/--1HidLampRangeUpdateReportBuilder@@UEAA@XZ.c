/*
 * XREFs of ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1801032D4
 * Callers:
 *     ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180103350 (--_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(
        HidLampRangeUpdateReportBuilder *this)
{
  RefCountedObject *v2; // rcx

  *(_QWORD *)this = &HidLampRangeUpdateReportBuilder::`vftable';
  v2 = (RefCountedObject *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    RefCountedObject::Release(v2);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
