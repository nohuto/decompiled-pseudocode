/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800EEC44
 * Callers:
 *     _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$14 @ 0x1800EEF89 (_std--vector_std--vector_HidChannelValueInfo_std--allocator_HidChannelValueInfo____std--allocato.c)
 *     ??$_Uninitialized_move@PEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@YAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800EFE60 (--$_Uninitialized_move@PEAV-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@st.c)
 *     ??1?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F001C (--1-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@V-$al.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800F06CC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?_Change_array@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@_K1@Z @ 0x1800F2BD8 (-_Change_array@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *(_QWORD *)v3 )
      {
        std::_Deallocate<16,0>(*(void **)v3, 8 * ((__int64)(*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) >> 3));
        *(_QWORD *)v3 = 0LL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
      }
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
}
