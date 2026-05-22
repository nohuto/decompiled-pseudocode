/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800554F8
 * Callers:
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x18006DDA6 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$3 @ 0x18006E0F8 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$6 @ 0x18006E890 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$6.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x18006FAD6 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x180070120 (_dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x18015C46E (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x18015C481 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x180163513 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$2 @ 0x180166F64 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$2.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$4 @ 0x180166F87 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$4.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$9 @ 0x180166FE6 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$9.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$1 @ 0x1801A919D (_HapticInterface--HapticInterface_--_1_--dtor$1.c)
 *     _HapticsDevice::UpdateBamoProperties_::_1_::dtor$3 @ 0x1801AD72E (_HapticsDevice--UpdateBamoProperties_--_1_--dtor$3.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x1801B5435 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
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
