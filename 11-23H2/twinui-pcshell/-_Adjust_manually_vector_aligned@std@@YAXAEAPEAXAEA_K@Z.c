/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC
 * Callers:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x18008D5F0 (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18009582C (-evaluate_and_report@-$test_common_data@$00@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800BCF2C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800BCF8C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x1800BE5CC (-_Tidy@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXXZ.c)
 *     ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x1800C0FB4 (-_Tidy@-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@ce.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800C2B98 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1800C4710 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x18013DB60 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18014CBB0 (--1-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ.c)
 *     ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18014D220 (-overflow@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MEAAHH@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18016626C (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x18018D488 (--1-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1802E7C50 (-GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x1803D46C8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x1803D4AAC (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1803DC8E8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x1803DCA1C (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@@Z @ 0x180414AA8 (--$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18041623C (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x1804168E0 (--1-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x180416C00 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ??1?$list@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180416CDC (--1-$list@U-$pair@$$CBIV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@V-$al.c)
 *     ??1?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180416EB4 (--1-$unordered_map@IV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$hash@I@2@U-.c)
 *     ??1?$unordered_map@PEBXIU?$hash@PEBX@std@@U?$equal_to@PEBX@2@V?$allocator@U?$pair@QEBXI@std@@@2@@std@@QEAA@XZ @ 0x180417020 (--1-$unordered_map@PEBXIU-$hash@PEBX@std@@U-$equal_to@PEBX@2@V-$allocator@U-$pair@QEBXI@std@@@2@.c)
 *     ??1?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x1804170C4 (--1-$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U-$equal_to@Ubas.c)
 *     ??1?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x180417168 (--1-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041ADA4 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x18064BF50 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 *     ?uflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x1806E4E60 (-uflow@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAGXZ.c)
 *     ??1?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@QEAA@XZ @ 0x18070E890 (--1-$pair@$$CBUhstring@winrt@@V-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_.c)
 *     ??_G?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@QEAAPEAXI@Z @ 0x18070F5BC (--_G-$pair@$$CBUhstring@winrt@@V-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@.c)
 *     ??1?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@QEAA@XZ @ 0x18071D254 (--1-$unordered_map@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@U-$hash@Uhstring@winrt@@@std@.c)
 *     ?_Destroy@?$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D890 (-_Destroy@-$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x1803920EELL);
  }
  *a1 = v2;
}
