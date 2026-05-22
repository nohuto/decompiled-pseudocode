/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800E4EA0
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18006C182 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _CallControlDeviceCollection::Create_::_1_::dtor$3 @ 0x18006E1C6 (_CallControlDeviceCollection--Create_--_1_--dtor$3.c)
 *     _AugmentedInputDeviceCollection::AugmentedInputDeviceCollection_::_1_::dtor$0 @ 0x18006E40B (_AugmentedInputDeviceCollection--AugmentedInputDeviceCollection_--_1_--dtor$0.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D3E1C (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D7D08 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1800DD3CE (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800DD4B0 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800DEED3 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DEF28 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DFDCC (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??_ECallControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800E06C0 (--_ECallControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800E0D90 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800E1490 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$0 @ 0x1800E1CF7 (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$0.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800E1DA0 (--1DockDeviceCollection@@UEAA@XZ.c)
 *     _DockableDeviceCollection::DockableDeviceCollection_::_1_::dtor$0 @ 0x1800E303A (_DockableDeviceCollection--DockableDeviceCollection_--_1_--dtor$0.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800E30B0 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800E49C0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800E4EF0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v2 = (void *)*((_QWORD *)this + 343);
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
