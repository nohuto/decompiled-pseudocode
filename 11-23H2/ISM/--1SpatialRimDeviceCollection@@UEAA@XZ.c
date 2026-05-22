/*
 * XREFs of ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D7D08
 * Callers:
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x1800D8020 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CF41C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D704C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication.c)
 *     ?Close@?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800D81E0 (-Close@-$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAAXXZ.c)
 */

void __fastcall SpatialRimDeviceCollection::~SpatialRimDeviceCollection(SpatialRimDeviceCollection *this, void *a2)
{
  wil::details *v3; // rcx
  __int64 v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 372);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  std::_Deallocate<16,0>(
    *((void **)this + 367),
    (*((_QWORD *)this + 368) - *((_QWORD *)this + 367)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 367) = 0LL;
  *((_QWORD *)this + 368) = 0LL;
  *((_QWORD *)this + 369) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>,void *>>>(
    v4,
    *((_QWORD ***)this + 365));
  std::_Deallocate<16,0>(*((void **)this + 365), 0x28uLL);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 361);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2848));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 354);
  *((_QWORD *)this + 352) = &Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::`vftable';
  Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::Close();
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2768));
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 345);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
