/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x180175A74
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180175DA0 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180081C60 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800FF9B4 (--1ManipulationInjector@@QEAA@XZ.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180178214 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180179304 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 10) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 70) != 2 )
    ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  ControllerProcessor::StopAutoRepeatTimer(this);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v4 = **((_DWORD **)this + 5);
  std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
    (_QWORD *)ControllerNavigationManager + 8,
    (const unsigned __int8 *)&v4);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 973);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 972);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 971);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 970);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 969);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 962);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 961);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 939);
  if ( *((_BYTE *)this + 7508) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 5952));
  if ( *((_BYTE *)this + 5948) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 4392));
  if ( *((_BYTE *)this + 4388) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 2832));
  if ( *((_BYTE *)this + 2828) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 1272));
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 448));
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 36);
  std::_Deallocate<16,0>(
    *((void **)this + 14),
    (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v3,
    *((_QWORD ***)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x18uLL);
  NonPointerProcessor::~NonPointerProcessor(this);
}
