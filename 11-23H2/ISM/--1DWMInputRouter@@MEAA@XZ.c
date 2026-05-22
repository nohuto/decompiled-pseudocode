/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x1801B7FD4
 * Callers:
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$0 @ 0x18006EC7E (_MPCInputRouter--MPCInputRouter_--_1_--dtor$0.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180108830 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x1801B84BC (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800154A0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C34 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x1800A0EC8 (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DFB78 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@PEAX@std@@@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801B5588 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B7828 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr@UIRemoteV.c)
 */

void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  __int64 *v2; // rsi
  _QWORD *i; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `ISystemInputRouterForeground'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 9) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v2 = (__int64 *)((char *)this + 152);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 34);
  for ( i = (_QWORD *)**((_QWORD **)this + 12);
        i != *((_QWORD **)this + 12);
        i = (_QWORD *)*DWMInputRouter::RemoveTarget(this, &v12, i) )
  {
    ;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::clear((_QWORD *)this + 24);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 38);
  std::_Deallocate<16,0>(
    *((void **)this + 91),
    (*((_QWORD *)this + 92) - *((_QWORD *)this + 91)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>,void *>>>(
    v4,
    *((_QWORD ***)this + 89));
  std::_Deallocate<16,0>(*((void **)this + 89), 0x40uLL);
  v6 = (void *)*((_QWORD *)this + 85);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 87) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 85) = 0LL;
    *((_QWORD *)this + 86) = 0LL;
    *((_QWORD *)this + 87) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 82);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 84) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 82) = 0LL;
    *((_QWORD *)this + 83) = 0LL;
    *((_QWORD *)this + 84) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 79);
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 81) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 79) = 0LL;
    *((_QWORD *)this + 80) = 0LL;
    *((_QWORD *)this + 81) = 0LL;
  }
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)this + 488,
    v5);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)this + 344,
    v9);
  Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 32);
  std::_Deallocate<16,0>(
    *((void **)this + 27),
    (*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v10,
    *((_QWORD ***)this + 25));
  std::_Deallocate<16,0>(*((void **)this + 25), 0x20uLL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  std::_Deallocate<16,0>(
    *((void **)this + 14),
    (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
    v11,
    *((_QWORD ***)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x40uLL);
  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
}
