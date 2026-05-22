/*
 * XREFs of ??1?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800AE50C
 * Callers:
 *     _Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected_::_1_::dtor$0 @ 0x18006BAD0 (_Microsoft--BamoImpl--BaseBamoPeerImpl--OnDisconnected_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$18 @ 0x18006E9BC (_DWMInputRouter--DWMInputRouter_--_1_--dtor$18.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$19 @ 0x18006E9D5 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$19.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x18006E9EE (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$0 @ 0x1800AF786 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$1 @ 0x1800AF792 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$2 @ 0x1800EC65F (_LampArrayDevice--ProcessLampState_--_1_--dtor$2.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$1 @ 0x18014F072 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$1.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$0 @ 0x18015FD10 (_DragNDropProcessor--OnInput_--_1_--dtor$0.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$0 @ 0x180169620 (_EdgyProcessor--OnInputDrag_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::~vector<Microsoft::BamoImpl::BamoPrincipalImpl *>(
        __int64 a1)
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
