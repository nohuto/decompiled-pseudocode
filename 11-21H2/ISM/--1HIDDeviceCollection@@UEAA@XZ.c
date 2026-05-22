/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800CB890
 * Callers:
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$3 @ 0x18005535A (_AugmentedInputDeviceCollection--Create_--_1_--dtor$3.c)
 *     _SystemControlDeviceCollection::Create_::_1_::dtor$3 @ 0x1800553B4 (_SystemControlDeviceCollection--Create_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x180055AA6 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800BACD8 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800BEDA0 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$0 @ 0x1800C4326 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$0.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800C4408 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1800C5C93 (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800C5CE8 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800C6B54 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800C73F0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800C7B00 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800C83F8 (--1DockDeviceCollection@@UEAA@XZ.c)
 *     _DockableDeviceCollection::DockableDeviceCollection_::_1_::dtor$0 @ 0x1800C99AA (_DockableDeviceCollection--DockableDeviceCollection_--_1_--dtor$0.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800C9A20 (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800CB2F0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800CB8E0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
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
