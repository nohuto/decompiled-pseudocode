/*
 * XREFs of ??1?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006A2AC
 * Callers:
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$3 @ 0x180069F6F (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$3.c)
 *     _Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected_::_1_::dtor$0 @ 0x18007F5B0 (_Microsoft--BamoImpl--BaseBamoPeerImpl--OnDisconnected_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$19 @ 0x180083339 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$19.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$20 @ 0x180083352 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$20.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$21 @ 0x18008336B (_DWMInputRouter--DWMInputRouter_--_1_--dtor$21.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$0 @ 0x1800C1B36 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave_::_1_::dtor$1 @ 0x1800C1B42 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Leave_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$3 @ 0x1800FB744 (_LampArrayDevice--ProcessLampState_--_1_--dtor$3.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$1 @ 0x18015D352 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$1.c)
 *     _DragNDropProcessor::OnInput_::_1_::dtor$0 @ 0x18016DF90 (_DragNDropProcessor--OnInput_--_1_--dtor$0.c)
 *     _EdgyProcessor::OnInputDrag_::_1_::dtor$0 @ 0x1801778A0 (_EdgyProcessor--OnInputDrag_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
