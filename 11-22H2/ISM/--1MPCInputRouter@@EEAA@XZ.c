/*
 * XREFs of ??1MPCInputRouter@@EEAA@XZ @ 0x180116E88
 * Callers:
 *     ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1801170E4 (--_GMPCInputRouter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall MPCInputRouter::~MPCInputRouter(MPCInputRouter *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx

  *(_QWORD *)this = &MPCInputRouter::`vftable'{for `ISystemInputRouter'};
  v2 = (__int64 *)((char *)this + 800);
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
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 100);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 122);
  std::_Deallocate<16,0>(
    *((void **)this + 117),
    (*((_QWORD *)this + 118) - *((_QWORD *)this + 117)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v3,
    *((_QWORD ***)this + 115));
  std::_Deallocate<16,0>(*((void **)this + 115), 0x20uLL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 103);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 102);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 101);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 99);
  DWMInputRouter::~DWMInputRouter(this);
}
