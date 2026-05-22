/*
 * XREFs of ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18003315C
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180037444 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAA@W4EventOptions@1@@Z @ 0x180033340 (--0-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800386E4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800386E4.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18003AE80 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::SpatialRimDeviceCollection(
        SpatialRimDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  size_t size_of; // rax
  _QWORD *v8; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SpatialRimDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)this + 345);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2768), 0, 0);
  *((_BYTE *)this + 2808) = 0;
  *((_QWORD *)this + 352) = &Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::`vftable';
  *((_QWORD *)this + 353) = 0LL;
  *((_QWORD *)this + 354) = 0LL;
  *((_DWORD *)this + 710) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2848), 0, 0);
  *((_QWORD *)this + 361) = 0LL;
  *((_QWORD *)this + 362) = 0LL;
  *((_BYTE *)this + 2904) = 0;
  *((_DWORD *)this + 728) = 0;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
  size_of = std::_Get_size_of_n<40>(1LL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v8 = v8;
  v8[1] = v8;
  *((_QWORD *)this + 365) = v8;
  *((_QWORD *)this + 367) = 0LL;
  *((_QWORD *)this + 368) = 0LL;
  *((_QWORD *)this + 369) = 0LL;
  *((_QWORD *)this + 370) = 7LL;
  *((_QWORD *)this + 371) = 8LL;
  *((_DWORD *)this + 728) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    (char *)this + 2936,
    16LL,
    *((_QWORD *)this + 365));
  __0__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAA_W4EventOptions_1__Z(
    (char *)this + 2976,
    0LL);
  *((_QWORD *)this + 3) = a3;
  return this;
}
