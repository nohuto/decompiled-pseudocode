/*
 * XREFs of ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x180154114
 * Callers:
 *     ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x180154270 (--_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x180089DA0 (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180154050 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInf.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NonBamoInputDeliveryServer::~NonBamoInputDeliveryServer(NonBamoInputDeliveryServer *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)this = &NonBamoInputDeliveryServer::`vftable'{for `IInputDeliveryServer'};
  *((_QWORD *)this + 1) = &NonBamoInputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  v2 = (__int64 *)((char *)this + 280);
  v3 = *((_QWORD *)this + 35);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  std::_Deallocate<16,0>(
    *((void **)this + 30),
    (*((_QWORD *)this + 31) - *((_QWORD *)this + 30)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,void *>>>(
    v4,
    *((_QWORD ***)this + 28));
  std::_Deallocate<16,0>(*((void **)this + 28), 0x68uLL);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64)this + 72,
    v5);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
