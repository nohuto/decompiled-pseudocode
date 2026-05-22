/*
 * XREFs of ??1?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAA@XZ @ 0x180097BDC
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x180057124 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$18.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$19 @ 0x18005713D (_DWMInputRouter--DWMInputRouter_--_1_--dtor$19.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x180057156 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$0 @ 0x180098FDC (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$2 @ 0x1800D2C0D (_LampArrayDevice--ProcessLampState_--_1_--dtor$2.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$1 @ 0x1801349F2 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$1.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$0 @ 0x180140E0B (_DragNDropProcessor--OnInput_--_1_--dtor$0.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$0 @ 0x18014AD0E (_EdgyProcessor--OnInputDrag_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<LampUpdateState>::~vector<LampUpdateState>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
