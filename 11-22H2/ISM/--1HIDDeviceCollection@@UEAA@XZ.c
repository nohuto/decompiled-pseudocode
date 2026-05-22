/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800F3E00
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x18007FD8C (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _CallControlDeviceCollection::Create_::_1_::dtor$3 @ 0x180080831 (_CallControlDeviceCollection--Create_--_1_--dtor$3.c)
 *     _AugmentedInputDeviceCollection::AugmentedInputDeviceCollection_::_1_::dtor$0 @ 0x180080A76 (_AugmentedInputDeviceCollection--AugmentedInputDeviceCollection_--_1_--dtor$0.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800E2D0C (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800E6C10 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1800EC32E (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800EC410 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800EDE33 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800EDE88 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800EED2C (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??_ECallControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800EF620 (--_ECallControlDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800EFCF0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800F03F0 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$0 @ 0x1800F0C57 (_DockDeviceCollection--DockDeviceCollection_--_1_--dtor$0.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800F0D00 (--1DockDeviceCollection@@UEAA@XZ.c)
 *     _DockableDeviceCollection::DockableDeviceCollection_::_1_::dtor$0 @ 0x1800F1F9A (_DockableDeviceCollection--DockableDeviceCollection_--_1_--dtor$0.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800F2010 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800F3920 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800F3E50 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
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
