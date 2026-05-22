/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x180056288
 * Callers:
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x1800803CF (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$3 @ 0x180080763 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$6 @ 0x1800831F4 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$6.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x1800835DD (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x180083CA0 (_dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x18016A6EE (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x18016A701 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x180171793 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$2 @ 0x1801751E4 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$2.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$4 @ 0x180175207 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$4.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$9 @ 0x180175266 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$9.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$1 @ 0x1801B717D (_HapticInterface--HapticInterface_--_1_--dtor$1.c)
 *     _HapticsDevice::UpdateBamoProperties_::_1_::dtor$3 @ 0x1801BB70E (_HapticsDevice--UpdateBamoProperties_--_1_--dtor$3.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x1801C2B55 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
