/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x18005DDF4
 * Callers:
 *     ?_Tidy@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180047A34 (-_Tidy@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConn.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x180047B28 (--$_Uninitialized_move@PEAV-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_del.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@2@_K1@Z @ 0x180047B58 (-_Change_array@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delet.c)
 *     _std::vector_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics____std::allocator_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics_______::_Emplace_reallocate_CConnectorProcessingModeCharacteristics____::_1_::catch$0 @ 0x18006F0EB (_std--vector_std--unique_ptr_CConnectorProcessingModeCharacteristics_std--default_delete_CConnec.c)
 *     _std::vector_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics____std::allocator_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics_______::_Emplace_reallocate_std::unique_ptr_CConnectorProcessingModeCharacteristics_std::default_delete_CConnectorProcessingModeCharacteristics______::_1_::catch$9 @ 0x180143EBD (_std--vector_std--unique_ptr_CConnectorProcessingModeCharacteristics_std--default_d_ea_180143EBD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x180143D1C (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x180143D84 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = *(_QWORD *)(v4 + 40);
        if ( v5 )
        {
          std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(
            v5,
            *(_QWORD *)(v4 + 48));
          std::_Deallocate<16,0>(
            *(void **)(v4 + 40),
            (*(_QWORD *)(v4 + 56) - *(_QWORD *)(v4 + 40)) & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)(v4 + 40) = 0LL;
          *(_QWORD *)(v4 + 48) = 0LL;
          *(_QWORD *)(v4 + 56) = 0LL;
        }
        v6 = *(_QWORD *)(v4 + 16);
        if ( v6 )
        {
          std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(
            v6,
            *(_QWORD *)(v4 + 24));
          std::_Deallocate<16,0>(
            *(void **)(v4 + 16),
            (*(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)(v4 + 16) = 0LL;
          *(_QWORD *)(v4 + 24) = 0LL;
          *(_QWORD *)(v4 + 32) = 0LL;
        }
        operator delete((void *)v4, 0x40uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
