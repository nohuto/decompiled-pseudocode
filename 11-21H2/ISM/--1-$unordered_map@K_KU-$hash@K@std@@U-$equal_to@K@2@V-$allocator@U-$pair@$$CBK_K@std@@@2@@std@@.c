/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800496B8
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$6 @ 0x180056FF8 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$6.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x1800571B1 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$3 @ 0x180058810 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$3.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x180058838 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x180058D30 (_dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x18013D2DA (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x18013D2ED (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x1801447DB (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$2 @ 0x1801483B7 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$2.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$4 @ 0x1801483DA (_EdgyProcessor--EdgyProcessor_--_1_--dtor$4.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$9 @ 0x180148439 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$9.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$1 @ 0x18018B039 (_HapticInterface--HapticInterface_--_1_--dtor$1.c)
 *     _HapticsDevice::UpdateBamoProperties_::_1_::dtor$3 @ 0x18018F3CE (_HapticsDevice--UpdateBamoProperties_--_1_--dtor$3.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x18019737F (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
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
