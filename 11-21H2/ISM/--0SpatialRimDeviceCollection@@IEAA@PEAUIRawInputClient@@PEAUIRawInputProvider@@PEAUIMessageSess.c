/*
 * XREFs of ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18002DBE4
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18002AA1C (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003B4AC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800480B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180090E9C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=13
SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::SpatialRimDeviceCollection(
        SpatialRimDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  size_t size_of; // rax
  _QWORD *v8; // rax
  wil::details **v9; // r14
  void *v10; // rdx
  unsigned int v11; // r8d
  const char *v12; // r9
  wil::details *Event; // r15
  wil::details *v14; // rsi
  DWORD LastError; // ebx
  void *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 8) = 0;
  memset_0((char *)this + 88, 0, 0x218uLL);
  memset_0((char *)this + 624, 0, 0x800uLL);
  *((_DWORD *)this + 668) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 337) = 0LL;
  *((_OWORD *)this + 170) = 0LL;
  *((_BYTE *)this + 2736) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 343) = 0LL;
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &SpatialRimDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
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
  v9 = (wil::details **)((char *)this + 2976);
  *((_QWORD *)this + 372) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v11, v12);
  GetLastError();
  v14 = *v9;
  if ( *v9 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v14, v16);
    SetLastError(LastError);
  }
  *v9 = Event;
  *((_QWORD *)this + 3) = a3;
  return this;
}
