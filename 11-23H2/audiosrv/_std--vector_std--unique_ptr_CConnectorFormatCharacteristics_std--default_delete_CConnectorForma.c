/*
 * XREFs of _std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch$22 @ 0x18007AEEF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x1800060A4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
    *(void ****)(a2 + 32),
    *(void ****)(a2 + 48));
  std::_Deallocate<16,0>(*(void **)(a2 + 136), 8LL * *(_QWORD *)(a2 + 128));
  throw;
}
