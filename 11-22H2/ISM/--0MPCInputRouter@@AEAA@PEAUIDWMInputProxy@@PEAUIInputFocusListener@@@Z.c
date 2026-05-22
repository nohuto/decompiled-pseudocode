/*
 * XREFs of ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18002B460
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18002B3A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18002B610 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x18002BA6C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
MPCInputRouter *__fastcall MPCInputRouter::MPCInputRouter(
        MPCInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  _QWORD *v4; // rax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DWMInputRouter::DWMInputRouter(this, a2, a3);
  *(_QWORD *)this = &MPCInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &MPCInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &MPCInputRouter::`vftable'{for `ISystemInputRouterForeground'};
  *((_QWORD *)this + 3) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 4) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 5) = &MPCInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 6) = &MPCInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 7) = &MPCInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &MPCInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 9) = &MPCInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 97) = &MPCInputRouter::`vftable'{for `IMPCInputRouter'};
  *((_QWORD *)this + 98) = &MPCInputRouter::`vftable'{for `IMPCExclusiveModeStateManager'};
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_OWORD *)this + 52) = 0LL;
  *((_OWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_BYTE *)this + 872) = 0;
  *((_DWORD *)this + 219) = 0;
  *((_BYTE *)this + 880) = 0;
  *((_DWORD *)this + 221) = 0;
  *((_QWORD *)this + 111) = 0LL;
  *((_BYTE *)this + 896) = 0;
  *((_DWORD *)this + 225) = 0;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 115) = v4;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 7LL;
  *((_QWORD *)this + 121) = 8LL;
  *((_DWORD *)this + 228) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>>::_Assign_grow(
    (char *)this + 936,
    16LL,
    *((_QWORD *)this + 115));
  *((_QWORD *)this + 122) = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 122);
  v5 = CoreUICreate((char *)this + 976);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return this;
}
