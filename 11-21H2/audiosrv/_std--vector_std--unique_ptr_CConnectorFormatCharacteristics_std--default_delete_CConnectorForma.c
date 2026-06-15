/*
 * XREFs of _std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch$20 @ 0x18006F064
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x180143D1C (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics____std::allocator_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorFormatCharacteristics_std::default_delete_CConnectorFormatCharacteristics______::_1_::catch_20(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
